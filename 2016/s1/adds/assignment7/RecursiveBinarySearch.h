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

		bool search(std::vector<int> A);

};
#endif //RECURSIVEBINARYSEARCH_H
