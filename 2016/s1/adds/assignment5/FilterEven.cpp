#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "FilterEven.h"
using namespace std;

FilterEven::FilterEven(){

}

FilterEven::~FilterEven(){

}

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

int FilterEven::getFilteredVec(int p){

	return filteredVec.at(p);

};

int FilterEven::getVecSize(){

	return filteredVec.size();

};
