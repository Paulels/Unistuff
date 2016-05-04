#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include <math.h>
#include "ThreePartSearch.h"
using namespace std;

//Just a basic constructor
ThreePartSearch::ThreePartSearch(){

}

//Just a basic deconstructor
ThreePartSearch::~ThreePartSearch(){

}

//
bool ThreePartSearch::search(int A[],int start,int end){

	int find=0;
	int firstThird=floor((end+start)/3);
	int secondThird=floor(2*(end+start)/3);
	if(start<=end){
		if(find==A[firstThird] || find==A[secondThird]){
			searchRes=true;
			return true;
		}
		else if(find<A[firstThird]){
			search(A,start,firstThird-1);
		}
		else if(find>A[firstThird] && find<A[secondThird]){
			search(A,firstThird+1,secondThird-1);
		}
		else if(find>A[secondThird]){
			search(A,secondThird+1,end);
		}
	}
	else{
		searchRes=false;
		return false;
	}
};

