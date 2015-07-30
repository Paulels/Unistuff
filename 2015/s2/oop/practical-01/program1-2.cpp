#include <iostream>
#include <math.h>

double average(int array[], int n){
	double total=0;
	double aver=0;
	int i=0;
	if(n==0){
		return 42;
	}
	else{
	for(i=0;i<n;i++){
		total=total+array[i];
	}
	aver=total/n;	
	return aver;
	}
}

#ifndef WEBSUBMIT
int main(){
	int array[5] = {7,6,4,10,7};
	std::cout << average(array,5) << std::endl;

}
#endif //WEBSUBMIT
