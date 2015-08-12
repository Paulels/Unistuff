#include <iostream>
#include <math.h>
using namespace std;

#ifndef WEBSUBMIT
int main(){
	int x=42;
	int *xp=&x;
	*xp=*xp+5;
	cout << *xp << endl;
	*xp=*xp-2;
	cout << *xp << endl;
}
#endif //WEBSUBMIT
