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

		int calculatedFib[47];  

	public:

		EfficientFibonacci();

		int calculateFib(int n); 

};
#endif //EFFICIENTFIBONACCI_H
