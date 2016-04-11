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

//This class takes in a deque and then filters out all of the odd values
//it stores the filtered deque 
//It has both a public recursive function and a private function
//it inherits from FilterGeneric

class FilterEven:public FilterGeneric{

	private:

		std::deque<int> filteredVec;

		bool f(int x);

	public:

		FilterEven();
		~FilterEven();

		int filter(std::deque<int> fvec);
		int getFilteredVec(int p);
		int getVecSize();

};
#endif //FILTEREVEN_H
