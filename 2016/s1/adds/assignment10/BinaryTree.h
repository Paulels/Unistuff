#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include "Node.h"

//

class BinaryTree{

	private:

		Node* root;

	public:

		Container();
		~Container();

		Node* getRoot();
		void addNode(char ch);
		void printList();
};
#endif //INDIVIDUAL_H
