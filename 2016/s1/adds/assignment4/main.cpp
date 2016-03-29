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

	string string;  //How do i take the input and what do you mean by efficient fibonacci
	

	Palindrome Palindrome("");
	Palindrome.reverseString("");
	cout<<" ";
	bool x=Palindrome.isPalindrome("");
	if(x==true){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	cout<<" ";
	
	Fibonacci Fibonacci;
	cout<<Fibonacci.calcFib(20)<<endl;


}
