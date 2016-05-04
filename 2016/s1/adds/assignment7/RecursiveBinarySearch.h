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

//

class RecursiveBinarySearch:public Search{

	private:

		

	public:

		RecursiveBinarySearch();
		~RecursiveBinarySearch();

		bool search(int A[],int start,int end);

};
#endif //RECURSIVEBINARYSEARCH_H
