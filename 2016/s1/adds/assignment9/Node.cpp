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

}

//Just a basic deconstructor
Node::~Node(){

}

//Sets the variable x
void Node::setX(int var){

	x=var;
};

//sets the pointer to the next node
void Node::setNext(Node* node){

	next=node;
};


//returns the variable x
bool Node::getX(){

	return x;
};

//returns the pointer to the next node
Node* Node::getNext(){

	return next;
};




