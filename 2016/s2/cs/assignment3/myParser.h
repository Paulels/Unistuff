#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef MYPARSER_H
#define MYPARSER_H

//

class myParser{

	public:

		myParser();
		~myParser();
		vector<pair<char,string>>* parse();

	private:

		vector<pair<char,string>> *parsedInstructions;

};
#endif //MYPARSER_H
