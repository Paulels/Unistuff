#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef NODE_H
#define NODE_H

//This will create the node that wil be put in the tree
//it has the character and left and right pointers to its leaves
//it also has the relevant setter and getter functions

class Node{

	private:

		char c;
		Node* left;
		Node* right;

	public:

		Node();
		~Node();

		void setC(char ch);
		void setLeft(Node* l);
		void setRight(Node* r);
		char getC();
		Node* getLeft();
		Node* getRight();

};
#endif //NODE_H
