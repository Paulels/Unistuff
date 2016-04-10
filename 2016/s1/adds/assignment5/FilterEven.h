#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef FILTEREVEN_H
#define FILTEREVEN_H
#include "FilterGeneric.h"

//

class FilterEven:public FilterGeneric{

	private:

		std::deque<int> filteredVec;

		bool f(int x);

	public:
int k;
		FilterEven();

		std::deque<int> filter(std::deque<int> fvec);

};
#endif //FILTEREVEN_H
