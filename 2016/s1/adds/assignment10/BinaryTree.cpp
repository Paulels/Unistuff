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

//Just a basic constructor setting the root to NULL
BinaryTree::BinaryTree(){

	root=NULL;
}

//A deconstructor that destroys all the nodes in the tree so that there are no memory leaks 
BinaryTree::~BinaryTree(){

	deleteNode(root->getTreeNode());
}

//returns the position of the root
Node* BinaryTree::getRoot(){

	return root->getTreeNode();
};

//sets the varible operators with the number of operators
void BinaryTree::setOperators(int n){

	operators=n;
};

//Sets varibles with the number of numbers
void BinaryTree::setCount(int c){

	count=c;
	checker=c;
};

//returns the number of operators
int BinaryTree::getOperators(){

	return operators;
};

//function to push a node onto the stack
void BinaryTree::push(Node* np){

	if(root==NULL){
		root=new Stack();
		root->setTreeNode(np);
	}
	else{
		Stack* sptr=new Stack();
		sptr->setTreeNode(np);
		sptr->setNext(root);
		root=sptr;
	}
};

//function to pop a node off of the stack
Node* BinaryTree::pop(){

	if(root==NULL){
		cout<<"Error"<<endl;
	}
	else{
		Node* nptr=root->getTreeNode();
		root=root->getNext();
		return nptr;
	}
};

//function to add the node to the tree
void BinaryTree::addNode(char ch){

	if(ch>='0' && ch<='9'){
		Node* nptr=new Node();
		nptr->setC(ch);
		push(nptr);
	}
	else if(ch=='*' || ch=='/' || ch=='+' || ch=='-'){
		Node* nptr=new Node();
		nptr->setC(ch);
		nptr->setLeft(pop());
		nptr->setRight(pop());
		push(nptr);
	}
	else{
		cout<<"Error"<<endl;
	}
};

//function to delete all of the nodes
void BinaryTree::deleteNode(Node* node){

	if(node==NULL){
		return;
	}
	else{
		Node* left=node->getLeft();
		Node* right=node->getRight();
		delete node;
		deleteNode(left);
		deleteNode(right);
	}
};

//this will create the tee by adding nodes to the ight places
void BinaryTree::createTree(string s){

	int a=s.length()-1;
	while(a>=0){
		addNode(s[a]);
		a=a-2;
	}
};


//This will print out the tree
void BinaryTree::printTree(){

	int k=0;
	for(k=0;k<operators-1;k++){
		cout<<"(";
	}
	infix(getRoot());
};

//This will print out the tree with infix notation
void BinaryTree::infix(Node* p){

	if(p!=NULL){
		if(p->getC()=='*' || p->getC()=='/' || p->getC()=='+' || p->getC()=='-'){
		infix(p->getLeft());
		cout<<" "<<p->getC()<<" ";
		infix(p->getRight());
		}
		else{
			if(checker==count){
				infix(p->getLeft());
				cout<<p->getC();
				infix(p->getRight());
				checker--;
			}
			else if(checker==1){
				infix(p->getLeft());
				cout<<p->getC()<<endl;
				infix(p->getRight());
			}
			else{
				infix(p->getLeft());
				cout<<p->getC()<<")";
				infix(p->getRight());
				checker--;
		}
		}
	}

};





