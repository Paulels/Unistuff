#include <iostream>
#include <math.h>
using namespace std;

#ifndef WEBSUBMIT
int main(){
	double x[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	double *xp=&x[0][0];
	int i=0;
	for(i=0;i<16;i++){
	cout << *xp << endl;
	xp++;
	}
}
#endif //WEBSUBMIT
