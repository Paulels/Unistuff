#include <iostream>
#include <ctype.h>
#include "myParser.h"
#include "asmtokens.h"
#include <utility>
#include <vector>

using namespace std ;

myParser::myParser(){



}

myParser::~myParser(){		//deconstructor

	delete parsedInstructions;
}

vector<pair<char,string>>* myParser::parse(){

	asmtokens_x tokeniser;
	string tokenType=tokeniser->next_token();
	string tokenValue=tokeniser->token_value();
	string wholeInstuction;
	parsedInstructions=new vector<pair<char,string>>();

	//deal with this bit
/*	while(tokenValue!="?"){
		if(

		parsedInstuctions->push_back(make_pair('a',wholeInstuction));
		tokenType=tokeniser->next_token();
		tokenValue=tokeniser->token_value();
	}*/		

	return parsedInstructions;
}
