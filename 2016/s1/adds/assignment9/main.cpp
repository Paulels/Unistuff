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

//This program will take in 2 binary strings and manipulate them based on the 2 integers it is given

int main(){

	//getting users input as a string
	string s;
	getline(cin,s);

	//constructing a stringstream object
	stringstream ss(s);

	//initialising the vaiables to hold the input
	string binarystr1;
	string binarystr2;
	int k1;
	int k2;

	//extracting from the stringstream
	ss>>binarystr1>>k1>>binarystr2>>k2;

	//initialising classes
	BitFlip bf(binarystr1);
	Rearrange r(binarystr2);

	//calling the required functions to alter the binary strings
	bf.execute(k1);
	r.execute(k2);

	//printing out the results
	cout<<bf.getString()<<" "<<r.getString()<<endl;

}
