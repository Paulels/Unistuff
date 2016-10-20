#include <iostream>
#include <stdlib.h>
#include "myParser.h"
#include "jacktokens.h"

using namespace std ;


int main()
{
	// create a tokeniser and read first token to initialise it
	jacktokens *tokeniser = jacktokens::newtokeniser() ;
	token = tokeniser->next_token() ;


	

	// parse a Program
	parseProgram() ;

	// check for end of file
	mustbe("?") ;

	return 0;
}
