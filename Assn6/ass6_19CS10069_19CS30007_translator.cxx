#include "ass6_19CS10069_19CS30007_translator.h"

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <sstream>


using namespace std;

/*
  Global variables for storing required data  
*/ 
basicType bt;                                                                                      // all the basic types

// For Required Data structures
symtable* globalST;                                                                                // Our Global ST
symtable* parST;                                                                                   // Parent of the current symbol table
symtable* ST;                                                                                      // Current ST

string symbolTableSuffix;                                                                          // current symbol suffix
bool lookupInsideParent;
string curPossibleSTName;
list <sym*> listOffunctions;
vector<string> stringsToBePrinted;
quadArray Q;                                                                                       // Our array of quads
sym* currSymbolPtr;                                                                                // Current symbol
vector<label>label_table;                                                                          // For storing labels

// Utility variables
string var_type;                                                                                   // Latest type found
long long table_count;                                                                             // Count of the no of tables
string loop_name;                                                                                  // Name of the loop
int line = 1;                                                                                      // Line number

/*
    Implementation of the Symbol Type Class functions  
*/
symboltype::symboltype(string type,symboltype* arrtype,int width)                                  
:type(type), width(width), arrtype(arrtype){
    // Constructor for a given type of symbol
}

/*
    The actual symbols that will be stored in the symbol table
*/
sym::sym(string name, string t, symboltype* arrtype, int width) 
:name(name){
    type = new symboltype(t,arrtype,width);                                                        // We obtain the symbol type
    size = computeSize(type);                                                                      // We compute its size
    offset = 0;                                                                                    // Initial offset is set to 0.. will be adjusted later
    val = "";                                                                                     // Initial value not yet defined
    nested = NULL;                                                                                  // No nested tables attached
    isItFunction = false;                                                                           // Stores if current entry is a symbol
    category = "";                                                                                  // 
}

/*
    Utility function for updating the symbol table and returning the updated version
*/
sym* sym::update(symboltype* t) {
    type=t;                                                                                        // Update the new type
    size=computeSize(t);                                                                           // new size
    return this;                                                                                   // return the same variable	
}

/*
    Constructor for a label
*/
label::label(string _name, int _addr):name(_name),addr(_addr),nextlist(){}

/*
    Constructor for an empty symbol table
*/
symtable::symtable(string _name):
    name(_name),
    count(0),
    symbols(),
    parent(NULL){                                                                    // constructor for a symbol table
                                                                              // Initialize the name of the symbol table
                                                                                          // Put count of number of temporary variables as 0
}

sym* symtable::lookup(string name)                                                 // Lookup an symbol in the symbol table, whether it exists or not
{
    sym* symbol;

    // function check
    string nameOffunc = name;
    if(nameOffunc.find(".")!=nameOffunc.npos)
        nameOffunc = nameOffunc.substr(0, nameOffunc.find("."));
    for(auto funcs : listOffunctions) {
        if(funcs != NULL && funcs->name == nameOffunc)
            return funcs;                                                                         
    }
    // iterating over the table and checking
    for(auto &it : symbols) {
        if(it.name==name) 
            return &it;                                                                         
    }

    sym *ptr = NULL;

    // Look up recursively on its parent
    if((this->parent) && lookupInsideParent)
    {
        string tosearchname = name;
        if(tosearchname.find(".")!= tosearchname.npos)
        {
            while(!tosearchname.empty() && tosearchname.back() != '.')
            {
                tosearchname.pop_back();
            }
            if(!tosearchname.empty() && tosearchname.back() == '.')
            {
                tosearchname.pop_back();
            }
            tosearchname += ("."+this->parent->name);

            // cout<<name<<" "<< tosearchname<<"\n";
        }
        ptr = this->parent->lookup(tosearchname);
    } 

    // If we have not found anything from the base symbol table
    // we create a new symbol and return its address
    if(ST == this and !ptr){
        symbol = new sym(name);
        symbol->category = "local";                                                                 // it will be a local variable
        symbols.push_back(*symbol);                                                                  // push the symbol into the table
        return &symbols.back();                                                                      // return the symbol
    } else if(ptr) 
        // Else if we find it, we return that existing address
        return ptr;

    return NULL;
}

