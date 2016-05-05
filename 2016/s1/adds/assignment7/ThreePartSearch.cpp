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

//a function to search a sorted array by splitting it into three parts and determining what part the
//numbe is in and then repeating
bool ThreePartSearch::search(int A[],int start,int end){

	int find=0;											//what number we are looking for
	
	//setting the thirds
	int firstThird=floor((end+start)/3);
	int secondThird=floor(2*(end+start)/3);

	//will run if the aray still has 1 or more values in it
	if(start<=end){
		if(find==A[firstThird] || find==A[secondThird]){	//condition to see if it is found
			searchRes=true;
			return true;
		}
		else if(find<A[firstThird]){						//if not checks to see what section it is in
			search(A,start,firstThird-1);					//then recursively repeats the process
		}
		else if(find>A[firstThird] && find<A[secondThird]){
			search(A,firstThird+1,secondThird-1);
		}
		else if(find>A[secondThird]){
			search(A,secondThird+1,end);
		}
	}
	else{													//if not found returns false
		searchRes=false;
		return false;
	}
};

