#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

//

class QuickSort:public Sort{

	private:

		

	public:

		QuickSort();
		~QuickSort();

		void sort(std::vector<int> A);

};
#endif //QUICKSORT_H
