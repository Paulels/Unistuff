#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include "Palindrome.h"
using namespace std;

Palindrome::Palindrome(){

}

void Palindrome::setEnteredPhrase(string es){
	enteredPhrase=es;
};

void Palindrome::setAllLettersPhrase(string ls){
	allLettersPhrase=ls;
};

void Palindrome::setLowerCasePhrase(string lcs){
	lowerCasePhrase=lcs;
};

string Palindrome::getEnteredPhrase(){
	return enteredPhrase;
};
		
string Palindrome::getAllLettersPhrase(){
	return allLettersPhrase;
};
		
string Palindrome::getLowerCasePhrase(){
	return lowerCasePhrase;
};
		
string Palindrome::removeNonLetters(string s1){
	string newS1;
	int i=0;
	int j=0;
	while(s1[i]!='\0'){
		if((int)s1[i]>64 && (int)s1[i]<91){
			newS1[j]=s1[i];
			j++;
			i++;
		}
		else if((int)s1[i]>96 && (int)s1[i]<123){
			newS1[j]=s1[i];
			j++;
			i++;
		}
		else{
			i++;
		}
	}
	newS1[j]='\0';
	return newS1;
};

string Palindrome::lowerCase(string s2){
	int a=0;
	while(s2[a]!='\0'){
		if(s2[a]>64 && s2[a]<91){
			s2[a]=(s2[a]+32);
		}
		else{
		}
		a++;
	}
	return s2;
};

int Palindrome::isPalindrome(string s3){
	int w=0;
	while(s3[w]!='\0'){
		w++;
	}
	int x=w-1;
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
		}
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
		}
		else{
			return 0;
		}
	}	
};










