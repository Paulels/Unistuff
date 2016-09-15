#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <utility>
#ifndef MYPARSER_H
#define MYPARSER_H

//

class myParser{

	public:

		myParser();
		~myParser();
		std::vector<std::pair<char,std::string> >* parse();

	private:

		std::vector<std::pair<char,std::string> > *parsedInstructions;

};
#endif //MYPARSER_H
