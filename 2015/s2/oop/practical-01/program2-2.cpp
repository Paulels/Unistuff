#include <iostream>


int maximum(int array[],int n){
	int max=0;
	int i=0;
	if(n<=0){
		return -1;
	}
	else{
			for(i=0;i<n;i++){
				if(i==0){
					max=array[i];
				}
				else if(array[i]>max){
					max=array[i];
				}
}
		return max;
	}
}

#ifndef WEBSUBMIT
int main(){
	int array[5]={-2,4,7,9,1};
std::cout << maximum(array,5) << std::endl;

}
#endif //WEBSUBMIT
