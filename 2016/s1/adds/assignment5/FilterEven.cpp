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
k=6;
}

bool FilterEven::f(int x){

	if(x%2==0){
		return true;
	}
	else{
		return false;
	}
};

deque<int> FilterEven::filter(deque<int> fvec){

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
