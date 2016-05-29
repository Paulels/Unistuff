#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef STACK_H
#define STACK_H
#include "Node.h"

//This is to create the stack so that the nodes are in the right order to go into the tree
//it has a pointer to the node and int has a pointer to the next node in the stack
//it has the relevant setter and getter functions

class Stack{

	private:

		Node* treeNode;
		Stack* next;

	public:

		Stack();
		~Stack();

		void setTreeNode(Node* t);
		void setNext(Stack* n);
		Node* getTreeNode();
		Stack* getNext();

};
#endif //STACK_H
