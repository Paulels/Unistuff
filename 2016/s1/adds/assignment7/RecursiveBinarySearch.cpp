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

//
bool RecursiveBinarySearch::search(int A[],int start,int end){

	int find=0;
	int mid=floor((end+start)/2);
	if(start<=end){
		if(find==A[mid]){
			searchRes=true;
			return true;
		}
		else if(find<A[mid]){
			search(A,start,mid-1);
		}
		else if(find>A[mid]){
			search(A,mid+1,end);
		}
	}
	else{
		searchRes=false;
		return false;
	}
};

