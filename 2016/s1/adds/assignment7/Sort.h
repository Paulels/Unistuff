#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef SORT_H
#define SORT_H

//This is the base class sort 
//it has a constructor and a deconstuctor
//it has a virtual function in it which makes this class unable to be created
//This function needs defining in the sub classes

class Sort{

	protected:

		

	public:

		Sort();
		~Sort();

		virtual void sort(int *A,int start,int end)=0;

};
#endif //SORT_H
