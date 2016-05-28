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

	deleteNode(root->getTreeNode());
}

//returns the position of the first bit
Node* BinaryTree::getRoot(){

	return root->getTreeNode();
};

//
void BinaryTree::setOperators(int n){

	operators=n;
};

//
void BinaryTree::setCount(int c){

	count=c;
	checker=c;
};

//
int BinaryTree::getOperators(){

	return operators;
};

//
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

//
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

//
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

//This will add a node to the tail with a value of val. It has O(1) complexity
void BinaryTree::createTree(string s){

	int a=s.length()-1;
	while(a>=0){
		addNode(s[a]);
		a=a-2;
	}
};


//
void BinaryTree::printTree(){

	int k=0;
	for(k=0;k<operators-1;k++){
		cout<<"(";
	}
	infix(getRoot());
};

//
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





