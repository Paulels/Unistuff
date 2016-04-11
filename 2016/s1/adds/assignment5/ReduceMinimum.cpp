#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "ReduceMinimum.h"
using namespace std;

ReduceMinimum::ReduceMinimum(){

}

void ReduceMinimum::setReduceInt(int ri){

	reduceInt=ri;

};

void ReduceMinimum::setOriginalVec(deque<int> ovec){

	originalVec=ovec;

};

int ReduceMinimum::binary_operator(int x,int y){

	if(y<x){
		reduceInt=y;
		return 0;
	}
	else if(x==y){
		reduceInt=x;
		return 0;
	}
	else if(y>x){
		reduceInt=x;
		return 0;
	}
	
};

int ReduceMinimum::reduce(deque<int> rvec){

	int s;
	s=rvec.size();
	binary_operator(reduceInt,rvec[0]);
	if(s==1){
		return reduceInt;
	}
	else{
		rvec.pop_front();
		reduce(rvec);
	}
};

int ReduceMinimum::getReduceInt(){

	return reduceInt;

};
