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
	int cCount=0;

	while(ss>>tempChar){					//stores the characters
		if(tempChar<48 || tempChar>57){
			cDeq.push_front(tempChar);
			cCount++;
		}		
		if(ss.peek()==' '){			//checks to see what the next character in the stream 
			ss.ignore();			//and ignores it if it is a space
		}
		else{
			cDeq.push_back(tempChar);
		}
	}

	//initialising classes
	BinaryTree BT;

	int i=0;

/*	for(i=0;i<count;i++){					//iterating fo the number of inputs
		string tStr=vec.at(i);
		if(tStr[0]=='A'){					//seeing what function needs to be called
			string subStr=tStr.substr(1);
			int k=atoi(subStr.c_str());		//converting to an integer
			container.addNode(k);
		}
		else if(tStr[0]=='R'){
			container.removeNode();
		}
	}*/

	//BT.printList();					//calling the function to print the results

}
