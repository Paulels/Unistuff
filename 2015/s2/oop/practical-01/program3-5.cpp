#include <iostream>
#include <math.h>


double sumeven(int array[],int n){
	int sum=0;
	int i=0;
	for(i=0;i<n;i++){
		if(i%2==0){
			sum=sum+array[i];
		}
	}
return sum;
}

#ifndef WEBSUBMIT
int main(){
	int array[5]={1,2,3,2,1};

}
#endif //WEBSUBMIT
