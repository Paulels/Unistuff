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

		int partition(int *B,int start,int end);

	public:

		QuickSort();
		~QuickSort();

		void sort(int *A,int start,int end);

};
#endif //QUICKSORT_H