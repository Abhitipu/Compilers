#include "ass6_19CS10069_19CS30007_translator.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

extern FILE *yyin;
extern vector<string> stringsToBePrinted;       // by printString meth

using namespace std;

int labelCount=0;							
map<int, int> labelMap;				        // map from quad number to label number
ofstream out;								// asm file stream
vector <quad> Array;						// quad Array
string asmFile ="ass6_19CS10069_19CS30007";		// asm file name
string testFile ="ass6_19CS10069_19CS30007_test";		// input file name


void computeActivationRecord(symtable *st) {
    // TODO: maybe augment return waala logic
    int param_offset = 8;
    int locals_offset = -4;

    for(auto &it: st->symbols) {
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

    list<symtable*> tableList;
    return;
}


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