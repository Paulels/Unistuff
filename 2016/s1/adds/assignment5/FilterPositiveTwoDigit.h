#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef FILTERPOSITIVETWODIGIT_H
#define FILTERPOSITIVETWODIGIT_H
#include "FilterGeneric.h"

//

class FilterPositiveTwoDigit:public FilterGeneric{

	private:

		std::deque<int> filteredVec;

		bool f(int x);

	public:

		FilterPositiveTwoDigit();
		~FilterPositiveTwoDigit();

		int filter(std::deque<int> fvec);
		int getFilteredVec(int p);
		int getVecSize();

};
#endif //FILTERPOSITIVETWODIGIT_H
