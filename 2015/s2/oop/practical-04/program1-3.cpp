#include <iostream>
#include <math.h>
using namespace std;

/*This program copies an existing array into a new array using pointers*/

void cpyia(int old_array[], int new_array[], int length){

	int i=0;
	int j=0;
	int *ptr=old_array; //initialising ptr to the first element of the old array
	int *p=new_array;  //initialising p to the first element of the new array

	for(i=0;i<length;i++){ 
		*p=*ptr; //copying old array value into the new array
		p++; //incrementing the porition in memeory the pointers are pointing to
		ptr++;
	}

	// The following code can be used to print out the array to check if the answer is correct

	int *ap=new_array;  initialising ap to the first element of the new array
	for(j=0;j<length;j++){  printing the array nicely
		if(j!=length){
			cout << *ap << " ";  derefrencing ap to print the value at that memory location
		}
		else{
			cout << *ap;
		}
	ap++;  incrementing the porition in memeory ap is pointing to
	}
	cout << "\n";

	return;
}

#ifndef WEBSUBMIT
int main(){
	int A[5]={1,4,9,-714,12}; //initialised a 2 dimensional array
	int B[5]; //defining the array to copy A into
	cpyia(A,B,5);
}
#endif //WEBSUBMIT
