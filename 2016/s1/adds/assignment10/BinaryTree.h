#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <sstream>
#include <deque>
#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "Stack.h"

//A class to create a binary tree given a prefix expression
//has variables to keep tack of the root, number of operators and the number of operands
//has functions to set and get these along with functions create, detroy and print out the tree
 
class BinaryTree{

	private:

		Stack* root;
		int operators;
		int count;
		int checker;

	public:

		BinaryTree();
		~BinaryTree();

		Node* getRoot();
		int getOperators();
		void setOperators(int n);
		void setCount(int c);
		void deleteNode(Node* node);
		void push(Node* np);
		Node* pop();
		void createTree(std::string s);
		void addNode(char ch);
		void printTree();
		void infix(Node* p);
};
#endif //BINARYTREE_H
