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



	protected:

		int listLength;	
		Node* head;

	public:

		//Container(int length);
		Container(std::string s);
		~Container();

		Node* getHead();
		void setHead(Node* newHead);
		int getMiddle();
		int getLength();
		void addNode();    //??
		void removeNode();
};
#endif //INDIVIDUAL_H
