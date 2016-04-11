#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "FilterPositiveTwoDigit.h"
using namespace std;

//Just a basic constructor
FilterPositiveTwoDigit::FilterPositiveTwoDigit(){

}

//Just a basic deconstructor
FilterPositiveTwoDigit::~FilterPositiveTwoDigit(){

}

//determines whether a value is a positive two digit value or not
bool FilterPositiveTwoDigit::f(int x){

	if(x>9 && x<100){
		if(x>0){
			return true;
		}
	}
	else{
		return false;
	}
};

//recursive function used to filter the deque
int FilterPositiveTwoDigit::filter(deque<int> fvec){

	bool c;
	c=f(fvec.at(0));					//checks to see if the value is a positive two digit value
	int s=fvec.size();
	if(c==true){						//if it is then it gets stored 
		filteredVec.push_back(fvec[0]);
	}
	if(s==1){							//if the size of the deque is 1 then it exists the function
		return 0;
	}
	else{								//otherwise it removes the first value and filters again
		fvec.pop_front();
		filter(fvec);
	}
};

//returns the value of the filtered vec at a given position
int FilterPositiveTwoDigit::getFilteredVec(int p){

	return filteredVec.at(p);

};

//returns the size of the filtered vec
int FilterPositiveTwoDigit::getVecSize(){

	return filteredVec.size();

};
