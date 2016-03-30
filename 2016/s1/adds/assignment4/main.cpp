#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "Palindrome.h"
#include "Fibonacci.h"
#include "EfficientFibonacci.h"
using namespace std;

int main(){

	//getting inputs for the 2 parts
	string sStr; 
	string iStr;
	cin>>sStr; 
	cin>>iStr;

	//Runs the palindrome part and prints out the reversed string and whether it is a palindrome
	Palindrome Palindrome(sStr);
	Palindrome.reverseString(sStr);
	cout<<" ";
	bool x=Palindrome.isPalindrome(sStr);
	if(x==true){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	cout<<" ";

	//runs the fibonacci part of the program and prints out the fibonacci number or a relevent error
	Fibonacci Fibonacci;
	EfficientFibonacci EF;
	int i=atoi(iStr.c_str());
	int z=0;

	//checks if the sting is all digits
	for(z=0;z<iStr.size();z++){
		if(isdigit(iStr[z])){
		}
		else{
			i=0;
		}
	}

	//prints ou relevant things based on user input
	if(iStr=="0"){
		cout<<"0"<<endl;
	}
	else if(i==0){
		cout<<"ERROR"<<endl;
	}
	else{
		cout<<EF.calculateFib(i)<<endl;
	}

}
