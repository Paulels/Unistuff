#include <iostream>
#include <math.h>
using namespace std;

void printer(int array[10][10]){
	int i=0;
	int j=0;
	for(j=0;j<10;j++){
		for(i=0;i<10;i++){
			if(i==9){
			cout << array[j][i];
			}
			else{
			cout << array[j][i];
			}
		}
	cout << "\n";
	}
return;
}

#ifndef WEBSUBMIT
int main(){
	int A[10][10]={{1,2,0,0,0,0,0,0,0,0},{0,1,0,0,0,0,0,0,0,0},{0,0,1,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,0,0},{0,5,0,0,0,1,0,0,0,0},{0,0,0,0,0,0,1,2,0,0},{0,0,0,0,0,0,0,1,0,0},{0,2,0,0,0,0,0,0,1,0},{0,0,0,0,0,0,0,0,0,1}};
	printer(A);
}
#endif //WEBSUBMIT
