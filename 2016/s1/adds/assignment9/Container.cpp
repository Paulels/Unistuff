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

//Just a basic constructor setting the variables to 0
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

//This will add a node to the tail with a value of val. It has O(1) complexity
void Container::addNode(int val){

	if(listLength==0){			//if the list is empty then create a list 
		tail=new Node;
		tail->setNext(NULL);	//set a flag for the end of the list
		tail->setX(val);
		head=tail;				//since the list only has 1 element head equals tail
		listLength++;
		middle=head;			//middle could be set to either head or tail
	}
	else{						//Otherwise create a new node at the tail
		Node* ptr=tail;
		tail=new Node;
		ptr->setNext(tail);
		tail->setNext(NULL);
		tail->setX(val);
		listLength++;
		setMiddle();
	}
};

//This will remove a node from the head. It has O(1) complexity
void Container::removeNode(){

	Node* tmp;
	if(listLength==0){			//if the list is empty do nothing
	}
	else if(listLength==1){		//if the list has 1 node then set the list to be empty
		tmp=head;
		head=NULL;
		tail=NULL;
		delete tmp;				//deleting the first node to avoid memory leaks
		middle=0;
		listLength--;
	}
	else{						//otherwise delete the node at the head
		tmp=head;
		head=head->getNext();
		delete tmp;
		listLength--;
		setMiddle();			//reset the middle if necessary
	}
};

//
void Container::printList(){

	if(listLength==0){					//checking if the list is empty
		cout<<"empty ";
		printMiddle();
	}
	else{								//otherwise traverse the list and print the values as required
		Node* pt=head;
		while(pt!=NULL){
			if(pt==tail){				//dont print a -> after the last value
				cout<<pt->getX()<<" ";
			}
			else{
				cout<<pt->getX()<<"->";
			}
		pt=pt->getNext();
		}
		printMiddle();					//print the middle value(s)
	}
};

//will set the middle of the list. Has O(1) complexity
void Container::setMiddle(){

	if(listLength%2==1){				//if the list length goes fom even to odd then move middle 
		middle=middle->getNext();		//along one
	}
	else{								//else keep it the same
	}
};

//will print the middle of the list. Has O(1) complexity
void Container::printMiddle(){

	if(listLength==0){					//if the list has no length middle is 0
		cout<<"0"<<endl;
	}
	else if(listLength%2==0){ 			//if the list length is even there are 2 middle values
		cout<<middle->getX()<<" "<<(middle->getNext())->getX()<<endl;
	}
	else{								//else just pint the middle value
		cout<<middle->getX()<<endl;
	}
};


