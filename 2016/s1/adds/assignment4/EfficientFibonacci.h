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

//class that runs fibonacci recursively but does it efficiently by storing values in an array

class EfficientFibonacci{

	private:

		int calculatedFib[47];  

	public:

		EfficientFibonacci();

		int calculateFib(int n); 

};
#endif //EFFICIENTFIBONACCI_H
