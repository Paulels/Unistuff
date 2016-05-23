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
#include "Node.h"

//

class BinaryTree{

	private:

		Node* root;

	public:

		BinaryTree();
		~BinaryTree();

		Node* getRoot();
		void deleteNode(Node* node);
		void createTree(std::stringstream ss);
		void addNode(char c);
		void printList(Node* node);
};
#endif //BINARYTREE_H
