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

//

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
