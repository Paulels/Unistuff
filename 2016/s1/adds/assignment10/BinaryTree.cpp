#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include <math.h>
#include "BinaryTree.h"
using namespace std;

//Just a basic constructor setting the variables to 0
BinaryTree::BinaryTree(){

	root=NULL;
}

//A deconstructor that destroys all the nodes in the linked list so ther is no memory leaks 
BinaryTree::~BinaryTree(){

	deleteNode(root);
}

//returns the position of the first bit
Node* BinaryTree::getRoot(){

	return root;
};

void BinaryTree::deleteNode(Node* node){

	Node* left=node->getLeft();
	Node* left=node->getLeft();
	delete node;
	deleteNode(left);
	deleteNode(right);
};

//This will add a node to the tail with a value of val. It has O(1) complexity
void BinaryTree::createTree(stringstream ss){

	
};

//
void BinaryTree::addNode(char c){

	
};

//
void BinaryTree::printList(){

	
};



