#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#ifndef PALINDROME_H
#define PALINDROME_H

class Palindrome{

	public:

		Palindrome();

		bool isPalindrome(std::sting s);
		std::string reverseString(std::string str);		//must be recursive
		void setOiginalString(std::string os);
		std::string getOriginalString();
		std::string getReversedString();
		bool getIsPalin();

	private:

		std::string originalString;
		std::string reversedSting;  //do i need to store it
		bool isPalin;

};
#endif //PALINDROME_H
