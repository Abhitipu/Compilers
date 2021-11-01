#include "ass6_19CS10069_19CS30007_translator.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

extern FILE *yyin;
extern vector<string> stringsToBePrinted;               // by printString meth TODO

using namespace std;

int functionLabelCount=0;							
map<int, int> labelSerialNumber;				                    // map from quad number to label number
ofstream out;								            // asm file stream
vector <quad> Array;						            // quad Array
string asmFileName ="ass6_19CS10069_19CS30007";		        // asm file name
string testFileName ="ass6_19CS10069_19CS30007_test";		// input file name


// take in a string to see if it is a number or not
bool isNumber(string s) {
    if(s.empty())
        return false;

    if(s[0] == '-' || s[0] == '+')
        s = s.substr(1);
    
    if(s.empty())
        return false;

    for(auto u: s)
        if(!isdigit(u)) 
            return false;
        
    return true;
}

void computeActivationRecord(symtable *st) {
    // TODO: maybe augment return waala logic
    int param_offset = -20;
    int locals_offset = -24;
    // int param_offset = 8;
    // int locals_offset = -4;

    for(auto &it: st->symbols) {
        // it.category is not working TODO: fix this
        if(it.category == "param") {
            st->ActivationRecord[it.name] = param_offset;
            param_offset += it.size;
        } else if(it.name != "return") {
            st->ActivationRecord[it.name] = locals_offset;
            locals_offset -= it.size;
        }
    }    
    return;
}

