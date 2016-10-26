#include <iostream>
#include <stdlib.h>
#include "mypretty_pretty.h"

using namespace std ;

//create a new parser and then call the parseprogram function 

int main()
{
	mypretty_pretty *Pretty = new mypretty_pretty();

	Pretty->printProgram() ;

	delete Pretty;

	return 0;
}
