#include <iostream>
#include <math.h>
using namespace std;

#ifndef WEBSUBMIT
int main(){
	short x=10;
	short *xp=&x;
	
	cout << sizeof(xp) << sizeof(*xp) << endl;
}
#endif //WEBSUBMIT
