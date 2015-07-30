#include <iostream>
#include <math.h>


int median(int array[],int n){
	int i=0;
	int j=n;
	int k=0;
	int x=0;
	int num=0;
    int sortedarray[n];
    for (i=0;i<n;i++){
        sortedarray[i]=array[i];
    }
    for (k=j-1;k>0;k--){
        for (x=0;x<k;x++){
            if (sortedarray[x]>sortedarray[x+1]) {
                num = sortedarray[x];
                sortedarray[x]=sortedarray[x+1];
                sortedarray[x+1]=num;
            }
        }
    }
    int med=0;
    if ((n%2)==0){
        med=(sortedarray[j/2]+sortedarray[(j/2)-1])/2;
    }
	else{
        med=sortedarray[j/2];
    }
    return med;
}

#ifndef WEBSUBMIT
int main(){
	int array[5]={5,3,3,8,9};
std::cout << median(array,5) << std::endl;

}
#endif //WEBSUBMIT
