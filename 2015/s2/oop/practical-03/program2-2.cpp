#include <iostream>
#include <math.h>
using namespace std;

#ifndef WEBSUBMIT
int main(){
	int x=10;
	int *xp=&x;
	cout << xp << endl;
	cout << *xp << endl;
}
#endif //WEBSUBMIT
