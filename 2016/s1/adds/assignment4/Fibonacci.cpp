#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "Fibonacci.h"
using namespace std;

Fibonacci::Fibonacci(){ //default constructor

}

int Fibonacci::calcFib(int n){

	if(n==0){    //base case 1
		return 0;
	}
	if(n==1||n==2){    //base case 2
		return 1;
	}
	return (calcFib(n-1)+calcFib(n-2));  //recusively calculates fibonacci of n
};
