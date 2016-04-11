#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "FilterEven.h"
using namespace std;

//Just a basic constructor
FilterEven::FilterEven(){

}

//Just a basic deconstructor
FilterEven::~FilterEven(){

}

//determines whether a value is an even value or not
bool FilterEven::f(int x){

	if(x%2==0){
		return true;
	}
	else{
		return false;
	}
};

int FilterEven::filter(deque<int> fvec){

	bool c;
	c=f(fvec.at(0));					//checks to see if the value is an even value
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
int FilterEven::getFilteredVec(int p){

	return filteredVec.at(p);

};

//returns the size of the filtered vec
int FilterEven::getVecSize(){

	return filteredVec.size();

};
