#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include "Palindrome.h"
using namespace std;

int main(){
	string phrase;
	getline(cin,phrase); //Takes in user input
	Palindrome Palindrome;
	Palindrome.setEnteredPhrase(phrase); //runs through all the behaviours so the string is abkle to be tested
	string str1=Palindrome.getEnteredPhrase();
	Palindrome.setAllLettersPhrase(Palindrome.removeNonLetters(str1));
	string str2=Palindrome.getAllLettersPhrase();
	Palindrome.setLowerCasePhrase(Palindrome.lowerCase(str2));
	string str3=Palindrome.getLowerCasePhrase();
	//prints out an answer based on the return value from isPalindrome
	if(Palindrome.isPalindrome(str3)==1){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}

};
