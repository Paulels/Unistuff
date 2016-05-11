#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef BINARYNODE_H
#define BINARYNODE_H

//

class BinaryNode{

	private:

		bool x;
		BinaryNode* next;

	public:

		BinaryNode();
		~BinaryNode();

		void setX(bool var);
		void setNext(BinaryNode* node);
		bool getX();
		BinaryNode* getNext();

};
#endif //BINARYNODE_H
