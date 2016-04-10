#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

//

class ReduceGeneric{

	private:

		virtual int binary_operator(int x,int y)=0;

	public:

		ReduceGeneric();

		virtual int reduce(std::deque<int> rvec)=0;

};
#endif //REDUCEGENERIC_H
