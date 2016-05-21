#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <math.h>
#include "Node.h"
#include "Container.h"
using namespace std;

//This main function will take in a single line of input and will add and remove 
//elements in a linked list based on what the user inputs and will then print out the result

int main(){

	//getting users input as a string
	string s;
	getline(cin,s);
	vector<string> vec;

	//constructing a stringstream object
	stringstream ss(s);

	string tempStr;
	int count=0;

	while(ss>>tempStr){					//stores the numbers as integers in j
		vec.push_back(tempStr);		
		if(ss.peek()==' '){			//checks to see what the next character in the stream 
			ss.ignore();			//and ignores it if it is a space
		}
		count++;
	}

	//initialising classes
	Container container;

	int i=0;

	for(i=0;i<count;i++){					//iterating fo the number of inputs
		string tStr=vec.at(i);
		if(tStr[0]=='A'){					//seeing what function needs to be called
			string subStr=tStr.substr(1);
			int k=atoi(subStr.c_str());		//converting to an integer
			container.addNode(k);
		}
		else if(tStr[0]=='R'){
			container.removeNode();
		}
	}

	container.printList();					//calling the function to print the results

}
