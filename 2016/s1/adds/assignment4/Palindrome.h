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

//class that checks if a given sting is a palindrome and reverses it

class Palindrome{

	public:

		Palindrome(std::string origS);

		bool isPalindrome(std::string s);
		void reverseString(std::string str);
		void setOriginalString(std::string os);
		std::string getOriginalString();
		bool getIsPalin();

	private:

		std::string originalString;
		bool isPalin;

};
#endif //PALINDROME_H