/*
    Utility function to update the symbol table
*/
void symtable::update() {                                                                            

    // For storing the list of tables
    list<symtable*> tb;                                                                            
    int off = 0;

    for(auto &it: symbols) {
        it.offset = off;
        if(it.isItFunction) {
            it.size = 0;    // function size made 0, previously it was size of return type
        }
        off += it.size;

        // We check for nested symbol tables here
        if(it.nested!=NULL)                                                                        
            tb.push_back(it.nested);
    }
    
    // We then recursively update all the nested tables 
    for(auto &it1 : tb) {                                                                            
        it1->update();
    }
}

/*
    Utility function for printing the symbol table with proper indentation
*/
void symtable::print() {                                                                                
    int next_instr=0;

    // We store all the nested symbol tables in a list
    list<symtable*> tb;                                                                               

    for(int i=0;i<74;i++) 
        cout << "__";                                                            // For better readability
    cout<<'\n';

    cout << "Table Name: " << name ;
	indentWithSpaces(54-name.length());
	cout << " Parent Name: ";                                                                    

    if(!parent) 
        cout<<"NULL"<<'\n';                                                     // No parent -> NULL
    else 
        cout<<parent->name<<'\n';                                               // Print parents name if available

    for(int i=0; i<74; i++) 
        cout<<"__";                                                             // Design formatting
    cout<<'\n';
    
    // Table headers as per requirement
    cout<<"Name";                                                                                
    indentWithSpaces(37);

    cout<<"Type";                                                                               
    indentWithSpaces(27);

    cout<<"Category";
    indentWithSpaces(13);

    cout<<"Initial Value";                                                                     
    indentWithSpaces(8);

    cout<<"Size";                                                                             
    indentWithSpaces(12);

    cout<<"Offset";                                                                          
    indentWithSpaces(10);

    cout<<"Nested"<<'\n';                                                                  
    indentWithSpaces(101);
    cout<<'\n';

    // Printing the symbols inside
    for(auto &it : symbols) {                                
        cout << it.name;                                                                        
        indentWithSpaces(41-it.name.length());

        // Use PrintType to print type of the symbol entry, and it its a function print func
        string rec_type=(it.isItFunction)?"func":printType(it.type);                            
        cout << rec_type;
        indentWithSpaces(31-rec_type.length());

        // Print all the required information
        cout << it.category;
        indentWithSpaces(20 - it.category.length());

        cout << it.val;                                                                         
        indentWithSpaces(21-it.val.length());

        cout<<it.size;                                                                          
        indentWithSpaces(16-to_string(it.size).length());

        cout<<it.offset;                                                                       
        indentWithSpaces(16-to_string(it.offset).length());

        // Check for nested tables
        if(it.nested==NULL) {                                                                 
            cout<<"NULL"<<'\n';
        }
        else {
            cout<<it.nested->name<<'\n';	
            tb.push_back(it.nested);                                                                 
            // Store nested tables for further printing
        }
    }
 
    for(int i=0;i<74;i++) 
        cout<<"--";
    cout<<"\n\n";

    // Recursively print nested symbol tables
    for(auto &it: tb) {
        it->print();
    }
}

/*
    Quad functions
*/

// All the overloaded constructors possible
quad::quad(string res,string arg1,string op,string arg2)
:op(op), arg1(arg1), arg2(arg2), res(res){}

quad::quad(string res,int arg1,string op,string arg2)
:op(op), arg1(convertIntToString(arg1)), arg2(arg2), res(res){}

quad::quad(string res,float arg1,string op,string arg2)
:op(op), arg1(convertFloatToString(arg1)), arg2(arg2), res(res){}

