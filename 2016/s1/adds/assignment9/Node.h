#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef NODE_H
#define NODE_H

//This class is used to create the linked list
//very simple class only contains a variable and a pointer to the next node

class Node{

	private:

		int x;
		Node* next;

	public:

		Node();
		~Node();

		void setX(int var);
		void setNext(Node* node);
		bool getX();
		Node* getNext();

};
#endif //NODE_H
