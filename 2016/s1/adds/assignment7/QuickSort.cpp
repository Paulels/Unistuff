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
		int pivot;
		int stored;
		int s=start;
		int e=end;
		if((end-start)<3){
			pivot=A[end];
		}
		else{
			pivot=A[start+2];
		}
		while(s<=e){
			while(A[s]<pivot){
				s++;
			}
			while(A[e]>pivot){
				e--;
			}
			if(s<=e){
				stored=A[s];
				A[s]=A[e];
				A[e]=stored;
				s++;
				e--;
			}
		}
		sort(A,start,e);
		sort(A,s,end);
	}
	else{
		return;
	}
};