/*
    Utility function to print quads
*/
void quad::print()  {
	int next_instr=0;

    // Binary Assignment Instruction
    vector<string> binary_ops = {"+", "-", "*", "/", "%", "|", "^", "&"};
    for(auto check: binary_ops)
        if(op == check) {
            type1();
            cout << '\n';
            return;
        }

    // Relational operators | Conditional Jump Instruction
    vector<string> relational_ops = {"==", "!=", "<=", "<", ">", ">="};
    for(auto check: relational_ops)
        if(op == check) {
            type2();
            cout << '\n';
            return;
        }
    // Unconditional Jump Instruction
	if(op=="goto") cout<<"goto "<<res;

    // Shift operators| Binary Assignment Instruction
	else if(op==">>") type1();
	else if(op=="<<") type1();

    // Assignment operator | copy Assignment Instruction
	else if(op=="=") cout<<res<<" = "<<arg1 ;	

    // Assignment + operation | Unary Assignment Instruction
	else if(op=="=&") cout<<res<<" = &"<<arg1;         // reference
	else if(op=="=*") cout<<res<<" = *"<<arg1;         // pointer
	else if(op=="*=") cout<<"*"<<res<<" = "<<arg1;     // *res = arg1 
	else if(op=="uminus") cout<<res<<" = -"<<arg1;         
	else if(op=="~") cout<<res<<" = ~"<<arg1;
	else if(op=="!") cout<<res<<" = !"<<arg1;

    // Other operators
    // Indexed Copy Instruction
	else if(op=="=[]") cout<<res<<" = "<<arg1<<"["<<arg2<<"]";
	else if(op=="[]=") cout<<res<<"["<<arg1<<"]"<<" = "<< arg2;
	// Return Value
    else if(op=="return") cout<<"return "<<res;
	// procedure call
    else if(op=="param") cout<<"param "<<res;
	else if(op=="call") cout<<res<<" = "<<"call "<<arg1<<", "<<arg2;
	else if(op=="label") cout<<"Label "<<res<<": ";
    else if(op == "func") cout<<"function " <<res<<": ";
    else if(op=="funcend") cout << "";
    else if(op =="equalstr") cout<<res << " = "<<stringsToBePrinted.at(stoi(arg1));
	else cout<<"Operator not found "<<op;		
	cout<<'\n';
}

// For priniting quads qith binary ops
void quad::type1() {
    cout<<res<<" = "<<arg1<<" "<<op<<" "<<arg2;	
}

// For priniting quads with relational ops and jumps
void quad::type2() {
    cout<<"if "<<arg1<< " "<<op<<" "<<arg2<<" goto "<<res;	
}

/*
    The main utility function for printing quads 
    i.e. all the three address codes
*/

void quadArray::print() {                                                                                
    for(int i=0;i<74;i++)  cout<<"__";
    cout<<'\n';

    cout<<"THREE ADDRESS CODE (TAC): "<<'\n';                                                       
    for(int i=0;i<74;i++) cout<<"__";
    cout<<'\n';    
    
    int j=0;
    // Priniting all the stored quads in Array with proper indentation
    for(auto &it: Array) {
        if(it.op=="label" || it.op=="func") {                                                                             
            cout<<'\n'<<j<<": ";
            it.print();
        }
        else if (it.op!="funcend") {                                                                                          
            cout<<j<<": ";
            indentWithSpaces(4);
            it.print();
        }
        j++;
    }
    for(int i=0;i<74;i++) cout<<"__";                                                  
    cout<<'\n';
}

/*
    Creates a corresponding quad from the three address code and then stores it in the array
*/
void quadArray::emit(string op, string res, string arg1, string arg2) {
	quad q1(res,arg1,op,arg2);
	Array.push_back(q1);
}

void quadArray::emit(string op, string res, int arg1, string arg2) {
    quad q2(res,arg1,op,arg2);
    Array.push_back(q2);
}

void quadArray::emit(string op, string res, float arg1, string arg2){
    quad q3(res,arg1,op,arg2);
    Array.push_back(q3);
}

