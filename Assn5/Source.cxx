#include "ass5_19CS10069_19CS30007_translator.h"

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <sstream>


using namespace std;

/*
  Global variables for storing required data  
*/ 

basicType bt;                                                                                      // basic types

symtable* globalST;                                                                                // Global Symbol Table
symtable* parST;                                                                                   // denotes the Parent of the current Symbol Table
symtable* ST;                                                                                      // Points to current symbol table

quadArray Q;                                                                                       // Quad Array
sym* currSymbolPtr;                                                                                // points to current symbol
vector<label>label_table;                                                                          // table to store the labels

string var_type;                                                                                   // Stores latest type
long long table_count;                                                                             // count of table
bool debug_on;                                                                                     // bool for printing debug output
string loop_name;                                                                                  // Stores the name of the loop

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
    val = "-";                                                                                     // Initial value not yet defined
    nested = NULL;                                                                                 // No nested tables attached
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
label::label(string _name, int _addr):name(_name),addr(_addr){}

/*
    Constructor for an empty symbol table
*/
symtable::symtable(string name)
: name(name) {                                                                    
    count=0;                                                                                       // Put count of number of temporary variables as 0
}

/*
    The lookup function
    Returns the symbol if found
    Else creates a new instance and returns it
*/
sym* symtable::lookup(string name) {
    sym* symbol;

    // iterating over the table and checking
    for(auto &it : symbols) {
        if(it.name==name) 
            return &it;                                                                         
    }

    sym *ptr = NULL;

    // Look up recursively on its parent
    if(this->parent) 
        ptr = this->parent->lookup(name);

    // If we have not found anything from the base symbol table
    // we create a new symbol and return its address
    if(ST == this and !ptr){
        symbol = new sym(name);
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
        if(it.isItFunction)
        {
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

    for(int i=0;i<73;i++) 
        cout << "__";                                                            // For better readability
    cout<<'\n';

    cout << "Table Name: " << name ;
	generateSpaces(53-name.length());
	cout << " Parent Name: ";                                                                    

    if(!parent) 
        cout<<"NULL"<<'\n';                                          // No parent -> NULL
    else 
        cout<<parent->name<<'\n';                                    // Print parents name if available

    for(int i=0; i<73; i++) 
        cout<<"__";                                                          // Design formatting
    cout<<'\n';
    
    // Table headers as per requirement
    cout<<"Name";                                                                                
    generateSpaces(36);

    cout<<"Type";                                                                               
    generateSpaces(26);

    cout<<"Initial Value";                                                                     
    generateSpaces(7);

    cout<<"Size";                                                                             
    generateSpaces(11);

    cout<<"Offset";                                                                          
    generateSpaces(9);

    cout<<"Nested"<<'\n';                                                                  
    generateSpaces(100);
    cout<<'\n';

    for(auto &it : symbols) {                                // iterate through all the elements in the symbol table and print their details
    
        cout << it.name;                                                                        
        generateSpaces(40-it.name.length());

        string rec_type=(it.isItFunction)?"func":printType(it.type);                            // Use PrintType to print type of the symbol entry, and it its a function print func
        cout << rec_type;
        generateSpaces(30-rec_type.length());

        cout << it.val;                                                                         // Print initial value of the current symbol table entry
        generateSpaces(20-it.val.length());

        cout<<it.size;                                                                          // Print size of the current symbol table entry
        generateSpaces(15-to_string(it.size).length());

        cout<<it.offset;                                                                        // print offset of the current symbol entry
        generateSpaces(15-to_string(it.offset).length());

        if(it.nested==NULL) {                                                                        // print nested table's name if it exists
            cout<<"NULL"<<'\n';
        }
        else {
            cout<<it.nested->name<<'\n';	
            tb.push_back(it.nested);                                                                 // Insert the names of the nested tables that need to be recursively printed
        }
    }
 
    for(int i=0;i<130;i++) 
        cout<<"-";
    cout<<"\n\n";

    for(auto &it: tb) 
    {
		/**
		 * print symbol table that are nested in the 
		 * current symbol table, hence recursively 
		 * print all nested tables
		 */
        it->print();
    }
}

//**************************************************************//
//      Implementation of the quad functions                    //
//**************************************************************//

//----------------Constrtuctors overloaded----------------------//

// --------- (string, string, string, string)
quad::quad(string res,string arg1,string op,string arg2)
{
	this->op=op;
	this->arg1=arg1;
	this->arg2=arg2;
	this->res=res;
}

// --------- (string, int, string, string)
quad::quad(string res,int arg1,string op,string arg2)
{	
	this->op=op;
	this->arg1=convertIntToString(arg1);
	this->arg2=arg2;
	this->res=res;	
}

// --------- (string, float, string, string)
quad::quad(string res,float arg1,string op,string arg2)
{
	this->op=op;
	this->arg1=convertFloatToString(arg1);
	this->arg2=arg2;
	this->res=res;
}

//------------- Helper function to print the quads -----------------
void quad::print() 
{
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
    // Unconditional Jump Instructi
	if(op=="goto") cout<<"goto "<<res;

    // Shift operators| Binary Assignment Instruction
	else if(op==">>") type1();
	else if(op=="<<") type1();

    // Assignment operator | copy Assignment Instruction
	else if(op=="=") cout<<res<<" = "<<arg1 ;	

    // Assignment + operation | Unary Assignment Instruction
	else if(op=="=&") cout<<res<<" = &"<<arg1;         // reference
	else if(op=="=*") cout<<res<<" = *"<<arg1;         // pointer
	else if(op=="*=") cout<<"*"<<res<<" = "<<arg1;     // multiplication
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
	else if(op=="label") cout<<res<<": ";
	else cout<<"Can't find the operator"<<op;		
	cout<<'\n';
}

void quad::type1()                                                                                    // Printing binary operators
{
    cout<<res<<" = "<<arg1<<" "<<op<<" "<<arg2;	
}

void quad::type2()                                                                                    // Printing relation operators and jumps
{
    cout<<"if "<<arg1<< " "<<op<<" "<<arg2<<" goto "<<res;	
}

//**************************************************************//
//        Implementation of the Quad Array Class functions      //
//**************************************************************//

void quadArray::print()                                                                                // print the quad Array i.e the list of TAC
{
    for(int i=0;i<60;i++)  cout<<"__";
    cout<<'\n';

    cout<<"THREE ADDRESS CODE (TAC): "<<'\n';                                                       // print all the three address codes TAC
    for(int i=0;i<60;i++) cout<<"__";
    cout<<'\n';    
    
    int j=0;
    // iterate over the Quads and print them along with serial number j
    for(auto &it: Array) 
    {
        if(it.op=="label")                                                                             // print the label if it is the operator 
        {
            cout<<'\n'<<j<<": ";
            it.print();
        }
        else {                                                                                          // otherwise give 4 spaces and then print
            cout<<j<<": ";
            generateSpaces(4);
            it.print();
        }
        j++;
    }
    for(int i=0;i<65;i++) cout<<"__";                                                              // End of printing of the TAC
    cout<<'\n';
}

//**************************************************************//
//          Overloaded emit function used by the parser         //
//**************************************************************//

//----------------- Emit a three address code TAC and add it to the Quad Array ------------
void quadArray::emit(string op, string res, string arg1, string arg2) 
{
	quad *q1= new quad(res,arg1,op,arg2);
	this->Array.push_back(*q1);
}

void quadArray::emit(string op, string res, int arg1, string arg2) 
{
    quad *q2= new quad(res,arg1,op,arg2);
    this->Array.push_back(*q2);
}

void quadArray::emit(string op, string res, float arg1, string arg2) 
{
    quad *q3= new quad(res,arg1,op,arg2);
    this->Array.push_back(*q3);
}

/**
 * GENTEMP
 * -------
 * generates a temporary variable 
 * and insert it in the current 
 * Symbole table 
 * 
 * Parameter
 * ---------
 * symbol type * : pointer to the 
 *                 class of symbol type
 * init : initial value of the structure
 * 
 * Return
 * ------
 * Pointer to the newly created symbol 
 * table entry
 */

sym* gentemp(symboltype* t, string str_new) 
{                                                                                                       // generate temp variable
    string tmp_name = "t_"+convertIntToString(ST->count++);                                              // generate name of temporary variable
    sym* s = new sym(tmp_name);
    (*s).type = t;
    (*s).size=computeSize(t);                                                                           // calculate the size of the current symbol
    (*s).val = str_new;

    ST->symbols.push_back(*s);                                                                            // push the newly created symbol in the Symbol table
    return &ST->symbols.back();
}


label* find_label(string _name){
    for(auto &it : label_table){
        if(it.name==_name)return &(it);
    }
    return nullptr;
}

//**************************************************************//
//            Backpatching and related functions               //
//**************************************************************//
void backpatch(list<int> list1,int addr)                                                                // backpatching
{
    string str=convertIntToString(addr);                                                                // get string form of the address
    
    // iterate of list1 and backpatch
    for(auto &it: list1)
    {
        Q.Array[it].res=str;                                                                           // do the backpatching
    }
}

list<int> makelist(int init) 
{
    list<int> newlist(1,init);                                                                          // make a new list	
    return newlist;                                                                                     // return the newly created list
}

list<int> merge(list<int> &a,list<int> &b)
{
    a.merge(b);                                                                                         // merge two existing lists
    return a;                                                                                           // return the merged list
}

//**********************************************************************//
//          Other helper functions required for TAC generation          //
//**********************************************************************//

//------------- Type checking and Type conversion functions -------------
string convertIntToString(int a)                                                                        // helper function to convert int to string
{
    return to_string(a);
}

string convertFloatToString(float x)                                                                    // Take float as input and produce string as output
{
    ostringstream buff;
    buff<<x;
    return buff.str();
}

Expression* convertBoolToInt(Expression* e)                                                             // Convert any Expression to bool using standard procedure
{
	if(e->type=="bool") 
    {
        e->loc=gentemp(new symboltype("int"));                                                          // use general goto statements and standard procedure
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

Expression* convertIntToBool(Expression* e)                                                             // Convert any Expression to bool using standard procedure
{
    if(e->type!="bool")                
    {
        e->falselist=makelist(nextinstr());                                                             // update the falselist
        Q.emit("==","",e->loc->name,"0");                                                                 // Q.emit general goto statements
        e->truelist=makelist(nextinstr());                                                              // update the truelist
        Q.emit("goto","");
    }
    return e;
}

sym* convertType(sym* s, string rettype)                                                                // convert symbol s into the required return type
{
	sym* temp=gentemp(new symboltype(rettype));	
    if((*s).type->type=="float")                                                                        // if type float
    {
        if(rettype=="int")                                                                              // converting float to int
        {
            Q.emit("=",temp->name,"float2int("+(*s).name+")");
            return temp;
        }
        else if(rettype=="char")                                                                        // or converting to char
        {
            Q.emit("=",temp->name,"float2char("+(*s).name+")");
            return temp;
        }
        return s;
    }
    else if((*s).type->type=="int")                                                                     // if type int
    {
        if(rettype=="float")                                                                            // converting int to float
        {
            Q.emit("=",temp->name,"int2float("+(*s).name+")");
            return temp;
        }
        else if(rettype=="char")                                                                        // or converting to char
        {
            Q.emit("=",temp->name,"int2char("+(*s).name+")");
            return temp;
        }
        return s;
    }
    else if((*s).type->type=="char")                                                                    // if type char
    {
        if(rettype=="int")                                                                              // converting char to int
        {
            Q.emit("=",temp->name,"char2int("+(*s).name+")");
            return temp;
        }
        if(rettype=="double")                                                                           // or converting to double
        {
            Q.emit("=",temp->name,"char2double("+(*s).name+")");
            return temp;
        }
        return s;
    }
    return s;
}

void changeTable(symtable* newtable)                                                                    // Change current symbol table
{
    ST = newtable;
} 

bool compareSymbolType(sym*& s1,sym*& s2)                                                               // Check if the symbols have same type or not
{
    symboltype* type1=s1->type;                                                                         // get the basic type of symbol 1
    symboltype* type2=s2->type;                                                                         // get the basic type of symbol 2
    sym* temp;
    int flag=0;
    
    if(compareSymbolType(type1,type2)) flag=1;                                                          // check if the two types are already equal
    else if(s1!=(temp = convertType(s1,type2->type))) {
        flag=1;                                                     // check if one can be converted to the other then convert them
        s1 = temp;
    }
    else if(s2!=(temp =convertType(s2,type1->type))){
        flag=1;                                                     // check if one can be converted to the other then convert them
        s2=temp;
    }
    if(flag)return true;                                                                                // if the two types are compatible return true
    else return false;                                                                                  // else return false
}

bool compareSymbolType(symboltype* t1,symboltype* t2)                                                   // Check if the symbol types are same or not
{
    int flag=0;
    if(t1==NULL && t2==NULL) flag=1;                                                                    // if both symbol types are NULL
    else if(t1==NULL || t2==NULL || t1->type!=t2->type) flag=2;                                         // if only one of them is NULL or if base type isn't same
    
    if(flag==1) return true;
    else if(flag==2) return false;
    else return compareSymbolType(t1->arrtype,t2->arrtype);                                             // otherwise check their Array type
}

//**********************************************************************//
//           Other helper function for debugging and printing           //
//**********************************************************************//

void generateSpaces(int n)                                                                              // Generate required number of spaces
{
    cout<<" ";
    n--;
    while(n-- > 0) cout<<" ";
}

int nextinstr() 
{
    return Q.Array.size();                                                                              // next instruction will be 1+last index and lastindex=size-1. hence return size
}

int computeSize(symboltype* t)                                                                          // calculate size function
{
    if((t->arrtype!=NULL) && (t->type == "arr"))
    {
        return (t->width)*computeSize(t->arrtype);
    }
    else if(basicType :: getSize.count(t->type))
        return basicType :: getSize[t->type];
        
    return -1;
}

string printType(symboltype* t)                                                                         // Print type of variable(imp for multidimensional arrays)
{
    if(t == NULL)
        return "NULL";
    else if(t->type == "ptr")
        return "ptr("+ printType(t->arrtype) + ")";
    else if(t->type == "arr") {
        string str=convertIntToString(t->width);                                                        // recursive for arrays
        return "arr("+str+","+printType(t->arrtype)+")";
    }
    else if(basicType :: getSize.count(t->type))
        return t->type;
    
    return "NA";
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

int main() {
    label_table.clear();

    table_count = 0;                                                                                    // count of nested table
    // debug_on= 0;                                                                                        // debugging is off
    globalST=new symtable("Global");                                                                    // Global Symbol Table
    ST=globalST;
    parST=nullptr;
    loop_name = "";
    int InvalidParse = yyparse();                                                                                          // initialize parse
    if(InvalidParse)
    {
        cout<<"Error while parsing\n";
    }
    else{
        globalST->update();                                                                                 // update the global Symbol Table
        cout<<"\n";
        Q.print();                                                                                          // print the three address codes
        globalST->print();                                                                                  // print all Symbol Tables
    }
};