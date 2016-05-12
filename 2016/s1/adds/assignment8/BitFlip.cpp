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

//A constuctor that calls on the parent classes constructor
BitFlip::BitFlip(int length):Individual(length){

}

//A constuctor that calls on the parent classes constructor
BitFlip::BitFlip(string s):Individual(s){

}

//A basic deconstructor
BitFlip::~BitFlip(){

}

//flips the kth digit in the binary string
void BitFlip::execute(int k){ 

	int j=k%listLength;			//checks if it needs to wrap it around
	if(j==0){					//if k equals the length of the list then mod returns 0 so need to
		j=listLength;			//reset it
	}
	int i=1;
	BinaryNode* ptr=firstBit;
	while(i!=j){				//traverses to the kth node
		ptr=ptr->getNext();
		i++;
	}
	bool var;
	var=ptr->getX();
	if(var==true){				//flips the variable of the kth node
		ptr->setX(false);
	}
	else{
		ptr->setX(true);
	}
	BinaryNode* pt=firstBit;
	int a=0;
	while(pt!=NULL){			//stores the updated linked list back into the string
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





