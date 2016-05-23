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

/*	while(head!=NULL){					//?????????????????????????????????
		Node* old=head;
		head=head->getNext();
		delete old;
	}*/
}

//returns the position of the first bit
Node* BinaryTree::getRoot(){

	return root;
};

//This will add a node to the tail with a value of val. It has O(1) complexity
void BinaryTree::createTree(deque<char> ch){


};

//
void BinaryTree::printList(){


};



