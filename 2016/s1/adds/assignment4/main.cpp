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

	string sStr;  //what do you mean by efficient fibonacci
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
	int i=atoi(iStr.c_str());

	if(i==0){
		cout<<"ERROR"<<endl;
	}
	else{
		cout<<Fibonacci.calcFib(i)<<endl;
	}

}
