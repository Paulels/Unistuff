#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include <math.h>
#include "Container.h"
using namespace std;

//
Container::Container(){

	listLength=0;
}

//A deconstructor that destroys all the nodes in the linked list so ther is no memory leaks 
Container::~Container(){

	while(head!=NULL){
		Node* old=head;
		head=head->getNext();
		delete old;
	}
}

//returns the position of the first bit
Node* Container::getHead(){

	return head;
};

//returns the length of the list
int Container::getLength(){

	return listLength;
};

//
void Container::addNode(int val){

	if(listLength==0){
		head=new Node;
		tail=head;
		tail->setNext(NULL);
		tail->setX(val);
		listLength++;
		middle=head;
	}
	else{
		ptr=tail;
		tail=new Node;
		ptr->setNext(tail);
		tail->setNext(NULL);
		tail->setX(val);
		listLength++;
		if(listLength%2==1){
			middle=middle->getNext();
		}
		else{
		}
	}
};

//
void Container::removeNode(){

	if(listLength==0){
	}
	else if(listLength==1)
		
	}
	else{
		
	}
};

void printList(){

	//print list

	//check if one middle or 2 

	//print out relevant info
};




