#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include <sstream>
#include "Sort.h"
#include "Search.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "ThreePartSearch.h"
using namespace std;

//

int main(){

	//getting users input as a string
	string s;
	vector<int> vec;
	getline(cin,s);

	stringstream ss(s); 			//constructing a stringstream object

	int j;

	while(ss>>j){					//stores the numbers as integers in j
		vec.push_back(j);		
		if(ss.peek()==' '){			//checks to see what the next character in the stream 
			ss.ignore();			//and ignores it if it is a space
		}
	}
	
	int size=vec.size();
	int array[size];		
	int i=0;
	bool TorF;
	string str;

	//copying the contents of the vector into a standard array
	for(i=0;i<size;i++){
		array[i]=vec.at(i);
	}

	//initialising classes
	BubbleSort BubbleSort;
	QuickSort QuickSort;
	RecursiveBinarySearch RecursiveBinarySearch;
	ThreePartSearch ThreePartSearch; 

	//running the equired functions
	QuickSort.sort(array,0,size);
	TorF=ThreePartSearch.search(array,0,size-1);

	//printing the outputs
	if(TorF==1){
		str="true";
	}
	else{
		str="false";
	}

	cout<<str<<" ";
	for(i=0;i<size;i++){
		if(i==size-1){
			cout<<array[i]<<endl;
		}
		else{
			cout<<array[i]<<" ";
		}
	}
}
