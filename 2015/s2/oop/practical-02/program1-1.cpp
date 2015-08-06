#include <iostream>
#include <math.h>

int diagonal(int array[4][4]){
	int i=0;
	int sum=0;
	for(i=0;i<4;i++){
			sum=sum+array[i][i];
	}
return sum;
}

#ifndef WEBSUBMIT
int main(){
	int A[4][4]={{1,1,1,1},{1,1,1,1},{1,2,3,4},{5,6,7,8}};
	std::cout << diagonal(A) <<std::endl;
}
#endif //WEBSUBMIT
