#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include "BinaryNode.h"
using namespace std;

//Just a basic constructor
BinaryNode::BinaryNode(){

}

//Just a basic deconstructor
BinaryNode::~BinaryNode(){

}

//Sets the variable x
void BinaryNode::setX(bool var){

	x=var;
};

//sets the pointer to the next node
void BinaryNode::setNext(BinaryNode* node){

	next=node;
};


//returns the variable x
bool BinaryNode::getX(){

	return x;
};

//returns the pointer to the next node
BinaryNode* BinaryNode::getNext(){

	return next;
};




