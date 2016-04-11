#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "ReduceMinimum.h"
using namespace std;

//Just a basic constructor
ReduceMinimum::ReduceMinimum(){

}

//initially sets the reduce int
void ReduceMinimum::setReduceInt(int ri){

	reduceInt=ri;

};

//stores the original deque
void ReduceMinimum::setOriginalVec(deque<int> ovec){

	originalVec=ovec;

};

//checks to see which value is smaller and stores in in reduce int
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

//recursively reduce a deque to its minimum value
int ReduceMinimum::reduce(deque<int> rvec){

	int s;
	s=rvec.size();
	binary_operator(reduceInt,rvec[0]);		//calls the function to check which is smaller
	if(s==1){							//returns the reduce int if the deque size is one
		return reduceInt;
	}
	else{					//otherwise it removes the first value and reduces again
		rvec.pop_front();
		reduce(rvec);
	}
};

//returns the reduce int
int ReduceMinimum::getReduceInt(){

	return reduceInt;

};
