#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef FILTERPOSITIVE_H
#define FILTERPOSITIVE_H
#include "FilterGeneric.h"

//

class FilterPositive:public FilterGeneric{

	private:

		std::deque<int> filteredVec;

		bool f(int x);

	public:

		FilterPositive();
		~FilterPositive();

		int filter(std::deque<int> fvec);
		int getFilteredVec(int p);
		int getVecSize();

};
#endif //FILTERPOSITIVE_H
