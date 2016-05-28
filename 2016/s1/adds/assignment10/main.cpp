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
#include "Stack.h"
#include "BinaryTree.h"
using namespace std;

//

int main(){

	//getting users input as a string
	string s;
	getline(cin,s);
	deque<char> cDeq;
	deque<char> iDeq;

	//constructing a stringstream object
	stringstream ss1(s);
	int i=0;
	int k=0;

	char tempChar;

	while(ss1>>tempChar){
		if(tempChar>='0' && tempChar<='9'){
			iDeq.push_back(tempChar);
			k++;
		}
		else if(tempChar=='*' || tempChar=='/' || tempChar=='+' || tempChar=='-'){
			cDeq.push_front(tempChar);
			i++;
		}
		else{
		}
	}

	if(iDeq.size()-1!=cDeq.size()){
		cout<<"Error"<<endl;
		return -1;
	}

	int j=0;

	for(j=0;j<cDeq.size();j++){
		if(cDeq[j]=='/' && iDeq[j+1]=='0'){
			cout<<"Error"<<endl;
			return -1;
		}
	}

	//initialising classes
	BinaryTree binaryTree;


	binaryTree.setOperators(i);
	binaryTree.setCount(k);
	binaryTree.createTree(s);

	binaryTree.printTree();					//calling the function to print the results


}




