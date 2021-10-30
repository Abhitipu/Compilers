#include "ass6_19CS10069_19CS30007_translator.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

extern FILE *yyin;
extern vector<string> stringsToBePrinted;               // by printString meth

using namespace std;

int labelCount=0;							
map<int, int> labelMap;				                    // map from quad number to label number
ofstream out;								            // asm file stream
vector <quad> Array;						            // quad Array
string asmFileName ="ass6_19CS10069_19CS30007";		        // asm file name
string testFileName ="ass6_19CS10069_19CS30007_test";		// input file name


void computeActivationRecord(symtable *st) {
    // TODO: maybe augment return waala logic
    int param_offset = 8;
    int locals_offset = -4;

    for(auto &it: st->symbols) {
        // it.category is not working TODO: fix this
        if(it.category == "param") {
            st->ActivationRecord[it.name] = param_offset;
            param_offset += it.size;
        } else if(it.name != "return") {
            st->ActivationRecord[it.name] = locals_offset;
            locals_offset += it.size;
        }
    }    
    return;
}

void generateAsm() {
    // Ismein kya karna hai?
    Array = Q.Array;

    for(auto &u: Array) {
        const auto v = u.op;
        vector<string> operations = {"goto", "<", ">", "<=", ">=", "==", "!="};

        for(auto &operation: operations)
            if(v == operation) {
                int cur = stoi(u.res.c_str());
                labelMap[cur] = 1;
            }
    }

    for(auto it = labelMap.begin(); it != labelMap.end(); ++it) {
        if(it != labelMap.begin()) {
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
                if(it.type->type == "CHAR") {
                    asmFile << "\t.globl\t" << it.name << "\n";
                    asmFile << "\t.type\t" << it.name << ", @object\n";
                    asmFile << "\t.size\t" << it.name << ", 1\n";
                    asmFile << it.name << ":\n";
                    asmFile << "\t.byte\t" << it.val << "\n";
                }

                if(it.type->type == "INT") {
                    asmFile << "\t.globl\t" << it.name << "\n";
                    asmFile << "\t.data\n";
                    asmFile << "\t.align 4\n";
                    asmFile << "\t.type\t" << it.name << ", @object\n";
                    asmFile << "\t.size\t" << it.name << ", 4\n";
                    asmFile << it.name << ":\n";
                    asmFile << "\t.long\t" << it.val << "\n";
                }	
            } else {
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

    
    vector <string> params;
    map<string, int> theMap;
    int opSerialNumber = 0;
    for( auto it: Array){
        if(labelMap.count(opSerialNumber)){
            asmFile<< ".L"<< (2*labelCount + labelMap.at(opSerialNumber) + 2)<<": "<<'\n';
        }

        string op = it.op;
        string arg1 = it.arg1;
        string arg2 = it.arg2;
        string res = it.res;
        string s = arg2;        // change this later
        

        // if param -> add to the param list
		if(op=="PARAM"){
			params.push_back(res);
		}
		else{
			asmFile << "\t";

			// Binary Operations
			// addition operation
			if (op=="ADD") {
				bool flag=true;
				if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) flag=false ;
				else{
					char * p ;
					strtol(s.c_str(), &p, 10) ;
					if(*p == 0) flag=true ;
					else flag=false;
				}
				if (flag) {
					asmFile << "addl \t$" << atoi(arg2.c_str()) << ", " << ST->ActivationRecord[arg1] << "(%rbp)";
				}
				else {
					asmFile << "movl \t" << ST->ActivationRecord[arg1] << "(%rbp), " << "%eax" << endl;
					asmFile << "\tmovl \t" << ST->ActivationRecord[arg2] << "(%rbp), " << "%edx" << endl;
					asmFile << "\taddl \t%edx, %eax\n";
					asmFile << "\tmovl \t%eax, " << ST->ActivationRecord[res] << "(%rbp)";
				}
			}
			// subtract operation
			else if (op=="SUB") {
				asmFile << "movl \t" << ST->ActivationRecord[arg1] << "(%rbp), " << "%eax" << endl;
				asmFile << "\tmovl \t" << ST->ActivationRecord[arg2] << "(%rbp), " << "%edx" << endl;
				asmFile << "\tsubl \t%edx, %eax\n";
				asmFile << "\tmovl \t%eax, " << ST->ActivationRecord[res] << "(%rbp)";
			}
			// multiplcation operator
			else if (op=="MULT") {
				asmFile << "movl \t" << ST->ActivationRecord[arg1] << "(%rbp), " << "%eax" << endl;
				bool flag=true;
				if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) flag=false ;
				else{
					char * p ;
					strtol(s.c_str(), &p, 10) ;
					if(*p == 0) flag=true ;
					else flag=false;
				}
				if (flag) {
					asmFile << "\timull \t$" << atoi(arg2.c_str()) << ", " << "%eax" << endl;
					symtable* t = ST;
					string val;
					for (list <sym>::iterator it = t->symbols.begin(); it!=t->symbols.end(); it++) {
						if(it->name==arg1) val=it->val; 
					}
					theMap[res]=atoi(arg2.c_str())*atoi(val.c_str());
				}
				else asmFile << "\timull \t" << ST->ActivationRecord[arg2] << "(%rbp), " << "%eax" << endl;
				asmFile << "\tmovl \t%eax, " << ST->ActivationRecord[res] << "(%rbp)";			
			}
			// divide operation
			else if(op=="DIVIDE") {
				asmFile << "movl \t" << ST->ActivationRecord[arg1] << "(%rbp), " << "%eax" << endl;
				asmFile << "\tcltd" << endl;
				asmFile << "\tidivl \t" << ST->ActivationRecord[arg2] << "(%rbp)" << endl;
				asmFile << "\tmovl \t%eax, " << ST->ActivationRecord[res] << "(%rbp)";		
			}

			// Bit Operators /* Ignored */
			else if (op=="MODOP")		asmFile << res << " = " << arg1 << " % " << arg2;
			else if (op=="XOR")			asmFile << res << " = " << arg1 << " ^ " << arg2;
			else if (op=="INOR")		asmFile << res << " = " << arg1 << " | " << arg2;
			else if (op=="BAND")		asmFile << res << " = " << arg1 << " & " << arg2;
			// Shift Operations /* Ignored */
			else if (op=="LEFTOP")		asmFile << res << " = " << arg1 << " << " << arg2;
			else if (op=="RIGHTOP")		asmFile << res << " = " << arg1 << " >> " << arg2;

			// copy
			else if (op=="EQUAL")	{
				s=arg1;
				bool flag=true;
				if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) flag=false ;
				else{
					char * p ;
					strtol(s.c_str(), &p, 10) ;
					if(*p == 0) flag=true ;
					else flag=false;
				}
				if (flag) 
					asmFile << "movl\t$" << atoi(arg1.c_str()) << ", " << "%eax" << endl;
				else
					asmFile << "movl\t" << ST->ActivationRecord[arg1] << "(%rbp), " << "%eax" << endl;
				asmFile << "\tmovl \t%eax, " << ST->ActivationRecord[res] << "(%rbp)";
			}			
			else if (op=="EQUALSTR")	{
				asmFile << "movq \t$.LC" << arg1 << ", " << ST->ActivationRecord[res] << "(%rbp)";
			}
			else if (op=="EQUALCHAR")	{
				asmFile << "movb\t$" << atoi(arg1.c_str()) << ", " << ST->ActivationRecord[res] << "(%rbp)";
			}	

			// Relational Operations
			else if (op=="EQOP") {
				asmFile << "movl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << ST->ActivationRecord[arg2] << "(%rbp), %eax\n";
				asmFile << "\tje .L" << (2*labelCount+labelMap.at(atoi( res.c_str() )) +2 );
			}
			else if (op=="NEOP") {
				asmFile << "movl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << ST->ActivationRecord[arg2] << "(%rbp), %eax\n";
				asmFile << "\tjne .L" << (2*labelCount+labelMap.at(atoi( res.c_str() )) +2 );
			}
			else if (op=="LT") {
				asmFile << "movl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << ST->ActivationRecord[arg2] << "(%rbp), %eax\n";
				asmFile << "\tjl .L" << (2*labelCount+labelMap.at(atoi( res.c_str() )) +2 );
			}
			else if (op=="GT") {
				asmFile << "movl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << ST->ActivationRecord[arg2] << "(%rbp), %eax\n";
				asmFile << "\tjg .L" << (2*labelCount+labelMap.at(atoi( res.c_str() )) +2 );
			}
			else if (op=="GE") {
				asmFile << "movl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << ST->ActivationRecord[arg2] << "(%rbp), %eax\n";
				asmFile << "\tjge .L" << (2*labelCount+labelMap.at(atoi( res.c_str() )) +2 );
			}
			else if (op=="LE") {
				asmFile << "movl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << ST->ActivationRecord[arg2] << "(%rbp), %eax\n";
				asmFile << "\tjle .L" << (2*labelCount+labelMap.at(atoi( res.c_str() )) +2 );
			}
			else if (op=="GOTOOP") {
				asmFile << "jmp .L" << (2*labelCount+labelMap.at(atoi( res.c_str() )) +2 );
			}

			// Unary Operators
			else if (op=="ADDRESS") {
				asmFile << "leaq\t" << ST->ActivationRecord[arg1] << "(%rbp), %rax\n";
				asmFile << "\tmovq \t%rax, " <<  ST->ActivationRecord[res] << "(%rbp)";
			}
			else if (op=="PTRR") {
				asmFile << "movl\t" << ST->ActivationRecord[arg1] << "(%rbp), %eax\n";
				asmFile << "\tmovl\t(%eax),%eax\n";
				asmFile << "\tmovl \t%eax, " <<  ST->ActivationRecord[res] << "(%rbp)";	
			}
			else if (op=="PTRL") {
				asmFile << "movl\t" << ST->ActivationRecord[res] << "(%rbp), %eax\n";
				asmFile << "\tmovl\t" << ST->ActivationRecord[arg1] << "(%rbp), %edx\n";
				asmFile << "\tmovl\t%edx, (%eax)";
			} 			
			else if (op=="UMINUS") {
				asmFile << "negl\t" << ST->ActivationRecord[arg1] << "(%rbp)";
			}
			else if (op=="BNOT")		asmFile << res 	<< " = ~" << arg1;
			else if (op=="LNOT")			asmFile << res 	<< " = !" << arg1;
			else if (op=="ARRR") {
				int off=0;
				off=theMap[arg2]*(-1)+ST->ActivationRecord[arg1];
				asmFile << "movq\t" << off << "(%rbp), "<<"%rax" << endl;
				asmFile << "\tmovq \t%rax, " <<  ST->ActivationRecord[res] << "(%rbp)";
			}	 			
			else if (op=="ARRL") {
				int off=0;
				off=theMap[arg1]*(-1)+ST->ActivationRecord[res];
				asmFile << "movq\t" << ST->ActivationRecord[arg2] << "(%rbp), "<<"%rdx" << endl;
				asmFile << "\tmovq\t" << "%rdx, " << off << "(%rbp)";
			}	 
			else if (op=="RETURN") {
				if(res!="") asmFile << "movl\t" << ST->ActivationRecord[res] << "(%rbp), "<<"%eax";
				else asmFile << "nop";
			}
			else if (op=="PARAM") {
				params.push_back(res);
			}

			// call a function
			else if (op=="CALL") {
				// Function Table
				symtable* t = globalST->lookup(arg1)->nested;
				int i,j=0;	// index
				for (list <sym>::iterator it = t->symbols.begin(); it!=t->symbols.end(); it++) {
					i = distance ( t->symbols.begin(), it);
					if (it->category== "param") {
						if(j==0) {
							// the first parameter to the function
							asmFile << "movl \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%eax" << endl;
							asmFile << "\tmovq \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%rdi" << endl;
							j++;
						}
						else if(j==1) {
							// the second parameter to the function
							asmFile << "movl \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%eax" << endl;
							asmFile << "\tmovq \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%rsi" << endl;
							j++;
						}
						else if(j==2) {
							// the third parameter to the function
							asmFile << "movl \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%eax" << endl;
							asmFile << "\tmovq \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%rdx" << endl;
							j++;
						}
						else if(j==3) {
							// the fourth parameter to the function
							asmFile << "movl \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%eax" << endl;
							asmFile << "\tmovq \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%rcx" << endl;
							j++;
						}
						else {
							asmFile << "\tmovq \t" << ST->ActivationRecord[params[i]] << "(%rbp), " << "%rdi" << endl;							
						}
					}
					else break;
				}
				params.clear();
				asmFile << "\tcall\t"<< arg1 << endl;
				asmFile << "\tmovl\t%eax, " << ST->ActivationRecord[res] << "(%rbp)";
			}

			else if (op=="FUNC") {
				// prologue of a function
				asmFile <<".globl\t" << res << "\n";
				asmFile << "\t.type\t"	<< res << ", @function\n";
				asmFile << res << ": \n";
				asmFile << ".LFB" << labelCount <<":" << endl;
				asmFile << "\t.cfi_startproc" << endl;
				asmFile << "\tpushq \t%rbp" << endl;
				asmFile << "\t.cfi_def_cfa_offset 8" << endl;
				asmFile << "\t.cfi_offset 5, -8" << endl;
				asmFile << "\tmovq \t%rsp, %rbp" << endl;
				asmFile << "\t.cfi_def_cfa_register 5" << endl;
				ST = globalST->lookup(res)->nested;
				asmFile << "\tsubq\t$" << ST->symbols.back().offset+24 << ", %rsp"<<endl;
				
				// Function Table
				symtable* t = ST;
				int i=0;
				for (list <sym>::iterator it = t->symbols.begin(); it!=t->symbols.end(); it++) {
					if (it->category== "param") {
						if (i==0) {
							asmFile << "\tmovq\t%rdi, " << ST->ActivationRecord[it->name] << "(%rbp)";
							i++;
						}
						else if(i==1) {
							asmFile << "\n\tmovq\t%rsi, " << ST->ActivationRecord[it->name] << "(%rbp)";
							i++;
						}
						else if (i==2) {
							asmFile << "\n\tmovq\t%rdx, " << ST->ActivationRecord[it->name] << "(%rbp)";
							i++;
						}
						else if(i==3) {
							asmFile << "\n\tmovq\t%rcx, " << ST->ActivationRecord[it->name] << "(%rbp)";
							i++;
						}
					}
					else break;
				}
			}
				
			// epilogue of a function
			// function ends	
			else if (op=="FUNCEND") {
				asmFile << "leave\n";
				asmFile << "\t.cfi_restore 5\n";
				asmFile << "\t.cfi_def_cfa 4, 4\n";
				asmFile << "\tret\n";
				asmFile << "\t.cfi_endproc" << endl;
				asmFile << ".LFE" << labelCount++ <<":" << endl;
				asmFile << "\t.size\t"<< res << ", .-" << res;
			}
			else asmFile << "op";
			asmFile << endl;
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
        generateAsm();
    }
}