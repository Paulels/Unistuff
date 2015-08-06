#include <iostream>
#include <math.h>

int identity(int array[10][10]){
	int i=0;
int j=0;
	int count=0;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(i==j){
				if(array[i][j]==1){
					count++;
				}
			}
			else{
				if(array[i][j]==0){
					count++;
				}
			}
		}
	}
if(count==100){
return 1;
}
else{
return 0;
}
}

#ifndef WEBSUBMIT
int main(){
	int A[10][10]={{1,0,0,0,0,0,0,0,0,0},{0,1,0,0,0,0,0,0,0,0},{0,0,1,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,1,0,0,0,0},{0,0,0,0,0,0,1,0,0,0},{0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,1,0},{0,0,0,0,0,0,0,0,0,1}};
	std::cout << identity(A) <<std::endl;
}
#endif //WEBSUBMIT
