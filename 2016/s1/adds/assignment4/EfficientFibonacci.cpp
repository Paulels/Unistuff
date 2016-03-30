#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "EfficientFibonacci.h"
using namespace std;

EfficientFibonacci::EfficientFibonacci(){

	//sets all values in the array to zero and also only goes to 47 numbers because any bigger and int type would no longer be valid
	int a=0;
	for(a=0;a<47;a++){
		calculatedFib[a]=0;
	}
}

int EfficientFibonacci::calculateFib(int n){

	if(n==0){     //base case 1
		calculatedFib[0]=0;
		return 0;
	}
	if(n==1||n==2){     //base case 2
		calculatedFib[n]=1;
		return 1;
	}
	if(calculatedFib[n]!=0){    //base case 3 for if the value has already been calculated
		return calculatedFib[n];
	}
	else{
		calculatedFib[n]=(calculateFib(n-1)+calculateFib(n-2));    //stores the calculated value to call upon later
		return calculatedFib[n];  //retuns the value stored in memory array
	}
		

};
