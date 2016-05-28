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

//

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
