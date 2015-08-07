#include <iostream>
#include <math.h>

bool is_a_palindrome(int array[],int n){
	int tru=0;
	int i=0;
int j=0;
int k=n;
int a=0;
int b=n/2;
int t=0;
int y=n-1;
if(n%2==1){
	a=n-1;
}
else{
	a=n-2;
}
	for(int x=0;x<b;x++){
		if(array[x]==array[y]){
			t=t+1;
		}
y=y-1;
	}
if (t==b){
		return true;
}
else{
return false;
}
}
int sum_elements(int array[],int n){
int z=0;
int sum=0;
for(z=0;z<n;z++){
sum=sum+array[z];
}
return sum;
}

int sum_if_a_palindrome(int array[],int n){
int g=is_a_palindrome(array,n);
if(n<=0){
return -1;
}
else if(g==1){
int v=sum_elements(array,n);
return v;
}
else{
return -2;
}
}
#ifndef WEBSUBMIT
int main(){
	int array[5]={1,2,3,2,1};
std::cout << sum_if_a_palindrome(array,5) << std::endl;

}
#endif //WEBSUBMIT
