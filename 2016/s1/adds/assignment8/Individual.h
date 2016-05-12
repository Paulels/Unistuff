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

//

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
