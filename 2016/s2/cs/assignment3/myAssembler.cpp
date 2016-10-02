#include <iostream>
#include <ctype.h>
#include "myAssembler.h"
#include "myParser.h"
#include "myBinaryMap.h"
#include <vector>
#include <utility>
#include <sstream>
#include <string>

using namespace std ;

//constructor
myAssembler::myAssembler(){

}

//deconstructor
myAssembler::~myAssembler(){

}

//driver function
void myAssembler::Assemble(){

	//initialising other classes
	myParser myParser;
	myBinaryMap myBM;
	symbols_int *symbols = symbols_int::newtable();

	//initialising where to store the parsed stuff and some symbol table stuff
	vector<pair<char,string> > *parsedInstructions;
	parsedInstructions=myParser.parse(symbols);
	int l=parsedInstructions->size();
	int i=0;
	string bS;
	string tV;
	pair<char,string> pair;
	int addressCount=16;
	int alreadyAddressed;
	bool addressCheck;

	//deals with addresses and converts to binary
	for(i=0;i<l;i++){
		pair=parsedInstructions->at(i);
		tV=pair.second;
		if(pair.first=='a'){
			//checks if it is a word and if so deals with it
			if((tV.at(0)>='A' && tV.at(0)<='Z') || (tV.at(0)>='a' && tV.at(0)<='z') || (tV.at(0)=='$') || (tV.at(0)=='_') || (tV.at(0)==':') || (tV.at(0)=='.')){
				addressCheck=symbols->insert(tV,addressCount);		//checks to see if it is already in the symbol table
				if(addressCheck==true){			//if not already in symbol table converts addressCount to a string
					ostringstream convert;
					convert << addressCount;
					tV=convert.str();
					addressCount++;
				}
				else{							//if already nin the symbol table, looks up its address and converts to a string
					alreadyAddressed=symbols->lookup(tV);
					ostringstream convert;
					convert << alreadyAddressed;
					tV=convert.str();
				}
			pair.second=tV;
			}
		}
	parsedInstructions->at(i)=pair;				//re adds it to the vector
	}

	//converting each of the parsed strings into their equvalent binary
	for(i=0;i<l;i++){
		pair=parsedInstructions->at(i);
		if(pair.first=='a'){
			myBM.aMap(pair.second);
		}
		else if(pair.first=='c'){
			bS=myBM.cMap(pair.second);
			cout<<bS<<endl;
		}
	}

}
