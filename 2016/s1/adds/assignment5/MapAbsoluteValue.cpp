#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <stdlib.h>
#include <deque>
#include "MapAbsoluteValue.h"
using namespace std;

//Just a basic constructor
MapAbsoluteValue::MapAbsoluteValue(){

}

//Just a basic deconstructor
MapAbsoluteValue::~MapAbsoluteValue(){

}

//makes the inputted value positive
int MapAbsoluteValue::f(int x){

	return abs(x);
};

//recusive function to map the values in the given deque
int MapAbsoluteValue::map(deque<int> mvec){

	int a;
	a=f(mvec.at(0));			//makes the value positive and then stores it in the mapped vec
	mappedVec.push_back(a);
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
int MapAbsoluteValue::getMappedVec(int p){

	return mappedVec.at(p);

};
