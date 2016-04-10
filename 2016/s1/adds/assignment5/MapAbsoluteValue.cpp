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

}

MapAbsoluteValue::~MapAbsoluteValue(){

}

int MapAbsoluteValue::f(int x){

	return abs(x);
};

int MapAbsoluteValue::map(deque<int> mvec){

	int a;
	a=f(mvec.at(0));
	mappedVec.push_back(a);
	int s=mvec.size();
	if(s==1){
		return 0;
	}
	else{
		mvec.pop_front();
		map(mvec);
	}
};

int MapAbsoluteValue::getMappedVec(int p){

	return mappedVec.at(p);

};
