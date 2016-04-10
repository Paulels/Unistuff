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
k=5;
}

bool FilterPositive::f(int x){

	if(x>0){
		return true;
	}
	else{
		return false;
	}
};

deque<int> FilterPositive::filter(deque<int> fvec){

	bool c;
	c=f(fvec[0]);
	int s=fvec.size();
	if(c==true){
		filteredVec.push_back(fvec[0]);
	}
	if(s==1){
		return filteredVec;
	}
	else{
		fvec.pop_front();
		filter(fvec);
	}
};
