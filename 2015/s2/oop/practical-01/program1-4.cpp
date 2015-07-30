#include <iostream>


int sumtwo(int array[], int secondarray[], int n){
	int total=0;
	
	int i=0;
	if(n==0){
		return -1;
	}
	else{
		for(i=0;i<n;i++){
			total=total+array[i]+secondarray[i];
		}	
		return total;
	}
}

#ifndef WEBSUBMIT
int main(){
	int array[5] = {7,6,2,10,7};
	int array2[5] = {5,3,6,8,2};
	std::cout << sumtwo(array,array2,5) << std::endl;

}
#endif //WEBSUBMIT
