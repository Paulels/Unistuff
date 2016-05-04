#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef SEARCH_H
#define SEARCH_H

//

class Search{

	protected:

		bool searchRes;

	public:

		Search();
		~Search();

		virtual bool search(int A[],int start,int end)=0;
		bool getSearchRes();

};
#endif //SEARCH_H
