#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "MapTriple.h"
using namespace std;

//Just a basic constructor
MapTriple::MapTriple(){

}

//Just a basic deconstructor
MapTriple::~MapTriple(){

}

//Triples the inputted value
int MapTriple::f(int x){

	return 3*x;

};

//recusive function to map the values in the given deque
int MapTriple::map(deque<int> mvec){

	int c;
	c=f(mvec.at(0));			//triples the value and then stores it in the mapped vec
	mappedVec.push_back(c);
	int s=mvec.size();
	if(s==1){					//checks to see if the deques size is 1 and if is it exits
		return 0;
	}
	else{						//otherwise it removes the first value and maps again
		mvec.pop_front();
		map(mvec);
	}
};

//returns the value in the mapped vec at that position
int MapTriple::getMappedVec(int p){

	return mappedVec.at(p);

};


