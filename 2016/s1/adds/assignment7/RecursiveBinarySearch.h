#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include "Search.h"

//This is the class that implements recursive binary search
//It inheirts from the base class search
//It has a constuctor and deconstructor and a function to be redefined fom the base class

class RecursiveBinarySearch:public Search{

	private:

		

	public:

		RecursiveBinarySearch();
		~RecursiveBinarySearch();

		bool search(int A[],int start,int end);

};
#endif //RECURSIVEBINARYSEARCH_H
