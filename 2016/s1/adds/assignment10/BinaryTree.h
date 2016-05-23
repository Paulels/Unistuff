#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
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
		void createTree(std::deque<char> ch);
		void printList();
};
#endif //BINARYTREE_H
