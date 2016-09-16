#include <iostream>
#include <ctype.h>
#include "myAssembler.h"
#include "myParser.h"
#include "myBinaryMap.h"
#include <vector>
#include <utility>

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

	//initialising where to store the parsed stuff
	vector<pair<char,string> > *parsedInstructions;
	parsedInstructions=myParser.parse();
	int l=parsedInstructions->size();
	int i=0;
	string bS;

	//converting each of the parsed strings into their equvalent binary
	for(i=0;i<l;i++){
		pair<char,string> pair=parsedInstructions->at(i);
		if(pair.first=='a'){
			myBM.aMap(pair.second);
		}
		else if(pair.first=='c'){
			bS=myBM.cMap(pair.second);
			cout<<bS<<endl;
		}
	}

}
