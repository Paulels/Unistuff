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

	int j=k%listLength;
	if(j==0){
		j=listLength;
	}
	if(j==1){
		return;
	}
	else{
		int i=1;
		BinaryNode* start=firstBit;
		BinaryNode* ptr=firstBit;
		BinaryNode* last=ptr;
		while(i!=j){
			last=ptr;
			ptr=ptr->getNext();
			i++;
		}
		setFirstBit(ptr);
		last->setNext(NULL);
		int y=1;
		while(y!=0){
			if(ptr->getNext()==NULL){
				y=0;
			}
			else{
				ptr=ptr->getNext();
			}
		}
		ptr->setNext(start);
		BinaryNode* p=firstBit;
		int a=0;
		while(p!=NULL){
			if(p->getX()==true){
				binaryStr[a]='1';
			}
			else{
				binaryStr[a]='0';
			}
			a++;
			p=p->getNext();
		}
	}
};