/*
    The gentemp function generates a new symbol (temporary variable) in the current symbol table
    Then it returns the pointer to the Current entry
*/
sym* gentemp(symboltype* t, string str_new) {
    
    static int tempCnt = 1;                                                                                                
    string tmp_name = "t_"+convertIntToString(tempCnt++);                                              
    sym* s = new sym(tmp_name);
    s->type = t;
    s->size=computeSize(t);                                                                           
    s->val = str_new;
    s->category = "temp";               
    ST->symbols.push_back(*s);                                                                       
    return &ST->symbols.back();
}


/*
    Utility function to search for a label
    Returns a pointer to the label if found
*/
label* find_label(string _name){
    for(auto &it : label_table){
        if(it.name==_name)return &(it);
    }
    return NULL;
}

/*
    The backpatch utility function
    Takes in a list and then stores the
    target value given in addr 
*/
void backpatch(list<int> list1,int addr) {
    string str=convertIntToString(addr);  
    // The key step
    for(auto &it: list1)
        Q.Array[it].res=str;                                                                           
}

/*
    Initializes a list with only one element (init)
    Then returns it
*/
list<int> makelist(int init)  {
    list<int> newlist(1,init);                                                                          
    return newlist;                                                                                    
}

/*
    Merges 2 lists and returns the result
*/
list<int> merge(list<int> &a,list<int> &b) {
    a.merge(b);                                                                                         
    return a;                                                                                          
}

/*
    Some miscellaneous functions to aid our design
*/

// Some standard conversions
string convertIntToString(int a){
    return to_string(a);
}

string convertFloatToString(float x){
    ostringstream buff;
    buff<<x;
    return buff.str();
}

Expression* convertBoolToInt(Expression* e) {                                                             
	if(e->type=="bool") {
        // Implementing the standard procedures and 
        // Generating required attributes for int
        e->loc=gentemp(new symboltype("int"));                                                          
        backpatch(e->truelist,nextinstr());
        Q.emit("=",e->loc->name,"true");
        int p=nextinstr()+1;
        string str=convertIntToString(p);
        Q.emit("goto",str);
        backpatch(e->falselist,nextinstr());
        Q.emit("=",e->loc->name,"false");
    }
    return e;
}

Expression* convertIntToBool(Expression* e) {                                                             
    if(e->type!="bool"){
        // Implementing the standard procedures and 
        // Generating required attributes for bool
        e->falselist=makelist(nextinstr());                                                             
        Q.emit("==","",e->loc->name,"0");                                                              
        e->truelist=makelist(nextinstr());                                                            
        Q.emit("goto","");
    }
    return e;
}

/*
    Converts from one type to another and returns the converted instance
*/

sym* convertType(sym* s, string rettype) {                                                                
	sym* temp=gentemp(new symboltype(rettype));	

    if(s->type->type=="float") {                                                                        
        // float -> int
        if(rettype=="int") {                                                                           
            Q.emit("=",temp->name,"float2int("+(*s).name+")");
            return temp;
        }
        // float -> char
        else if(rettype=="char") {
            Q.emit("=",temp->name,"float2char("+(*s).name+")");
            return temp;
        }
        return s;
    }
    else if((*s).type->type=="int") {                                                                   
        // int -> float
        if(rettype=="float") {                                                                            
            Q.emit("=",temp->name,"int2float("+(*s).name+")");
            return temp;
        }
        //int -> char
        else if(rettype=="char") {                                                                        
        
            Q.emit("=",temp->name,"int2char("+(*s).name+")");
            return temp;
        }
        return s;
    }
    else if((*s).type->type=="char") {                                                                    
        // char -> int
        if(rettype=="int") {                                                                              
            Q.emit("=",temp->name,"char2int("+(*s).name+")");
            return temp;
        }
        // char -> float
        if(rettype=="float") {                                                                           
            Q.emit("=",temp->name,"char2float("+(*s).name+")");
            return temp;
        }
        return s;
    }
    return s;
}

