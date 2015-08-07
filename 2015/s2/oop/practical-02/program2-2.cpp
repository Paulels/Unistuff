#include <iostream>
#include <math.h>

int binary_to_number(int A[],int n){
	int i=n-1;
	int sum=0;
	int c=0;
	for(i=n-1;i>=0;i--){
		if(A[i]==1){
			sum=sum+(pow(2,c));
		}
	c++;
	}
return sum;
}

#ifndef WEBSUBMIT
int main(){
	int A[8]={1,1,1,1,1,1,1,1};
	std::cout << binary_to_number(A,8) <<std::endl;
}
#endif //WEBSUBMIT
