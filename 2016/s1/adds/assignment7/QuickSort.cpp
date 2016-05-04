#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#include "QuickSort.h"
using namespace std;

//Just a basic constructor
QuickSort::QuickSort(){

}

//Just a basic deconstructor
QuickSort::~QuickSort(){

}

//
void QuickSort::sort(int *A,int start,int end){

	int saved;
	if(start<end){
		saved=partition(A,start,end);
		sort(A,start,saved-1);
		sort(A,saved+1,end);
	}
};

//
int QuickSort::partition(int *B,int start,int end){

	int pivot;
	int stored;
	if((end-start)<3){
		pivot=B[end];
	}
	else{
		pivot=B[start+2];
	}
	while(start<end){
		while(B[start]<=pivot){
			start++;
		}
		while(B[end]>pivot){
			end--;
		}
		if(start<end){
			stored=B[start];
			B[start]=B[end];
			B[end]=stored;
		}
		else{
			stored=pivot;
			pivot=B[start];
			B[start]=pivot;
			break;
		}
	}
	return end;



};





