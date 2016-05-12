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
Rearrange::Rearrange(int length):Individual(length){

}

//
Rearrange::Rearrange(string s):Individual(s){

}

//
Rearrange::~Rearrange(){

}

//
void Rearrange::execute(int k){ 

	int j=k%listLength-1;
	int i=0;
	BinaryNode* start=firstBit;
	BinaryNode* ptr=firstBit;
	BinaryNode* p;
	while(i!=j-1){
		ptr=ptr->getNext();
		i++;
	}
	setFirstBit(ptr->getNext());
	p=firstBit;
	ptr->setNext(NULL);
	int y=1;
	while(y!=0){
		if(p->getNext()==NULL){
			y=0;
		}
		else{
			p=p->getNext();
		}
	}
	p->setNext(start);
	BinaryNode* pt=firstBit;
	int a=0;
	while(pt!=NULL){
		if(pt->getX()==true){
			binaryStr[a]='1';
		}
		else{
			binaryStr[a]='0';
		}
		a++;
		pt=pt->getNext();
	}
};





