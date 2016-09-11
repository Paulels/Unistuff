// a skeleton of the vmtokens class implementation

#include <iostream>
#include <ctype.h>
#include "asmsymbols.h"
#include "asmtokens.h"

using namespace std ;

// define your own class to implement asmtokens
class asmtokens_x : public asmtokens
{
public:
	asmtokens_x() ;			// create a new tokeniser
        string next_token() ; 		// read the next token from the input and return its kind
        string token_value() ;		// return the current token as a string
private:
        symbols_string *symbols ;	// internal symbol table - maps token values to token class
	string tvalue ;			// the current token as a string
	int ch ;			// the next character in the input
	void nextch() ;			// a function to read the next character and update ch
} ;

// return a pointer to a new tokeniser
asmtokens *asmtokens::newtokeniser()
{
	return new asmtokens_x() ;
}

// read the next character if not at EOF and update the variable ch
void asmtokens_x::nextch()
{
	if ( ch != EOF ) ch = cin.get() ;
}

// create a new tokeniser
asmtokens_x::asmtokens_x()
{
	// read the first character in the input and initialise tvalue
	ch = cin.get() ;
	tvalue = ch == EOF ? "?" : "" ;

	// create a new symbol table for string to string
	symbols = symbols_string::newtable() ;

	//token class dest
	symbols->insert("MD","dest") ;
	symbols->insert("AM","dest") ;
	symbols->insert("AD","dest") ;
	symbols->insert("AMD","dest") ;

	//token class dest-comp?
	symbols->insert("A","dest-comp?") ;
	symbols->insert("M","dest-comp?") ;
	symbols->insert("D","dest-comp?") ;

	// comp
	symbols->insert("0","comp") ;
	symbols->insert("1","comp") ;
	symbols->insert("-1","comp") ;
	symbols->insert("!D","comp") ;
	symbols->insert("!A","comp") ;
	symbols->insert("-D","comp") ;
	symbols->insert("-A","comp") ;
	symbols->insert("D+1","comp") ;
	symbols->insert("A+1","comp") ;
	symbols->insert("D-1","comp") ;
	symbols->insert("A-1","comp") ;
	symbols->insert("D+A","comp") ;
	symbols->insert("D-A","comp") ;
	symbols->insert("A-D","comp") ;
	symbols->insert("D&A","comp") ;
	symbols->insert("D|A","comp") ;

	symbols->insert("!M","comp") ;
	symbols->insert("-M","comp") ;
	symbols->insert("M+1","comp") ;
	symbols->insert("M-1","comp") ;
	symbols->insert("D+M","comp") ;
	symbols->insert("D-M","comp") ;
	symbols->insert("M-D","comp") ;
	symbols->insert("D&M","comp") ;
	symbols->insert("D|M","comp") ;

	// jump
	symbols->insert("JMP","jump") ;
	symbols->insert("JLT","jump") ;
	symbols->insert("JLE","jump") ;
	symbols->insert("JGT","jump") ;
	symbols->insert("JGE","jump") ;
	symbols->insert("JEQ","jump") ;
	symbols->insert("JNE","jump") ;

	// null
	symbols->insert("NULL","null") ;
}

// return the current token as a string
string asmtokens_x::token_value()
{
	return tvalue ;
}

// read the next token from the input and return its kind
string asmtokens_x::next_token()
{
	// once we have returned "?" we always return "?"
	if ( tvalue == "?" ) return "?" ;

	// loop to read characters until a token is found or EOF is found
	while ( true )
	{
		if ( ch == EOF )
		{
			tvalue = "?" ;
			return "?" ;
		}

		if (ch == ';')
		{
			tvalue = ';' ;
			nextch();
			return "semi";
		}

		if (ch == '=')
		{
			tvalue = '=' ;
			nextch();
			return "equals";
		}

		if(ch == '\0'){
			tvalue = "null";
			nextch();
			return "null";
		}

		if (ch == '@'){
			string temp;
			bool test1 = true;
			while(test1 == true){
				nextch();
				if(ch >= '0' && ch <= '9'){
					test1 = true;
				}
				else if(ch >= 'a' && ch <= 'z'){
					test1 = true;
				}
				else if(ch >= 'A' && ch <= 'Z'){
					test1 = true;
				}
				else if(ch == '$'){
					test1 = true;
				}
				else if(ch == '_'){
					test1 = true;
				}
				else if(ch == ':'){
					test1 = true;
				}
				else if(ch == '.'){
					test1 = true;
				}
				else{
					test1 = false;
					break;
				}
				temp.push_back(ch);
			}
			tvalue=temp;
			temp.clear();
			return "address";
		}

		if (ch == '('){
			string temp;
			bool test2 = true;
			bool test3 = false;
			while(test2 == true && test3==false){
				nextch();
				if(ch >= '0' && ch <= '9'){
					test2 = true;
				}
				else if(ch >= 'a' && ch <= 'z'){
					test2 = true;
				}
				else if(ch >= 'A' && ch <= 'Z'){
					test2 = true;
				}
				else if(ch == '$'){
					test2 = true;
				}
				else if(ch == '_'){
					test2 = true;
				}
				else if(ch == ':'){
					test2 = true;
				}
				else if(ch == '.'){
					test2 = true;
				}
				else{
					test2 = false;
				}
				if(ch == ')'){
					test3 = true;
					break;
				}
				temp.push_back(ch);
			}
			tvalue=temp;
			temp.clear();
			return "label";
		}

		if(ch=='/'){
			nextch();
			if(ch=='/'){
				while(ch!='\n' && ch!='\r'){
					nextch();
				}
			}
			else{
				cin.putback(ch);
			}
		}

		if(ch=='J'){
			string token;
			string temp;
			temp+=ch;
			nextch();
			char c=ch;
			temp+=c;
			nextch();
			temp+=ch;
			token=symbols->lookup(temp);
			if (token!=""){
				tvalue=temp;
				temp.clear();
				nextch();
				return token;
			}
			else{
				cin.putback(ch);
				cin.putback(c);
			}
		}

		if ((ch!=' ')&&(ch!='\n')){
			string token;
			string temp;
			temp.push_back(ch);
			token = symbols->lookup(temp);
	
			if (token!="")
			{
				nextch();
				char a = ch;
				temp.push_back(ch);
				nextch();
				char b = ch;
				temp.push_back(ch);
				token = symbols -> lookup(temp);
				if (token!="")
				{
					tvalue=temp;
					temp.clear();
					nextch();
					return token;
				}
				temp.pop_back();
				token=symbols -> lookup(temp);
				if (token!="")
				{
					cin.putback(b);
					tvalue=temp;
					temp.clear();
					nextch();
					return token;
				}
				temp.pop_back();
				cin.putback(b);
				cin.putback(a);
				token=symbols -> lookup(temp);
				tvalue=temp;
				temp.clear();
				nextch();
				return token;
			}
		}
		nextch();
	}
}
