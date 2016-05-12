#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include <math.h>
#include "BitFlip.h"
using namespace std;

//
BitFlip::BitFlip(int length):Individual(length){

}

//
BitFlip::BitFlip(string s):Individual(s){

}

//
BitFlip::~BitFlip(){

}

//
void BitFlip::execute(int k){ 

	int j=k%listLength;
	if(j==0){
		j=listLength;
	}
	int i=1;
	BinaryNode* ptr=firstBit;
	while(i!=j){
		ptr=ptr->getNext();
		i++;
	}
	bool var;
	var=ptr->getX();
	if(var==true){
		ptr->setX(false);
	}
	else{
		ptr->setX(true);
	}
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





