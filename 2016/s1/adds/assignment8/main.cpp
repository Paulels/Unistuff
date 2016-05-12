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
	getline(cin,s);

	stringstream ss(s); 			//constructing a stringstream object

	string binarystr1;
	string binarystr2;
	int k1;
	int k2;

	ss>>binarystr1>>k1>>binarystr2>>k2;

	//initialising classes
	BitFlip bf(binarystr1);
	Rearrange r(binarystr2);

	bf.execute(k1);
	r.execute(k2);

	cout<<bf.getString()<<" "<<r.getString()<<endl;

}
