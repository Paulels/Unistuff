#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "ReduceGCD.h"
using namespace std;

//Just a basic constructor
ReduceGCD::ReduceGCD(){

}

//A function to initially set the reduced int
void ReduceGCD::setReduceInt(int ri){

	reduceInt=ri;

};

//A function to store the original vector
void ReduceGCD::setOriginalVec(deque<int> ovec){

	originalVec=ovec;

};

//function which checks two values to determine if one is divisable by the other
int ReduceGCD::binary_operator(int x,int y){

	int r;		//is the remainder of the divisions
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


//Recusive function to reduce a given deque
int ReduceGCD::reduce(deque<int> rvec){

	int s=rvec.size();
	if(s==1){					//if the deque has only 1 element then stop and return the value
		return reduceInt;
	}
	else{
		int t=binary_operator(reduceInt,rvec.at(s-1));		//the remainder of the divisions done in 
															//binary operator
		if(t==0){				//if remainder is 0 then remove the last element and reduce again
			rvec.pop_back();
			reduce(rvec);
		}
		else{							//otherwise add the remainder to the front of the original 
										//deque and start again
			originalVec.push_front(t);
			reduceInt=originalVec.at(0);
			reduce(originalVec);
		}
	}
};

//A function to return the reduced int
int ReduceGCD::getReduceInt(){

	return reduceInt;

};
