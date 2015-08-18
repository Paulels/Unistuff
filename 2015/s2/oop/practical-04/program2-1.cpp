#include <iostream>
#include <math.h>
using namespace std;

void print_sevens(int *nums, int length){
	int i=0;
	for(i=0;i<length;i++){ //runs a for loop through all elements
		if(*nums%7==0){ //checks if the number at that memory position is divisable by 7
			cout << *nums << endl; //prints the number if divisable by 7
		}
		nums++; //increments the position in menmory
	}
	return;
}

#ifndef WEBSUBMIT
int main(){
	int A[4]={21,3,7,9}; //initialised an array
	int *a=A; //initialised a pointer to the array A
	print_sevens(a,4);
}
#endif //WEBSUBMIT
