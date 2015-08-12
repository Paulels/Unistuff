#include <iostream>
#include <math.h>
using namespace std;

#ifndef WEBSUBMIT
int main(){
	int x[4]={1,2,3,4};
	int *xp=x;
	int i=0;
	for(i=0;i<4;i++){
	cout << *xp << endl;
	xp++;
	}
}
#endif //WEBSUBMIT
