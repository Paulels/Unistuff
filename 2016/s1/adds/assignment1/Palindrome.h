#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#ifndef PALINDROME_H
#define PALINDROME_H

class Palindrome{

	private:
		
		std::string enteredPhrase;
		std::string allLettersPhrase;
		std::string lowerCasePhrase;

	public:

		Palindrome();

		void setEnteredPhrase(std::string es);
		void setAllLettersPhrase(std::string ls);
		void setLowerCasePhrase(std::string lcs);
		std::string getEnteredPhrase();
		std::string getAllLettersPhrase();
		std::string getLowerCasePhrase();
		
		std::string removeNonLetters(std::string s1);
		std::string lowerCase(std::string s2);
		int isPalindrome(std::string s3);

};
#endif
