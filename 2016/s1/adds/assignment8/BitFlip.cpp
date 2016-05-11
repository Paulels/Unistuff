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
BitFlip::~BitFlip():~Individual(){

}

//
void BitFlip::execute(int k){

	int j=k%listLength;
	int i=1;
	BinaryNode* ptr=firstBit;
	while(i!=j){
		ptr=ptr->getNext();
		i++;
	}
	bool var;
	var=ptr->getX();
	if(var==true){
		var=false;
	else{
		var=true;
	}
	ptr->setX(var);
};





