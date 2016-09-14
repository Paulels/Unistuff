#include <iostream>
#include <ctype.h>
#include "myAssembler.h"
#include "myParser.h"
#include "myBinaryMap"
#include <vector>
#include <utility>

using namespace std ;

myAssembler::myAssembler(){



}

myAssembler::~myAssembler(){		//deconstructor

}

void myAssembler::Assemble(){

	myParser myParser;
	myBinaryMap myBM;
	vector<pair<char,string>> *parsedInstructions;
	parsedInstructions=myParser.parse();
	int l=//length of vector
	int i=0;
	for(//upto length of vector){
		//go through and go to my map function and then print what my map function returns
		pair<char,string> pair=parsedInstructions.at(i);
		if(pair.first=='a'){
			//deal with a instruction
		}
		else if(pair.first=='c'){
			//deal with c instructions
		}
	}

}
