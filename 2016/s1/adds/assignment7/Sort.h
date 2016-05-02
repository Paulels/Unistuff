#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef SORT_H
#define SORT_H

//

class Sort{

	private:

		std::vector<int> initialVec;
		std::vector<int> sortedVec;

	public:

		Sort();
		~Sort();

		virtual void sort(std::vector<int> A)=0;

};
#endif //SORT_H
