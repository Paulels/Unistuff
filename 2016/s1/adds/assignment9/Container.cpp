#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include "Container.h"
using namespace std;

//Creates a linked list with an inputted length and all values are 0
/*Container::Container(int length){

	listLength=length;
	string s(listLength,'0');
	binaryStr=s;
	BinaryNode* head = NULL;
	int i=listLength;
	for(i=listLength;i>0;i--) {
		BinaryNode* conductor=new BinaryNode;
		conductor->setX(false);
		conductor->setNext(head);
		head=conductor;
	}
	firstBit=head;
}*/

//creates a linked list given a string
Container::Container(string s){

	binaryStr=s;
	listLength=s.size();
	BinaryNode* head = NULL;
	int i=listLength;
	for(i=listLength;i>0;i--) {
		BinaryNode* conductor=new BinaryNode;
		if(s[i-1]=='1'){
			conductor->setX(true);
		}
		else{
			conductor->setX(false);
		}
		conductor->setNext(head);
		head=conductor;
	}
	firstBit=head;
}

//A deconstructor that destroys all the nodes in the linked list so ther is no memory leaks 
Container::~Container(){

	while(firstBit!=NULL){
		BinaryNode* old=firstBit;
		firstBit=firstBit->getNext();
		delete old;
	}
}

//returns the position of the first bit
Node* Container::getHead(){

	return head;
};

//sets the position of the first bit
void Container::setHead(Node* newHead){

	head=newHead;
};

//
int Container::getMiddle(){

	int max=0;
	int count=0;
	BinaryNode* ptr=firstBit;
	while(ptr!=NULL){				//traversing the whole list
		while(ptr->getX()==true){	//if it finds a 1 increase the count and move to the next position
			count++;
			ptr=ptr->getNext();
		}
		if(count>max){				//updates the max if necessary
			max=count;
		}
		count=0;					//resets the count when it finds a 0
		ptr=ptr->getNext();
	}
};

//returns the length of the list
int Container::getLength(){

	return listLength;
};

//
void Container::addNode(){


};

//
void Container::removeNode(){


};






