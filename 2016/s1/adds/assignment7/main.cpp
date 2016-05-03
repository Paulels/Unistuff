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

	stringstream ss(s); //constructing a stringstream object

	int j;

	while(ss>>j){				//stores the numbers as integers in j
		vec.push_back(j);		
		if(ss.peek()==' '){			//checks to see what the next character in the stream 
			ss.ignore();						//and ignores it if it is a space
		}
	}
	
	int size=vec.size();
	int array[size];		
	int i=0;

	for(i=0;i<size;i++){
		array[i]=vec.at(i);
	}

	//initialising classes
	BubbleSort BubbleSort;
	QuickSort QuickSort;
	RecursiveBinarySearch RecursiveBinarySearch;
	ThreePartSearch ThreePartSearch; 

/*	QuickSort.sort(array,0,size);
	ThreePartSearch.search(          );

	cout<<get boolean if 0 is contained<<" ";
	for(i=0;i<size;i++){
		if(i==size-1){
			cout<<array[i]<<endl;
		}
		else{
			cout<<array[i]<<" ";
		}
	}*/
}
