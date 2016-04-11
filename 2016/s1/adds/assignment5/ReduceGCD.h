#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include "ReduceGeneric.h"

//This class is designed to take in a deque and return the greasted common denominator of all of the 
//numbers
//it stores the reduced int and the original vector
//has a few set function and a get function for the states and then it has the public recursive function
//and the private operator function
//It inherits from ReduceGeneric

class ReduceGCD:public ReduceGeneric{

	private:

		int reduceInt;
		std::deque<int> originalVec;

		int binary_operator(int x,int y);

	public:

		ReduceGCD();

		int reduce(std::deque<int> rvec);
		int getReduceInt();
		void setReduceInt(int ri);
		void setOriginalVec(std::deque<int> ovec);

};
#endif //REDUCEGCD_H