void generateAsm() {
    // We are generating the .s file here

	// Add the quads for the three address codes
    Array = Q.Array;

    for(auto &u: Array) {
        const auto v = u.op;
        vector<string> operations = {"goto", "<", ">", "<=", ">=", "==", "!="};

        for(auto &operation: operations)
            if(v == operation) {
                int targetLabel = stoi(u.res);
                labelSerialNumber[targetLabel] = 1;
            }
    }

	// Basically we assign a unique map to each unique label using prefix sums
    for(auto it = labelSerialNumber.begin(); it != labelSerialNumber.end(); ++it) {
        if(it != labelSerialNumber.begin()) {
            auto previous = prev(it);
            it->second += previous->second;
        }
    }

    // flatten the global ST
    list<symtable*> tableList;

    for(auto& it: ST->symbols)
        if(it.nested != NULL)
            tableList.push_back(it.nested);

    // compute activation record for each 
    for(auto it: tableList)
        computeActivationRecord(it);

    ofstream asmFile;
    asmFile.open(asmFileName + ".s");

    // beginning of the .s file
    asmFile << "\t.file\t";
    asmFile << "\"" << testFileName << ".c\"\n";

    asmFile << "\t.text\n";

    for(auto& it: ST->symbols) {
        if(it.category != "function") {
            if(it.val != "") {
                // no initial value
                if(it.type->type == "char") {
                    asmFile << "\t.globl\t" << it.name << "\n";
                    asmFile << "\t.type\t" << it.name << ", @object\n";
                    asmFile << "\t.size\t" << it.name << ", 1\n";
                    asmFile << it.name << ":\n";
                    asmFile << "\t.byte\t" << it.val << "\n";
                }

                if(it.type->type == "int") {
                    asmFile << "\t.globl\t" << it.name << "\n";
                    asmFile << "\t.data\n";
                    asmFile << "\t.align 4\n";
                    asmFile << "\t.type\t" << it.name << ", @object\n";
                    asmFile << "\t.size\t" << it.name << ", 4\n";
                    asmFile << it.name << ":\n";
                    asmFile << "\t.long\t" << it.val << "\n";
                }	
            } else {
                // initial value specified
                asmFile << "\t.comm\t" << it.name << ", " << it.size << ", " << it.size << "\n";
            }
        }
    }


    // Dealing with the strings to be printed in the program
    if(!stringsToBePrinted.empty()) {
        asmFile << "\t.section\t.rodata\n";
        int cnt = 0;
        for(auto& it: stringsToBePrinted) {
			asmFile << ".LC" << cnt++ << it << ":\n";
			asmFile << "\t.string\t" << it << "\n";
        }
    }

    // beginning of the text section
    asmFile << "\t.text\n";
    
    // Ponder: what are these for?
    vector <string> params;
    map<string, int> theMap;

    int opSerialNumber = 0;

    for(auto it: Array){
        if(labelSerialNumber.count(opSerialNumber))
            asmFile<< ".L"<< labelSerialNumber[opSerialNumber]<<": "<<'\n';

		string op = it.op;
		string arg1 = it.arg1;
		string arg2 = it.arg2;
		string res = it.res;
		string s = arg2;        // change this later
        

        // if param -> add to the param list
		if(op=="param"){
			params.push_back(res);
		} else{

			// Binary Operations
			
			// addition operation
			if (op == "+") {
				if (isNumber(arg2)) {
					asmFile << "\taddl \t$" << arg2 << ", " << ST->ActivationRecord[arg1] << "(%rbp)";
				}
				else {
					asmFile << "\tmovl \t" << ST->ActivationRecord[arg1] << "(%rbp), " << "%eax" << '\n';
					asmFile << "\tmovl \t" << ST->ActivationRecord[arg2] << "(%rbp), " << "%edx" << '\n';
					asmFile << "\taddl \t%edx, %eax\n";
					asmFile << "\tmovl \t%eax, " << ST->ActivationRecord[res] << "(%rbp)";
				}
			}

			// subtract operation
			else if (op=="-") {
				asmFile << "\tmovl \t" << ST->ActivationRecord[arg1] << "(%rbp), " << "%eax" << '\n';
				asmFile << "\tmovl \t" << ST->ActivationRecord[arg2] << "(%rbp), " << "%edx" << '\n';
				asmFile << "\tsubl \t%edx, %eax\n";
				asmFile << "\tmovl \t%eax, " << ST->ActivationRecord[res] << "(%rbp)";
			}

			// multiplcation operator
			else if (op=="*") {
				asmFile << "\tmovl \t" << ST->ActivationRecord[arg1] << "(%rbp), " << "%eax" << '\n';
				
                // check this
				if (isNumber(arg2)) {
					asmFile << "\timull \t$" << arg2 << ", " << "%eax" << '\n';
					symtable* t = ST;
					string value;
					for (auto& it : t->symbols) {
						if(it.name == arg1) 
							value=it.val; 
					}
					// stores the numerical value of the result
					theMap[res]=stoi(arg2)*stoi(value);
				}
				else 
            		asmFile << "\timull \t" << ST->ActivationRecord[arg2] << "(%rbp), " << "%eax" << '\n';
				
                asmFile << "\tmovl \t%eax, " << ST->ActivationRecord[res] << "(%rbp)";			
			}

			// divide operation
			else if(op=="/") {
				asmFile << "\tmovl \t" << ST->ActivationRecord[arg1] << "(%rbp), " << "%eax" << '\n';
				asmFile << "\tcltd" << '\n';
				asmFile << "\tidivl \t" << ST->ActivationRecord[arg2] << "(%rbp)" << '\n';
				asmFile << "\tmovl \t%eax, " << ST->ActivationRecord[res] << "(%rbp)";		
			}

			// Ignoring bitwise operations
			else if (op=="%")		    
				asmFile << res << " = " << arg1 << " % " << arg2;
			else if (op=="^")			
				asmFile << res << " = " << arg1 << " ^ " << arg2;
			else if (op=="|")		    
				asmFile << res << " = " << arg1 << " | " << arg2;
			else if (op=="&")		    
				asmFile << res << " = " << arg1 << " & " << arg2;
			
			// Ignoring shift operations
			else if (op=="<<")		    
				asmFile << res << " = " << arg1 << " << " << arg2;
			else if (op==">>")		    
				asmFile << res << " = " << arg1 << " >> " << arg2;

			// assignment
			else if (op=="=")	{
				if (isNumber(arg1))
					asmFile << "\tmovl\t$" << arg1 << ", " << "%eax" << '\n';
				else
					asmFile << "\tmovl\t" << ST->ActivationRecord[arg1] << "(%rbp), " << "%eax" << '\n';
                    
				asmFile << "\tmovl \t%eax, " << ST->ActivationRecord[res] << "(%rbp)";
			}

			// dereferencing
			else if (op=="=*")
				asmFile << "\tmovq \t$.LC" << arg1 << ", " << ST->ActivationRecord[res] << "(%rbp)";
			
			// todo in y
			else if (op=="equalchar")	
				asmFile << "\tmovb\t$" << arg1 << ", " << ST->ActivationRecord[res] << "(%rbp)";

            else if(op=="equalstr")
                asmFile << "\tmovq \t$.LC" << arg1 << ", " << ST->ActivationRecord[res] << "(%rbp)";

			// Relational Operations
			else if (op=="==") {
				asmFile << "\tmovl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << ST->ActivationRecord[arg2] << "(%rbp), %eax\n";
				asmFile << "\tje .L" << labelSerialNumber[stoi(res)];
			}

			else if (op=="!=") {
				asmFile << "\tmovl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << ST->ActivationRecord[arg2] << "(%rbp), %eax\n";
				asmFile << "\tjne .L" << labelSerialNumber[stoi(res)];
			}
			else if (op=="<") {
				asmFile << "\tmovl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << ST->ActivationRecord[arg2] << "(%rbp), %eax\n";
				asmFile << "\tjl .L" << labelSerialNumber[stoi(res)];
			}
			else if (op==">") {
				asmFile << "\tmovl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << ST->ActivationRecord[arg2] << "(%rbp), %eax\n";
				asmFile << "\tjg .L" << labelSerialNumber[stoi(res)];
			}
			else if (op==">=") {
				asmFile << "\tmovl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << ST->ActivationRecord[arg2] << "(%rbp), %eax\n";
				asmFile << "\tjge .L" << labelSerialNumber[stoi(res)];
			}
			else if (op=="<=") {
				asmFile << "\tmovl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << ST->ActivationRecord[arg2] << "(%rbp), %eax\n";
				asmFile << "\tjle .L" << labelSerialNumber[stoi(res)];
			}
			else if (op=="goto") {
				asmFile << "\tjmp .L" << labelSerialNumber[stoi(res)];
			}

			// Unary Operators
            // Extracting the address
			else if (op=="=&") {
				asmFile << "\tleaq\t" << ST->ActivationRecord[arg1] << "(%rbp), %rax\n";
				asmFile << "\tmovq \t%rax, " <<  ST->ActivationRecord[res] << "(%rbp)";
			}
            // What is this?
			else if (op=="=*") {// TODO
				asmFile << "\tmovl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tmovl\t(%eax),%eax\n";
				asmFile << "\tmovl \t%eax, " <<  ST->ActivationRecord[res] << "(%rbp)";	
			}
            // And this??
			else if (op=="*=") { // TODO
				asmFile << "\tmovl\t" << ST->ActivationRecord[res] << "(%rbp), %eax\n";
				asmFile << "\tmovl\t" << ST->ActivationRecord[arg1] << "(%rbp), %edx\n";
				asmFile << "\tmovl\t%edx, (%eax)";
			} 			
            // This is simple
			else if (op=="uminus") {
				asmFile << "\tnegl\t" << ST->ActivationRecord[arg1] << "(%rbp)";
			}
            // Ignored for now
			else if (op=="~")		        
				asmFile << res 	<< " = ~" << arg1;
			else if (op=="!")			
				asmFile << res 	<< " = !" << arg1;

			else if (op=="=[]") { 
				// TODO []= or []=
				int off=0;
				off=theMap[arg2]*(-1)+ST->ActivationRecord[arg1];
				asmFile << "\tmovq\t" << off << "(%rbp), "<<"%rax" << '\n';
				asmFile << "\tmovq \t%rax, " <<  ST->ActivationRecord[res] << "(%rbp)";
			}	

			else if (op=="[]=") { 
				// TODO also check if offset is correct according to our AR standards
				int off=0;
				off=theMap[arg1]*(-1)+ST->ActivationRecord[res];
				asmFile << "\tmovq\t" << ST->ActivationRecord[arg2] << "(%rbp), "<<"%rdx" << '\n';
				asmFile << "\tmovq\t" << "%rdx, " << off << "(%rbp)";
			}

			else if (op=="return") {
				if(res!="") 
                    asmFile << "\tmovl\t" << ST->ActivationRecord[res] << "(%rbp), "<<"%eax";
				else 
                    asmFile << "\tnop";
			}

			else if (op=="param") {
				params.push_back(res);
			}

			// call a function
			else if (op=="call") {
				// Function Table
				symtable* t = globalST->lookup(arg1)->nested;

				int i = 0, paramCount = 0;	// index

                for(auto& symbol: t->symbols) {
					if (symbol.category == "param") {
						if(paramCount==0) {
							asmFile << "\tmovl \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%eax" << '\n';
							asmFile << "\tmovq \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%rdi" << '\n';
						}
						else if(paramCount==1) {
							asmFile << "\tmovl \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%eax" << '\n';
							asmFile << "\tmovq \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%rsi" << '\n';
						}
						else if(paramCount==2) {
							asmFile << "\tmovl \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%eax" << '\n';
							asmFile << "\tmovq \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%rdx" << '\n';
						}
						else if(paramCount==3) {
							asmFile << "\tmovl \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%eax" << '\n';
							asmFile << "\tmovq \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%rcx" << '\n';
						}
						else {
							asmFile << "\tmovq \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%rdi" << '\n';							
						}

                        ++paramCount;
					}
					else 
                        break;
                    ++i;
				}

				params.clear();
				asmFile << "\tcall\t"<< arg1 << '\n';
				asmFile << "\tmovl\t%eax, " << ST->ActivationRecord[res] << "(%rbp)";
			}

			else if (op=="func") { 
				// prologue of a function
				asmFile << "\t.globl\t" << res << "\n";
				asmFile << "\t.type\t"	<< res << ", @function\n";
				asmFile << res << ": \n";
				asmFile << ".LFB" << functionLabelCount <<":" << '\n';
				asmFile << "\t.cfi_startproc" << '\n';
				asmFile << "\tpushq \t%rbp" << '\n';
				asmFile << "\t.cfi_def_cfa_offset 8" << '\n';
				asmFile << "\t.cfi_offset 5, -8" << '\n';
				asmFile << "\tmovq \t%rsp, %rbp" << '\n';
				asmFile << "\t.cfi_def_cfa_register 5" << '\n';

				ST = globalST->lookup(res)->nested;
				asmFile << "\tsubq\t$" << ST->symbols.back().offset+24 << ", %rsp"<<'\n';
				
				// Function Table

				int paramCount = 0;
                for(auto &symbol: ST->symbols) {
					if (symbol.category== "param") {

						if (paramCount==0)
							asmFile << "\tmovq\t%rdi, " << ST->ActivationRecord[symbol.name] << "(%rbp)";

						else if(paramCount==1)
							asmFile << "\n\tmovq\t%rsi, " << ST->ActivationRecord[symbol.name] << "(%rbp)";

						else if (paramCount==2) 
							asmFile << "\n\tmovq\t%rdx, " << ST->ActivationRecord[symbol.name] << "(%rbp)";
						
						else if(paramCount==3)
							asmFile << "\n\tmovq\t%rcx, " << ST->ActivationRecord[symbol.name] << "(%rbp)";

						paramCount++;
					}
					else 
                        break;
				}
			}
				
			// epilogue of a function
			else if (op=="funcend") { 
				asmFile << "\tleave\n";
				asmFile << "\t.cfi_restore 5\n";
				asmFile << "\t.cfi_def_cfa 4, 4\n";
				asmFile << "\tret\n";
				asmFile << "\t.cfi_endproc" << '\n';
				asmFile << ".LFE" << functionLabelCount++ <<":" << '\n';
				asmFile << "\t.size\t"<< res << ", .-" << res;
			}
			else 
				asmFile << "\top";
			
			asmFile << '\n';
		}
        opSerialNumber++;
    }
    
    return;
}

// // make a function which takes a stream operator and writes to it
// template <typename T>
// ostream& operator<<(ostream& os, const vector<T>& v) {
//     for(auto& it: v)
//         os << it << " ";
//     return os;
// }

int main() {
    label_table.clear();

    table_count = 0;                                                                                    // count of nested table
    globalST=new symtable("Global");                                                                    // Global Symbol Table
    ST = globalST;
	symbolTableSuffix = "@Global";
	lookupInsideParent = true;
    parST = NULL;
    loop_name = "";

    if(yyparse()){
        cout<<"Error while parsing\n";
    }
    else{
        globalST->update();                                                                                 // update the global Symbol Table
        cout<<"\n";
        Q.print();                                                                                          // print the three address codes
        cout << "\nSYMBOL TABLES:\n\n";
        globalST->print();                                                                                  // print all Symbol Tables
        // generateAsm();
    }
}
