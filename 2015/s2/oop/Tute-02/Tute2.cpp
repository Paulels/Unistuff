#include <iostream>
#include <math.h>


int *copyarr(int *a,int size){
	int *newarr=new int [size];
	int i=0;
	for(i=0;i<size;i++){
		(*newarr)[i]=(*a)[i];
	}
return newarr;
}

#ifndef WEBSUBMIT
int main(){
	int A[8]={1,1,1,1,1,1,1,1};
	std::cout << binary_to_integer(A,8) <<std::endl;
}
#endif //WEBSUBMIT
