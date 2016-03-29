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

Fibonacci::Fibonacci(){

}

int Fibonacci::calcFib(int n){

	if(n==0){
		return 0;
	}
	if(n==1||n==2){
		return 1;
	}
	return (calcFib(n-1)+calcFib(n-2));
};
