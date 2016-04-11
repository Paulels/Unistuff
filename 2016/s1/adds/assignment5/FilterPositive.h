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

//This class takes in a deque and then filters out all of the non positive values
//it stores the filtered deque 
//It has both a public recursive function and a private function
//it inherits from FilterGeneric

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
