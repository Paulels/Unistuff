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

MapAbsoluteValue::MapAbsoluteValue(){
k=3;
}

int MapAbsoluteValue::f(int x){

	return abs(x);
};

deque<int> MapAbsoluteValue::map(deque<int> mvec){

	int a;
	a=f(mvec[0]);
	mappedVec.push_back(a);
	int s=mvec.size();
	if(s==1){
		return mappedVec;
	}
	else{
		mvec.pop_front();
		map(mvec);
	}
};
