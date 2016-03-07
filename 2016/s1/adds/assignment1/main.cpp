#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string phrase;
	cout<<"Please enter a string to test if a palindrome: ";
	getline(cin,phrase);
	Palindrome palindrome();
	palindrome.setEnteredPhrase(phrase);
	palindrome.setAllLettersPhrase(palindrome.removeNonLetters(enteredPhrase));
	palindrome.setLowerCasePhrase(palindrome.lowerCase(allLettersPhrase));
	if(palindrome.isPalindrome(lowerCasePhrase)==1){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}

};
