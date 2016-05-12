#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include "Individual.h"
using namespace std;

//
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

//
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

//
Individual::~Individual(){

	while(firstBit!=NULL){
		BinaryNode* old=firstBit;
		firstBit=firstBit->getNext();
		delete old;
	}
}

//
string Individual::getString(){

	return binaryStr;
};

//
BinaryNode* Individual::getFirstBit(){

	return firstBit;
};

//
void Individual::setFirstBit(BinaryNode* newHead){

	firstBit=newHead;
};

//
int Individual::getMaxOnes(){

	int max=0;
	int count=0;
	BinaryNode* ptr=firstBit;
	while(ptr!=NULL){
		while(ptr->getX()==true){
			count++;
			ptr=ptr->getNext();
		}
		if(count>max){
			max=count;
		}
		count=0;
		ptr=ptr->getNext();
	}
};

//
int Individual::getLength(){

	return listLength;
};





