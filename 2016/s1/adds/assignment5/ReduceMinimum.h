#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include "ReduceGeneric.h"

//This class is designed to take in a deque and return the minimum value of all of the numbers
//it stores the reduced int and the original vector
//has a few set function and a get function for the states and then it has the public recursive function
//and the private operator function
//It inherits from ReduceGeneric

class ReduceMinimum:public ReduceGeneric{

	private:

		int reduceInt;
		std::deque<int> originalVec;

		int binary_operator(int x,int y);

	public:

		ReduceMinimum();

		int reduce(std::deque<int> rvec);
		int getReduceInt();
		void setReduceInt(int ri);
		void setOriginalVec(std::deque<int> ovec);

};
#endif //REDUCEMINIMUM_H
