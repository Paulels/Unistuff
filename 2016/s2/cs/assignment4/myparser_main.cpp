#include <iostream>
#include <stdlib.h>
#include "myparser_parser.h"

using namespace std ;

//create a new parser and then call the parseprogram function 

int main()
{
	myparser_parser *Parser = new myparser_parser();

	Parser->parseProgram() ;

	delete Parser;

	return 0;
}
