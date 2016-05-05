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
	else{
		return;
	}
};

//
int QuickSort::partition(int *B,int start,int end){

	int pivot;
	int stored;
	int s=start+1;
	int e=end;
	if((end-start)<3){
		pivot=B[end];
	}
	else{
		pivot=B[start+2];
		stored=B[start+2];
		B[start+2]=B[start];
		B[start]=stored;
	}
	while(s<=e){
		while(B[s]<=pivot){
			s++;
		}
		while(B[e]>pivot){
			e--;
		}
		if(s<e){
			stored=B[s];
			B[s]=B[e];
			B[e]=stored;
		}
	}
	return end;



};





