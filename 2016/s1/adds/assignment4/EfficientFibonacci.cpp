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

	int a=0;
	for(a=0;a<47;a++){
		calculatedFib[a]=0;
	}
}

int EfficientFibonacci::calculateFib(int n){

	if(n==0){
		calculatedFib[0]=0;
		return 0;
	}
	if(n==1||n==2){
		calculatedFib[n]=1;
		return 1;
	}
	if(calculatedFib[n]!=0){
		return calculatedFib[n];
	}
	else{
		calculatedFib[n]=(calculateFib(n-1)+calculateFib(n-2));
		return calculatedFib[n];
	}
		

};
