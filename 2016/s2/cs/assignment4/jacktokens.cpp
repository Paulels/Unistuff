// a skeleton of the jacktokens class implementation

#include <iostream>
#include <ctype.h>
#include "jacksymbols.h"
#include "jacktokens.h"

using namespace std ;

// define your own class to implement jacktokens
// next_token() returns integers, strings and identifiers as their class
// next_token() returns all other tokens as their value
class jacktokens_x : public jacktokens
{
public:
	jacktokens_x() ;		// create a new tokeniser
        string next_token() ; 		// read the next token from the input and return it or its class
        string token_class() ;		// return the current token class as a string
        string token_value() ;		// return the current token as a string
private:
        symbols_string *symbols ;	// internal symbol table - maps token values to token class
} ;

// return a pointer to a new tokeniser
jacktokens *jacktokens::newtokeniser()
{
	return new jacktokens_x() ;
}

// create a new tokeniser
jacktokens_x::jacktokens_x()
{
	// create a new symbol table for string to string
	symbols = symbols_string::newtable() ;

	// add the keywords to this table
	symbols->insert("class","keyword") ;
	symbols->insert("constructor","keyword") ;
	symbols->insert("function","keyword") ;
	symbols->insert("method","keyword") ;
	symbols->insert("field","keyword") ;
	symbols->insert("static","keyword") ;
	symbols->insert("var","keyword") ;
	symbols->insert("int","keyword") ;
	symbols->insert("char","keyword") ;
	symbols->insert("boolean","keyword") ;
	symbols->insert("void","keyword") ;
	symbols->insert("true","keyword") ;
	symbols->insert("false","keyword") ;
	symbols->insert("null","keyword") ;
	symbols->insert("this","keyword") ;
	symbols->insert("let","keyword") ;
	symbols->insert("do","keyword") ;
	symbols->insert("if","keyword") ;
	symbols->insert("else","keyword") ;
	symbols->insert("while","keyword") ;
	symbols->insert("return","keyword") ;
}

// read the next token from the input and return its kind
string jacktokens_x::next_token()
{
	return "?" ;
}

// return the current token class as a string
string jacktokens_x::token_class()
{
	return "?" ;
}

// return the current token as a string
string jacktokens_x::token_value()
{
	return "?" ;
}
