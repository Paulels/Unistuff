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

//

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
