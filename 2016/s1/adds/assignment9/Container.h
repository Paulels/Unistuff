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

//

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
		void addNode(int val);    //??
		void removeNode();
		void printList();
};
#endif //INDIVIDUAL_H