/*
    A utility function for changing the current symbol table
*/
void changeTable(symtable* newtable) {                                                                    
    ST = newtable;
    symbolTableSuffix =  "." +  newtable->name;
} 

/*
    Overloaded compareSymbolType function to compare two entries in the symbol table
    Initially called with 2 symbols then we may call with the types for further checking
*/

bool compareSymbolType(sym*& s1,sym*& s2) {                                                               
    symboltype* type1=s1->type;                                                                         
    symboltype* type2=s2->type;                                                                        
    sym* temp;
    int flag=0;
    
    if(compareSymbolType(type1,type2)) flag=1;                                                        
    else if(s1!=(temp = convertType(s1,type2->type))) {
        flag=1;                                                     
        s1 = temp;
    }
    else if(s2!=(temp =convertType(s2,type1->type))){
        flag=1;                                                                                         // check if one can be converted to the other then convert them
        s2=temp;
    }
    if(flag)return true;                                                                                // if the two types are compatible return true
    else return false;                                                                                  // else return false
}

/*
    Utility function to compare types of two symbols
*/
bool compareSymbolType(symboltype* t1,symboltype* t2) {                                                   
    if(!t1 && !t2)              // Both null
        return true;
    else if(!t1 || !t2 || t1->type != t2->type)     // Any one is null or tyoes dont match
        return false;
    else 
        return compareSymbolType(t1->arrtype,t2->arrtype);                                                  // Otherwise we check in a recursive manner for arrays
}

// Aiding in indentation
void indentWithSpaces(int n) {                                                                              
    cout<<" ";
    n--;
    while(n-- > 0) 
        cout<<" ";
}

// Getting the address of the next instruction: Simply the size of the quad array
int nextinstr() {
    return Q.Array.size();                                                                              
}

// Utility function to compute the size
int computeSize(symboltype* t) {                                                                          // calculate size function
    if((t->arrtype!=NULL) && (t->type == "arr"))
        return (t->width)*computeSize(t->arrtype);
    else if(basicType :: getSize.count(t->type))
        return basicType :: getSize[t->type];
        
    return 0;
}

// Prints the type of the symbol in the symbol table
string printType(symboltype* t) {                                                                         
    if(t == NULL)
        return "NULL";
    else if(t->type == "ptr")
        return "ptr("+ printType(t->arrtype) + ")";
    else if(t->type == "arr") {
        string str=convertIntToString(t->width);                                                            // recursive for arrays
        return "arr("+str+","+printType(t->arrtype)+")";
    }
    else if(basicType :: getSize.count(t->type))
        return t->type;
    
    return "NA";
}

symtable* flattenFunctionSymbolTable(sym *function){
    symtable *originalFunctionTable = function->nested;
    symtable *functionTable = new symtable(originalFunctionTable->name);

    functionTable->parent = originalFunctionTable->parent;

    vector <symtable*> listOfFunctionTables = {originalFunctionTable};

    for(int i=0;  i< listOfFunctionTables.size(); ++i)
    {
        symtable *curfuntable = listOfFunctionTables[i];
        for(auto &currentSymbol: curfuntable->symbols)
        {
            if(currentSymbol.nested != NULL)
            {
                listOfFunctionTables.push_back((currentSymbol.nested));
                // cout<<currentSymbol.name<<"\n";
            }
            else
            {
                functionTable->symbols.push_back(currentSymbol);
                // cout<<currentSymbol.name<<"\n";
            }
        }
    }
    function->nested = functionTable;
    return functionTable;
}

// Storing the basic types with size
// Using sizeof for machine independent translation
map<string, int> basicType :: getSize = {   {"null", 0}, 
                        {"void", 0},
                        {"char", sizeof(char)},
                        {"int", sizeof(int)},
                        {"float", sizeof(float)},
                        {"ptr", sizeof(int*)},
                        {"arr", 0},
                        {"func", 0},
                        {"block", 0}    };

