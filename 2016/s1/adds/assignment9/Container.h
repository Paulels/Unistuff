#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include "Node.h"

//This class will hold and be able to control and manipulate the linked list
//it will hold pointers to the start middle and end and will hold the length
//it will have functions to alter the linked list as the user requires
//It also has functions to print out results
//the functions addNode, removeNode, setMiddle and printMiddle all have O(1) complexity

class Container{

	private:

		int listLength;	
		Node* head;
		Node* tail;
		Node* middle;

	public:

		Container();
		~Container();

		Node* getHead();
		void addNode(int val);   
		void removeNode();
		void printList();
		void setMiddle();
		void printMiddle();
		int getLength();
};
#endif //INDIVIDUAL_H
