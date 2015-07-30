#include <iostream>
#include <math.h>


double weightedaverage(double array[],int n){
	double sum=0;
	int i=0;
	int o=0;
	int j=0;
	int k=0;
	if(n<=0){
		return -1;
	}
	else{
	for(j=0;j<n;j++){
	o=0;
	for(i=0;i<n;i++){
		if(array[j]==array[i]){
			o=o+1;	
		}
	}
	sum=sum+(array[j]*o);
	}
	sum=sum/n;
	return sum;
	}
}

#ifndef WEBSUBMIT
int main(){
	double array[5]={5,2,3,7,3};
std::cout << weightedaverage(array,5) << std::endl;

}
#endif //WEBSUBMIT
