#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include "Individual.h"
using namespace std;

//Creates a linked list with an inputted length and all values are 0
Individual::Individual(int length){

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
}

//creates a linked list given a string
Individual::Individual(string s){

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
Individual::~Individual(){

	while(firstBit!=NULL){
		BinaryNode* old=firstBit;
		firstBit=firstBit->getNext();
		delete old;
	}
}

//returns the binary string
string Individual::getString(){

	return binaryStr;
};

//returns the position of the first bit
BinaryNode* Individual::getFirstBit(){

	return firstBit;
};

//sets the position of the first bit
void Individual::setFirstBit(BinaryNode* newHead){

	firstBit=newHead;
};

//returns the maximum number of ones in a ow in the linked list
int Individual::getMaxOnes(){

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
int Individual::getLength(){

	return listLength;
};





