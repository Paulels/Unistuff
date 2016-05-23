#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include <sstream>
#include <math.h>
#include "Node.h"
#include "BinaryTree.h"
using namespace std;

//

int main(){

	//getting users input as a string
	string s;
	getline(cin,s);
	deque<char> cDeq;

	//constructing a stringstream object
	stringstream ss(s);

	char tempChar;

	while(ss>>tempChar){			//count length maybe
		
	}

	//initialising classes
	BinaryTree BT;

	int i=0;

	BT.addNode(cDeq);

	BT.printList(BT.getRoot());					//calling the function to print the results

}
