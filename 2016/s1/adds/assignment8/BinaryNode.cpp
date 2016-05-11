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

//
void BinaryNode::setX(bool var){

	x=var;
};

//
void BinaryNode::setNext(BinaryNode* node){

	next=node;
};


//
bool BinaryNode::getX(){

	return x;
};

//
BinaryNode* BinaryNode::getNext(){

	return next;
};




