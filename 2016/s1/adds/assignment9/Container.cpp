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
	head=NULL;
	tail=NULL;
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
		tail=new Node;
		tail->setNext(NULL);
		tail->setX(val);
		head=tail;
		listLength++;
		middle=head;
	}
	else{
		Node* ptr=tail;
		tail=new Node;
		ptr->setNext(tail);
		tail->setNext(NULL);
		tail->setX(val);
		listLength++;
		setMiddle();
	}
};

//
void Container::removeNode(){

	Node* tmp;
	if(listLength==0){
	}
	else if(listLength==1){
		tmp=head;
		head=NULL;
		tail=NULL;
		delete tmp;
		middle=0;
		listLength--;
	}
	else{
		tmp=head;
		head=head->getNext();
		delete tmp;
		listLength--;
	}
};

void Container::printList(){

	if(listLength==0){
		cout<<"empty ";
		printMiddle();
	}
	else{
		Node* pt=head;
		while(pt!=NULL){
			if(pt==tail){
				cout<<pt->getX()<<" ";
			}
			else{
				cout<<pt->getX()<<"->";
			}
		pt=pt->getNext();
		}
		printMiddle();
	}
};

//
void Container::setMiddle(){

	if(listLength%2==1){
		middle=middle->getNext();
	}
	else{
	}
};

//
void Container::printMiddle(){

	if(listLength==0){
		cout<<"0"<<endl;
	}
	else if(listLength%2==0){
		cout<<middle->getX()<<" "<<(middle->getNext())->getX()<<endl;
	}
	else{
		cout<<middle->getX()<<endl;
	}
};


