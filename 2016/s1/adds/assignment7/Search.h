#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef SEARCH_H
#define SEARCH_H

//This is the base class search 
//it has a vaiable to contain the result in with a function to retrieve it
//it has a constructor and a deconstuctor
//it has a virtual function in it which makes this class unable to be created
//This function needs defining in the sub classes

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
