#include <iostream>
#include <stdlib.h>
#include "myparser_parser.h"

using namespace std ;


int main()
{
	myparser_parser *Parser = new myparser_parser();

	Parser->parseProgram() ;

	return 0;
}
