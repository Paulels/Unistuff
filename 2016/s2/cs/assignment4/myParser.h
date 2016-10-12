#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <utility>
#include "asmsymbols.h"
#ifndef MYPARSER_H
#define MYPARSER_H

//This is my class to parse from tokens to strings and will deal with populating the symbol table
//I am going to store the parsed instructions in a vector of pairs

class myParser{

	public:

		myParser();
		~myParser();
		std::vector<std::pair<char,std::string> >* parse(symbols_int *symbols);

	private:

		std::vector<std::pair<char,std::string> > *parsedInstructions;

};
#endif //MYPARSER_H
