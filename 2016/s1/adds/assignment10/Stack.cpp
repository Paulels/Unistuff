#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include "Stack.h"
using namespace std;

//Just a basic constructor
Stack::Stack(){

	treeNode=NULL;
	next=NULL;
}

//Just a basic deconstructor
Stack::~Stack(){

}

//sets the tree node pointer
void Stack::setTreeNode(Node* t){

	treeNode=t;
};

//sets the pointer to the next node
void Stack::setNext(Stack* n){

	next=n;
};

//returns the tree node pointer
Node* Stack::getTreeNode(){

	return treeNode;
};

//returns the pointer to the next node
Stack* Stack::getNext(){

	return next;
};


