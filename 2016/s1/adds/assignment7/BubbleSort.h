#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"

//

class BubbleSort:public Sort{

	private:

		

	public:

		BubbleSort();
		~BubbleSort();

		void sort(int *A,int start,int end);

};
#endif //BUBBLESORT_H
