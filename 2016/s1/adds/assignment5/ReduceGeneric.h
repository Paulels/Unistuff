#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

//This is the generic reduce class which has the public recursive function and the private operator 
//function which work together to produce a value which has been reduced from a deque
//This class is purely virtual

class ReduceGeneric{

	private:

		virtual int binary_operator(int x,int y)=0;

	public:

		ReduceGeneric();

		virtual int reduce(std::deque<int> rvec)=0;

};
#endif //REDUCEGENERIC_H
