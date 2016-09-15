#include <iostream>
#include <ctype.h>
#include "myAssembler.h"
#include "myParser.h"
#include "myBinaryMap.h"
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
	vector<pair<char,string> > *parsedInstructions;
	parsedInstructions=myParser.parse();
	int l=parsedInstructions->size();
	int i=0;
	string bS;
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
