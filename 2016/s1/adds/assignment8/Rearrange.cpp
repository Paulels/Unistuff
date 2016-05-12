#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include "Rearrange.h"
using namespace std;

//A constuctor that calls on the parent classes constructor
Rearrange::Rearrange(int length):Individual(length){

}

//A constuctor that calls on the parent classes constructor
Rearrange::Rearrange(string s):Individual(s){

}

//A basic deconstructor
Rearrange::~Rearrange(){

}

//
void Rearrange::execute(int k){ 

	int j=k%listLength;					//checks if it needs to wrap it around
	if(j==0){							//if k equals the length of the list then mod returns 0 so need
		j=listLength;					//to reset it
	}
	if(j==1){							//checks to see if it can keeps the list the same 
		return;
	}
	else{
		int i=1;
		BinaryNode* start=firstBit;
		BinaryNode* ptr=firstBit;
		BinaryNode* last=ptr;
		while(i!=j){					//traverses the list to the kth node
			last=ptr;					//stoes the previous nodes location
			ptr=ptr->getNext();
			i++;
		}
		setFirstBit(ptr);				//changes the first bit to the kth nodes location
		last->setNext(NULL);			//sets the new last node
		int y=1;
		while(y!=0){					//finds where it needs to connect the 2 linked lists back
			if(ptr->getNext()==NULL){
				y=0;
			}
			else{
				ptr=ptr->getNext();
			}
		}
		ptr->setNext(start);			//reconnects them
		BinaryNode* p=firstBit;
		int a=0;
		while(p!=NULL){					//stores the updated linked list back into the string
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





