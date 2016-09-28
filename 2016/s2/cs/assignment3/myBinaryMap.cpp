#include <iostream>
#include <ctype.h>
#include <string>
#include "myBinaryMap.h"
#include "asmcode.h"
#include "asmsymbols.h"
//include symbol table

using namespace std ;

//constructor
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
	dest->insert("NULL","000") ;

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

//deconstructor
myBinaryMap::~myBinaryMap(){

}

//maps c-instructions to binary
string myBinaryMap::cMap(string parsedToken){

	string s1="111";
	string s2;
	string s3="000";
	string s4="000";
	string final;
	string substring;
	int l=parsedToken.length()-1;
	int eqSign=0;
	int semiSign=0;
	int diff=0;
	//counts to see where the signs are
	while((parsedToken.at(eqSign)!='=') && eqSign!=l){
		eqSign++;
	}
	while(parsedToken.at(semiSign)!=';' && semiSign!=l){
		semiSign++;
	}
	//deals with dest part if its there
	if(eqSign!=l){
		substring=parsedToken.substr(0,eqSign);
		s3=dest->lookup(substring);
	}
	else{
		s3=dest->lookup("NULL");
	}
	//deals with the jump part if it is there
	if(semiSign!=l){
		if(parsedToken.at(semiSign+1)=='J'){
			substring=parsedToken.substr((semiSign+1));
			s4=jump->lookup(substring);
		}
	}
	else{
		s4=jump->lookup("NULL");
	}
	//deals with the comp stuff based off of whether there is dest and jump stuff
	if(eqSign!=l && semiSign!=l){
		diff=semiSign-eqSign;
		substring=parsedToken.substr((eqSign+1),diff-1);
		s2=comp->lookup(substring);
	}
	else if(eqSign!=l && semiSign==l){
		substring=parsedToken.substr((eqSign+1));
		s2=comp->lookup(substring);
	}
	else if(semiSign!=l && eqSign==l){
		substring=parsedToken.substr(0,semiSign);
		s2=comp->lookup(substring);
	}
	else{
		s2=comp->lookup(parsedToken);
	}

	final = s1 + s2 + s3 + s4;
	
	return final;
}

//maps a-instructions to binary
void myBinaryMap::aMap(string tokenValue){
	int i;
	i=atoi(tokenValue.c_str());
	asmcode::output_16bits(i) ;
}







