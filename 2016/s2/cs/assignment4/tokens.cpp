// convert Jack VM Code into XML
#include <iostream>
#include <string>
#include "jackxml.h"
#include "jacktokens.h"
#include "jacksymbols.h"

using namespace std ;

// assume that standard input is the contents of a Hack assembly file
// read each token and output it in XML format
int main()
{
	jack_var v ;

	// create a new XML output object
	jackxml *xml = new jackxml() ;

	// create a new assembler tokeniser then read the first token
	jacktokens *tokeniser = jacktokens::newtokeniser() ;
	string token = tokeniser->next_token() ;

	// a token counters
	int tokens = 0 ;

	// XML root node is tokens
	xml->open_node("tokens") ;
	while ( token != "?" )			// stop at EOF, "?" denotes EOF
	{
		// output next token as an XML node
		string token_class = tokeniser->token_class() ;
		xml->open_node(token_class) ;
		xml->node_text(tokeniser->token_value()) ;
		xml->close_node(token_class) ;

		// increment token counter
		tokens++ ;

		// read the next token
		token = tokeniser->next_token() ;
	}
	// close the root node
	xml->close_node("tokens") ;

	// add a count of the tokens read
	xml->buffer_line("Number of tokens read: " + to_string(tokens) ) ;

	// now actually write out all the buffered text
	xml->flush_output() ;

	return 0 ;
}
