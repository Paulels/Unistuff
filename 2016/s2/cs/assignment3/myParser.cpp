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

vector<pair<char,string> >* myParser::parse(){

	asmtokens *tokeniser = asmtokens::newtokeniser();
	string tokenType=tokeniser->next_token();
	string tokenValue=tokeniser->token_value();
	string wholeInstruction;
	string part1;
	string part2;
	string part3;
	string part4;
	string part5;
	parsedInstructions=new vector<pair<char,string> >();

	while(tokenValue!="?"){
		if(tokenType=="label"){
			//deal with symbol table
			tokenType=tokeniser->next_token();
			tokenValue=tokeniser->token_value();
		}
		if(tokenType=="address"){
			parsedInstructions->push_back(make_pair('a',tokenValue));
			tokenType=tokeniser->next_token();
			tokenValue=tokeniser->token_value();

		}
		if(tokenType=="dest" || tokenType=="dest-comp?" || tokenType=="null"){
			part1=tokenValue;
			tokenType=tokeniser->next_token();
			tokenValue=tokeniser->token_value();
			if(tokenType=="equals"){
				part2=tokenValue; 
				tokenType=tokeniser->next_token();
				tokenValue=tokeniser->token_value();
				part3=tokenValue;
				tokenType=tokeniser->next_token();
				tokenValue=tokeniser->token_value();
			}
			else{
				part3=part1;
				part1="";
				part2="";
			}
			if(tokenType=="semi"){
				part4=tokenValue;
				tokenType=tokeniser->next_token();
				tokenValue=tokeniser->token_value();
				part5=tokenValue;
				tokenType=tokeniser->next_token();
				tokenValue=tokeniser->token_value();
			}
			else{
				part4="";
				part5="";
			}
		
			wholeInstruction= part1 + part2 + part3 + part4 + part5;

			parsedInstructions->push_back(make_pair('c',wholeInstruction));
		}
		else if(tokenType=="comp"){
			part1="";
			part2="";
			part3=tokenValue;
			tokenType=tokeniser->next_token();
			tokenValue=tokeniser->token_value();
			if(tokenType=="semi"){
				part4=tokenValue;
				tokenType=tokeniser->next_token();
				tokenValue=tokeniser->token_value();
				part5=tokenValue;
				tokenType=tokeniser->next_token();
				tokenValue=tokeniser->token_value();
			}
			else{
				part4="";
				part5="";
			}
			
			wholeInstruction= part1 + part2 + part3 + part4 + part5;

			parsedInstructions->push_back(make_pair('c',wholeInstruction));
		}
		else{
			tokenType=tokeniser->next_token();
			tokenValue=tokeniser->token_value();
		}
		
/*		wholeInstruction= part1 + part2 + part3 + part4 + part5;

		parsedInstructions->push_back(make_pair('c',wholeInstruction));*/
	}	

	return parsedInstructions;
}
