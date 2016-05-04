#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef THREEPARTSEARCH_H
#define THREEPARTSEARCH_H
#include "Search.h"

//

class ThreePartSearch:public Search{

	private:

		

	public:

		ThreePartSearch();
		~ThreePartSearch();

		bool search(int A[],int start,int end);

};
#endif //THREEPARTSEARCH_H
