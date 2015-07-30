#include <iostream>

int minimum(int array[],int n){
	int min=0;
	int i=0;
	if(n<=0){
		return -17;
	}
	else{
			for(i=0;i<n;i++){
				if(i==0){
					min=array[i];
				}
				else if(array[i]<min){
					min=array[i];
				}
}
		return min;
	}
}

#ifndef WEBSUBMIT
int main(){
	int array[5]={-2,4,7,9,1};
std::cout << minimum(array,5) << std::endl;

}
#endif //WEBSUBMIT
