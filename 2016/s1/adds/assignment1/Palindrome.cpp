#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
using namespace std;

class Palindrome{

	private:
		
		string enteredPhrase;
		string allLettersPhrase;
		string lowerCasePhrase;

	public:

		Palindrome();

		void setEnteredPhrase(string es);
		void setAllLettersPhrase(string ls);
		void setLowerCasePhrase(string lcs);
		
		string removeNonLetters(string s1);
		string lowerCase(string s2);
		int isPalindrome(string s3);

};

Palindrome::Palindrome(){

};

void Palindrome::setEnteredPhrase(string es){
	enteredPhrase=es;
};

void Palindrome::setAllLettersPhrase(string ls){
	allLettersPhrase=ls;
};

void Palindrome::setLowerCasePhrase(string lcs){
	lowerCasePhrase=lcs;
};
		
string Palindrome::removeNonLetters(string s1){
	string newS1;
	int i=0;
	int j=0;
	for(i=0;i<strlen(s1);i++){ //change to while loop and end at null
		if((int)s1[i]>64 && (int)s1[i]<91){
			newS1[j]=s1[i];
			j++;
		}
		else if((int)s1[i]>96 && (int)s1[i]<123){
			newS1[j]=s1[i];
			j++;
		}
		else{
		}
	}
	newS1[j]='\0';
	return newS1;
};

string Palindrome::lowerCase(string s2){
	string newS2=tolower(s2);
	return newS2;
};

int Palindrome::isPalindrome(string s3){
	int x=strlen(s3)-1;
	int y=x;
	int z=0;
	if(x%2==0){
		for(int i=0;i<(x/2);i++){
			if(s3[i]==s3[y]){
				z++;
				y--;
			}
			else{
				break;
			}
		}
		if(z==x/2){
			return 1;
		else{
			return 0;
		}
	}
	else{
		for(int i=0;i<((x/2)+1);i++){
			if(s3[i]==s3[y]){
				z++;
				y--;
			}
			else{
				break;
			}
		}
		if(z==((x/2)+1)){
			return 1;
		else{
			return 0;
		}
	}	
};










