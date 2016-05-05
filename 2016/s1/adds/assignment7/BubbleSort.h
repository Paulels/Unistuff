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

//This is the class that implements bubblesort
//It inheirts from the base class sort
//It has a constuctor and deconstructor and a function to be redefined fom the base class


class BubbleSort:public Sort{

	private:

		

	public:

		BubbleSort();
		~BubbleSort();

		void sort(int *A,int start,int end);

};
#endif //BUBBLESORT_H
