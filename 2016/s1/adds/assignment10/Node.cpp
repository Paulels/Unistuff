#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include "Node.h"
using namespace std;

//Just a basic constructor
Node::Node(){

	right=NULL;
	left=NULL;
}

//Just a basic deconstructor
Node::~Node(){

}

//Sets the variable c
void Node::setC(char ch){

	c=ch;
};

//sets the pointer to the left node
void Node::setLeft(Node* l){

	left=l;
};

//sets the pointer to the right node
void Node::setRight(Node* r){

	right=r;
};

//returns the variable c
char Node::getC(){

	return c;
};

//returns the pointer to the left node
Node* Node::getLeft(){

	return left;
};

//returns the pointer to the right node
Node* Node::getRight(){

	return right;
};



