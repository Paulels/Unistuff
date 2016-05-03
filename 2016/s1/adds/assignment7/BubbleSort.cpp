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

//
void BubbleSort::sort(int *A,int start,int end){

	int i=0;
	int correct=0;
	int store=0;
	for(i=0;i<end;i++){
		if(A[i]<=A[i+1]){
			correct++;
		}
		else{
			store=A[i];
			A[i]=A[i+1];
			A[i+1]=store;
		}
	}
	if(correct==end){
		return;
	}
	else{
		sort(A,start,end);
	}
};


