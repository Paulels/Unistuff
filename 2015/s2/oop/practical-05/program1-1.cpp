#include <iostream>
#include <math.h>
using namespace std;

#ifndef WEBSUBMIT
int main(){

	short A[4]={1,2,3,4};
	int B[4];
	int i=0;

	for(i=0;i<4;i++){
		B[i]=A[i];
	}
	for(i=0;i<4;i++){
		cout << B[i];
	}
	cout << endl;
	for(i=0;i<4;i++){
		cout << A[i];
	}
	cout << endl;
return 0;
}
#endif //WEBSUBMIT
