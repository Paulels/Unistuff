#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "Palindrome.h"
using namespace std;

Palindrome::Palindrome(string origS){

	originalString=origS; //sets the original string

}

bool Palindrome::isPalindrome(string s){

	int l=0;
	l=s.length()-1;
	if(s.length()<=1){ //base case
		isPalin=true;
		return true;
	}
	//checks for equality and then passes in a string minus the first and last character to check recursively
	else if(s[0]==s[l]){ 
		string st=s.substr(1,l-1);
		return isPalindrome(st);
	}
	else{
		isPalin=false;
		return false;
	}
};

void Palindrome::reverseString(string str){

	int l=0;
	l=str.length();
	if(str.length()<=1){ //base case
		cout<<str;
	}
	//pints out the last character and passes in a smaller sting minus the last character recursively
	else{
		cout<<str[l-1];
		string Str=str.substr(0,l-1);
		reverseString(Str);
	}
};

void Palindrome::setOriginalString(string os){

	originalString=os;

};

string Palindrome::getOriginalString(){

	return originalString;

};

bool Palindrome::getIsPalin(){

	return isPalin;

};
