#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#ifndef PALINDROME_H
#define PALINDROME_H

// A class that implements a to check if a phrase is a palindrome

class Palindrome{

	private:
		
		std::string enteredPhrase;
		std::string allLettersPhrase;
		std::string lowerCasePhrase;

	public:
		
		// Constructs a palindrome
		Palindrome();

		void setEnteredPhrase(std::string es);
		void setAllLettersPhrase(std::string ls);
		void setLowerCasePhrase(std::string lcs);
		std::string getEnteredPhrase();
		std::string getAllLettersPhrase();
		std::string getLowerCasePhrase();
		
		//Behaviours that check a given string to see if it is a palindrome
		std::string removeNonLetters(std::string s1);
		std::string lowerCase(std::string s2);
		int isPalindrome(std::string s3);

};
#endif  //PALINDROME_H
