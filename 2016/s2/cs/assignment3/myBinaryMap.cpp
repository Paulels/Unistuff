#include <iostream>
#include <ctype.h>
#include "myBinaryMap.h"
//include symbol table

using namespace std ;

myBinaryMap::myBinaryMap(){

	jump = symbols_string::newtable() ;
	dest = symbols_string::newtable() ;
	comp = symbols_string::newtable() ;

	//token class dest
	dest->insert("MD","011") ;
	dest->insert("AM","101") ;
	dest->insert("AD","110") ;
	dest->insert("AMD","111") ;
	dest->insert("A","100") ;
	dest->insert("M","001") ;
	dest->insert("D","010") ;
	dest->insert("NULL","000") 

	//comp
	comp->insert("A","0110000") ;
	comp->insert("M","1110000") ;
	comp->insert("D","0001100") ;
	comp->insert("0","0101010") ;
	comp->insert("1","0111111") ;
	comp->insert("-1","0111010") ;
	comp->insert("!D","0001101") ;
	comp->insert("!A","0110001") ;
	comp->insert("-D","0001111") ;
	comp->insert("-A","0110011") ;
	comp->insert("D+1","0011111") ;
	comp->insert("A+1","0110111") ;
	comp->insert("D-1","0001110") ;
	comp->insert("A-1","0110010") ;
	comp->insert("D+A","0000010") ;
	comp->insert("D-A","0010011") ;
	comp->insert("A-D","0000111") ;
	comp->insert("D&A","0000000") ;
	comp->insert("D|A","0010101") ;
	comp->insert("!M","1110001") ;
	comp->insert("-M","1110011") ;
	comp->insert("M+1","1110111") ;
	comp->insert("M-1","1110010") ;
	comp->insert("D+M","1000010") ;
	comp->insert("D-M","1010011") ;
	comp->insert("M-D","1000111") ;
	comp->insert("D&M","1000000") ;
	comp->insert("D|M","1010101") ;

	// jump
	jump->insert("JMP","111") ;
	jump->insert("JLT","100") ;
	jump->insert("JLE","110") ;
	jump->insert("JGT","001") ;
	jump->insert("JGE","011") ;
	jump->insert("JEQ","010") ;
	jump->insert("JNE","101") ;
	jump->insert("NULL","000") ;

}

myBinaryMap::~myBinaryMap(){		//deconstructor

}

string myBinaryMap::cMap(string parsedToken){

	string s1="111"
	string s2;
	string s3;
	string s4;
	string final;
		//deal with the whole c instruction and solve what each part is

	return final;
}

string myBinaryMap::aMap(string tokenValue){		//need symbol table
	//use long longb and divide by 2 to get binary and use stoi
}







