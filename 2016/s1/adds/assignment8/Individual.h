#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include "BinaryNode.h"

//This is the base class
//It is virtual because it has a virtual function in it
//It defines all the functions for the class and sub classes to be able to use
//it will hold the linked list

class Individual{

	private:



	protected:

		std::string binaryStr;	
		int listLength;	
		BinaryNode* firstBit;

	public:

		Individual(int length);
		Individual(std::string s);
		~Individual();

		std::string getString();
		BinaryNode* getFirstBit();
		void setFirstBit(BinaryNode* newHead);
		int getMaxOnes();
		int getLength();
		virtual void execute(int k)=0;

};
#endif //INDIVIDUAL_H
