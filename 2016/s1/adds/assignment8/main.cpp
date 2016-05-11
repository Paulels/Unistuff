#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include <sstream>
#include "BinaryNode.h"
#include "Individual.h"
#include "BitFlip.h"
#include "Rearrange.h"
using namespace std;

//

int main(){

	//getting users input as a string
	string s;
	vector<int> vec;
	getline(cin,s);

	stringstream ss(s); 			//constructing a stringstream object

	string str;
	int j;

	while(ss>>j){					//stores the numbers as integers in j
		vec.push_back(j);		
		if(ss.peek()==' '){			//checks to see what the next character in the stream 
			ss.ignore();			//and ignores it if it is a space
		}
	}


	//initialising classes
	


}
