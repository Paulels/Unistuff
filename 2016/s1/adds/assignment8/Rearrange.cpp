#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include "Rearrange.h"
using namespace std;

//
Rearange::Rearange(int length):Individual(lenght){

}

//
Rearrange::Rearrange(string s):Individual(s){

}

//
Rearange::~Rearange():~Individual(){

}

//
void Rearange::execute(int k){

	int j=k%listLength;
	int i=1;
	BinaryNode* start=firstBit;
	BinaryNode* ptr=firstBit;
	while(i!=j){
		while(i!=j-1){
			ptr=ptr->getNext();
			i++;
		}
		BinaryNode* p=ptr->getNext();
		ptr->setNext(NULL){
	}
	setFirstBit(p);
	while(p!=NULL){
		p=p->getNext();
	}
	p->setNext(start);
};





