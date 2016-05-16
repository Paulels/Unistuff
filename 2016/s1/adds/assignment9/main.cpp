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

//

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

	for(i=0;i<count;i++){
		string tStr=vec.at(i);
		if(tStr[0]=='A'){
			string subStr=tStr.substr(1);
			int k=atoi(subStr.c_str());
			container.addNode(k);
		}
		else if(tStr[0]=='R'){
			container.removeNode();
		}
	}

	container.printList();

}
