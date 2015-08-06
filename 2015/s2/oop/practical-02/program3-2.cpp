#include <iostream>

int min_integer(int array[],int n){
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

int max_integer(int array[],int n){
	int max=0;
	int j=0;
	if(n<=0){
		return -1;
	}
	else{
			for(j=0;j<n;j++){
				if(j==0){
					max=array[j];
				}
				else if(array[j]>max){
					max=array[j];
				}
}
		return max;
	}
}
int sum_min_and_max(int array[], int n){
int sum=0;
int a=max_integer(array,n);
int b=min_integer(array,n);
if(n<=0){
return -1;
}
else{
sum=a+b;
return sum;
}

}
#ifndef WEBSUBMIT
int main(){
	int array[5]={-2,4,7,9,1};
std::cout << sum_min_and_max(array,5) << std::endl;

}
#endif //WEBSUBMIT
