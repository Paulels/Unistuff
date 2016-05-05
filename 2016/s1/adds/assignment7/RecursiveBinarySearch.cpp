#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include <math.h>
#include "RecursiveBinarySearch.h"
using namespace std;

//Just a basic constructor
RecursiveBinarySearch::RecursiveBinarySearch(){

}

//Just a basic deconstructor
RecursiveBinarySearch::~RecursiveBinarySearch(){

}

//a function that recursively binary searches a sorted array
bool RecursiveBinarySearch::search(int A[],int start,int end){

	int find=0;							//what we are looking for
	int mid=floor((end+start)/2);		//setting the middle value

	//checking to see if the array has any values left in it
	if(start<=end){
		if(find==A[mid]){				//checks if the value choosen is what we want
			searchRes=true;
			return true;
		}
		else if(find<A[mid]){			//if not it checks what half it is in
			search(A,start,mid-1);		//then recalls the search function on that half
		}
		else if(find>A[mid]){
			search(A,mid+1,end);
		}
	}
	else{								//if 0 is not found it returns false
		searchRes=false;
		return false;
	}
};

