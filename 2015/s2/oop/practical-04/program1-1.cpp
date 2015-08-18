#include <iostream>
#include <math.h>
using namespace std;

#ifndef WEBSUBMIT
int main(){
	int A[2][2]={{1,3},{5,9}}; //initialised a 2 dimensional array
	int B[2][2]; //defining the array to copy A into
	int i=0;
	int j=0;
	for(i=0;i<2;i++){ //running a for loop to copy the elements
		for(j=0;j<2;j++){
			B[i][j]=A[i][j]; //copying A into B
		}
	}
	int k=0;
	int l=0;
	for(k=0;k<2;k++){  //printing the 2 dimensional array nicely
		for(l=0;l<2;l++){
			if(l==0){
				std::cout << B[k][l] << " "; 
			}
			else{
				std::cout << B[k][l];
			}
		}
		cout << "\n";
	}
	return 0;
}
#endif //WEBSUBMIT
