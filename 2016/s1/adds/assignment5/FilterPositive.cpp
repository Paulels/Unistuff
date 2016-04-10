#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "FilterPositive.h"
using namespace std;

FilterPositive::FilterPositive(){

}

FilterPositive::~FilterPositive(){

}

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
	c=f(fvec.at(0));
	int s=fvec.size();
	if(c==true){
		filteredVec.push_back(fvec[0]);
	}
	if(s==1){
		return 0;
	}
	else{
		fvec.pop_front();
		filter(fvec);
	}
};

int FilterPositive::getFilteredVec(int p){

	return filteredVec.at(p);

};

int FilterPositive::getVecSize(){

	return filteredVec.size();

};
