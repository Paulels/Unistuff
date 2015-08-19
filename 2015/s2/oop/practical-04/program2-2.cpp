#include <iostream>
#include <math.h>
using namespace std;

/*This program runs through an array and determines the maximum sum of any possible contiguous sub-array
It will return the maximum sum
if the array is full of negative numbers it will returns 0*/

int maximum_sum(int *nums, int length){

	int i=0;
	int maxsum=0;
	int max=0;

	for(i=0;i<length;i++){ //runs a for loop through all elements
		max=max+*nums; //adds the element in the position of the array
		if(max<0){ //Checks if it makes it negative
			max=0; //If so it resets it to zero
		}
		if(max>maxsum){ //Checks if max is now greater than maxsum
			maxsum=max; //if so it makes maxsum equal to max
		}
		nums++; //increments the position in menmory
	}

	return maxsum; //returns maxsum
}

#ifndef WEBSUBMIT
int main(){

	int A[10]={31,-41,59,26,-53,58,97,-93,-23,84}; //initialised an array
	int *a=A; //initialised a pointer to the array A
	cout << maximum_sum(a,10) << endl;
}
#endif //WEBSUBMIT
