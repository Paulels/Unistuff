#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include "BubbleSort.h"
using namespace std;

//Just a basic constructor
BubbleSort::BubbleSort(){

}

//Just a basic deconstructor
BubbleSort::~BubbleSort(){

}

//A function that will sort an arrray of integars using bubblesort
void BubbleSort::sort(int *A,int start,int end){

	int i=0;
	int correct=0;
	int store=0;

	//goes over the whole array
	for(i=0;i<end;i++){
		if(A[i]<=A[i+1]){			//adds up the amount of already sorted pairs in the array
			correct++;
		}
		else{						//if not it swaps them 
			store=A[i];
			A[i]=A[i+1];
			A[i+1]=store;
		}
	}
	if(correct==end){				//checks to see if the aray is sorted
		return;
	}
	else{							//othewise it runs the sorting algorithimn again
		sort(A,start,end);
	}
};


