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

	reduceInt=32767;

}

int ReduceMinimum::binary_operator(int x,int y){

	if(y<x){
		return y;
	}
	else{
		return x;
	}
	
};

int ReduceMinimum::reduce(deque<int> rvec){

	reduceInt=binary_operator(reduceInt,rvec[0]);
	if(rvec.size()==1){
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
