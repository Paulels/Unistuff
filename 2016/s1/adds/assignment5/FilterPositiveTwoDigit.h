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

//This class takes in a deque and then filters out all of the non positive two digit values
//it stores the filtered deque 
//It has both a public recursive function and a private function
//it inherits from FilterGeneric

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
