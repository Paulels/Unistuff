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

		int binary_operator(int x,int y);

	public:

		ReduceMinimum();

		int reduce(std::deque<int> rvec);
		int getReduceInt();

};
#endif //REDUCEMINIMUM_H
