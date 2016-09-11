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
		if ( ch == EOF )			//checks if end of function and if so returns ?	
		{
			tvalue = "?" ;
			return "?" ;
		}

		//The next few just handle simple single characters 
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

		//This is to check an A-instruction and will allow all addresses that are legal
		if (ch == '@'){
			string temp;
			bool test1 = true;			//to check characters are legal
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

		//checkinbg for labels and if they are legal labels
		if (ch == '('){
			string temp;
			bool test2 = true;			//checking their legal and follow the rules
			bool test3 = false;			//checking to find )
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

		//ignoes comments so it looks for 2 /
		if(ch=='/'){
			nextch();
			if(ch=='/'){
				while(ch!='\n' && ch!='\r'){		//loops til a new line is found
					nextch();
				}
			}
			else{
				cin.putback(ch);		//puts character back in stream if the 2nd one isnt a /
			}
		}

		//dealing with jump commands cause my other C-instruction section didnt seem to handle it
		if(ch=='J'){
			string token;
			string temp;
			temp+=ch;
			nextch();
			char c=ch;
			temp+=c;
			nextch();
			temp+=ch;
			token=symbols->lookup(temp);	//checks in the above table to see if it is there
			if (token!=""){
				tvalue=temp;
				temp.clear();
				nextch();
				return token;
			}
			else{
				cin.putback(ch);			//puts the characters back in the stream if they arent needed
				cin.putback(c);
			}
		}

		//deals with all C-instructions apart from jumps
		if ((ch!=' ')&&(ch!='\n')){
			string token;
			string temp;
			//- and ! are in here cause my code didnt deal with these for some reason
			if(ch=='!' || ch=='-'){
				temp.push_back(ch);
				nextch();
				temp.push_back(ch);
				token = symbols -> lookup(temp);
				if (token!=""){
					tvalue=temp;
					temp.clear();
					nextch();
					return token;
				}
			}
			temp.push_back(ch);
			token = symbols->lookup(temp);
			//iterates through stating at 3 characters and going down to one to see what it is in the table above
			if (token!=""){
				nextch();
				char a = ch;
				temp.push_back(ch);			//soring ch in the variable
				nextch();
				char b = ch;
				temp.push_back(ch);
				token = symbols -> lookup(temp);
				if (token!=""){				//checks to see if the token is empty
					tvalue=temp;
					temp.clear();
					nextch();
					return token;
				}
				temp.pop_back();
				token=symbols -> lookup(temp);
				if (token!=""){
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
