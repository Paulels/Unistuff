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

//This is the class that implements three part search
//It inheirts from the base class search
//It has a constuctor and deconstructor and a function to be redefined fom the base class

class ThreePartSearch:public Search{

	private:

		

	public:

		ThreePartSearch();
		~ThreePartSearch();

		bool search(int A[],int start,int end);

};
#endif //THREEPARTSEARCH_H
