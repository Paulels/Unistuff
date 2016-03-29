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

	string sStr; 
	string iStr;
	cin>>sStr;
	cin>>iStr;

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

	Fibonacci Fibonacci;
	EfficientFibonacci EF;
	int i=atoi(iStr.c_str());
	int z=0;

	for(z=0;z<iStr.size();z++){
		if(isdigit(iStr[z])){
		}
		else{
			i=0;
		}
	}

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
