#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#ifndef EFFICIENTFIBONACCI_H
#define EFFICIENTFIBONACCI_H

class EfficientFibonacci{

	private:

		int position;
		int calculatedFib[47];  //not sure what is the best way to store them, should i use a vector or maybe 2

	public:

		EfficientFibonacci();

		int calculateFib(int n);
		void storeFib(int fibN,int pos); //takes in the number and what position 

};
#endif //EFFICIENTFIBONACCI_H
