#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "FilterPositiveTwoDigit.h"
using namespace std;

FilterPositiveTwoDigit::FilterPositiveTwoDigit(){

}

FilterPositiveTwoDigit::~FilterPositiveTwoDigit(){

}

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

int FilterPositiveTwoDigit::filter(deque<int> fvec){

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

int FilterPositiveTwoDigit::getFilteredVec(int p){

	return filteredVec.at(p);

};

int FilterPositiveTwoDigit::getVecSize(){

	return filteredVec.size();

};
