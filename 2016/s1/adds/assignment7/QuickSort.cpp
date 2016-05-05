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

//A function that will sort an array using quicksort
void QuickSort::sort(int *A,int start,int end){

	int saved;

	//checks to see that the array has more than 1 element
	if(start<end){
		int pivot;
		int stored;
		int s=start;
		int e=end;

		//setting the pivot point
		if((end-start)<3){
			pivot=A[end];
		}
		else{
			pivot=A[start+2];
		}

		//this part is partitioning, it is moving all values less than the pivot to before the 
		//pivot and all values greater than the pivot to after it
		while(s<=e){
			while(A[s]<pivot){		//if less the the pivot keep it there
				s++;
			}
			while(A[e]>pivot){		//if greater than the pivot keep it there
				e--;
			}
			if(s<=e){				//swap the values that ae on the wong sides of the pivot
				stored=A[s];
				A[s]=A[e];
				A[e]=stored;
				s++;
				e--;
			}
		}
		sort(A,start,e);			//recursively repeat
		sort(A,s,end);
	}
	else{							//returns if the array only has one element
		return;
	}
};





