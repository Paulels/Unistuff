#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "ReduceGCD.h"
using namespace std;

ReduceGCD::ReduceGCD(){

}

void ReduceGCD::setReduceInt(int ri){

	reduceInt=ri;

};

void ReduceGCD::setOriginalVec(deque<int> ovec){

	originalVec=ovec;

};

int ReduceGCD::binary_operator(int x,int y){

	int r;
	if(x<y){
		r=y%x;
		reduceInt=x;
		return r;
	}
	else if(x==y){
		reduceInt=x;
		r=0;
		return r;
	}
	else{
		r=x%y;
		reduceInt=y;
		return r;
	}
};

int ReduceGCD::reduce(deque<int> rvec){

	int s=rvec.size();
	if(s==1){
		return reduceInt;
	}
	else{
		int t=binary_operator(reduceInt,rvec.at(s-1));
		if(t==0){
			rvec.pop_back();
			reduce(rvec);
		}
		else{
			originalVec.push_front(t);
			reduceInt=originalVec.at(0);
			reduce(originalVec);
		}
	}
};

int ReduceGCD::getReduceInt(){

	return reduceInt;

};
