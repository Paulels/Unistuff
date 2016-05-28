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

//sets the pointer to the left node
void Stack::setTreeNode(Node* t){

	treeNode=t;
};

//sets the pointer to the right node
void Stack::setNext(Stack* n){

	next=n;
};

//returns the pointer to the left node
Node* Stack::getTreeNode(){

	return treeNode;
};

//returns the pointer to the right node
Stack* Stack::getNext(){

	return next;
};


