#include <iostream>

int count(int array[], int n, int number){
	int total=0;
	int i=0;
	if(n==0){
		return -1;
	}
	else{
		for(i=0;i<n;i++){
			if(array[i]==number){
				total=total+1;
			}	
		}
		return total;
	}
}

#ifndef WEBSUBMIT
int main(){
	int array[5] = {7,6,2,10,7};
	std::cout << count(array,5,7) << std::endl;

}
#endif //WEBSUBMIT
