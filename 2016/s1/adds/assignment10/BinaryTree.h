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

//

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
