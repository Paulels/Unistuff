#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "FilterPositive.h"
using namespace std;

//Just a basic constructor
FilterPositive::FilterPositive(){

}

//Just a basic deconstructor
FilterPositive::~FilterPositive(){

}

//determines whether a value is a positive value or not
bool FilterPositive::f(int x){

	if(x>0){
		return true;
	}
	else{
		return false;
	}
};

int FilterPositive::filter(deque<int> fvec){

	bool c;
	c=f(fvec.at(0));					//checks to see if the value is a positive value
	int s=fvec.size();
	if(c==true){						//if it is then it gets stored 
		filteredVec.push_back(fvec[0]);
	}
	if(s==1){							//if the size of the deque is 1 then it exists the function
		return 0;
	}
	else{								//if the size of the deque is 1 then it exists the function
		fvec.pop_front();
		filter(fvec);
	}
};

//returns the value of the filtered vec at a given position
int FilterPositive::getFilteredVec(int p){

	return filteredVec.at(p);

};

//returns the size of the filtered vec
int FilterPositive::getVecSize(){

	return filteredVec.size();

};
