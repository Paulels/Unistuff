#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef NODE_H
#define NODE_H

//

class Node{

	private:

		int x;
		Node* next;

	public:

		Node();
		~Node();

		void setX(int var);
		void setNext(Node* node);
		int getX();
		Node* getNext();

};
#endif //NODE_H
