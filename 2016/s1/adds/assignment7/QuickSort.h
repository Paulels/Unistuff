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

//This is the class that implements bubblesort
//It inheirts from the base class sort
//It has a constuctor and deconstructor and a function to be redefined fom the base class

class QuickSort:public Sort{

	private:

		

	public:

		QuickSort();
		~QuickSort();

		void sort(int *A,int start,int end);

};
#endif //QUICKSORT_H
