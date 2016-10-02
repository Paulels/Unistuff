#include <iostream>
#include <ctype.h>
#include "myParser.h"
#include "asmtokens.h"
#include "asmsymbols.h"
#include <utility>
#include <vector>
#include <sstream>

using namespace std ;

//constructor
myParser::myParser(){

}

//deconstructor
myParser::~myParser(){

	delete parsedInstructions;
}

//parses all the tokens
vector<pair<char,string> >* myParser::parse(symbols_int *symbols){

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
	int labelsCount=0;

	//initialises all of the predefined symbols
	symbols->insert("R0",0);
	symbols->insert("R1",1);
	symbols->insert("R2",2);
	symbols->insert("R3",3);
	symbols->insert("R4",4);
	symbols->insert("R5",5);
	symbols->insert("R6",6);
	symbols->insert("R7",7);
	symbols->insert("R8",8);
	symbols->insert("R9",9);
	symbols->insert("R10",10);
	symbols->insert("R11",11);
	symbols->insert("R12",12);
	symbols->insert("R13",13);
	symbols->insert("R14",14);
	symbols->insert("R15",15);
	symbols->insert("SP",0);
	symbols->insert("LCL",1);
	symbols->insert("ARG",2);
	symbols->insert("THIS",3);
	symbols->insert("THAT",4);
	symbols->insert("SCREEN",16384);
	symbols->insert("KBD",24576);

	//runs until it reaches the end
	while(tokenValue!="?"){
		//deals with lables
		if(tokenType=="label"){
			symbols->insert(tokenValue,labelsCount);			//inserts labels and their position into the symbol table
			tokenType=tokeniser->next_token();
			tokenValue=tokeniser->token_value();
		}
		//deals with addresses
		if(tokenType=="address"){
			parsedInstructions->push_back(make_pair('a',tokenValue));
			tokenType=tokeniser->next_token();
			tokenValue=tokeniser->token_value();
			labelsCount++;
		}
		//deals with if there is a possibility of something before an equals sign
		if(tokenType=="dest" || tokenType=="dest-comp?" || tokenType=="null"){
			labelsCount++;
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
			//if no equals then must be a comp
			else{
				part3=part1;
				part1="";
				part2="";
			}
			//deals with if there is a jump
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
		//deals with when there is equals at the start
		else if(tokenType=="comp"){
			labelsCount++;
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
			parsedInstructions->push_back(make_pair('c',wholeInstruction));		//storing result in a vector
		}
		else if(tokenValue=="?"){		//dealing with a specific bug so as not to clear vector
			break;
		}
		//if there is an invalid thing then it skips
		else{
			tokenType=tokeniser->next_token();
			tokenValue=tokeniser->token_value();
			parsedInstructions->clear();
			return parsedInstructions;
		}
	}	
	return parsedInstructions;
}
