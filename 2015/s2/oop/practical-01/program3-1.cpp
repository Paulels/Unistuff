#include <iostream>
#include <math.h>


bool fanarray(int array[],int n){
	int tru=0;
	int i=0;
int j=0;
int k=n;
int a=0;
int b=n/2;
if(n%2==1){
	a=n-1;
}
else{
	a=n-2;
}
			for(i=0;i<b;i++){
				if(array[i]<array[i+1]){
					tru=tru+1;
				}
			}
for(k=n;k>b;k--){
	if(array[k]<array[k-1]){
		tru=tru+1;
	}
}
	int t=0;
if(tru==a){
	int x=0;
	int y=n-1;
	for(x=0;x<b;x++){
		if(array[x]==array[y]){
			t=t+1;
		}
y=y-1;
	}
}
if (t==b){
		return true;
}
else{
return false;
}


}

#ifndef WEBSUBMIT
int main(){
	int array[5]={1,2,3,2,1};
std::cout << fanarray(array,5) << std::endl;

}
#endif //WEBSUBMIT
