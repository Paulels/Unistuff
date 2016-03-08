#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include "Palindrome.h"
using namespace std;

int main(){
	string phrase;
	//cout<<"Please enter a string to test if a palindrome: ";
	getline(cin,phrase);
	Palindrome Palindrome;
	Palindrome.setEnteredPhrase(phrase);
	string str1=Palindrome.getEnteredPhrase();
	Palindrome.setAllLettersPhrase(Palindrome.removeNonLetters(str1));
	string str2=Palindrome.getAllLettersPhrase();
	Palindrome.setLowerCasePhrase(Palindrome.lowerCase(str2));
	string str3=Palindrome.getLowerCasePhrase();
	if(Palindrome.isPalindrome(str3)==1){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}

};
