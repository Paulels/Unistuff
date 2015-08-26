#include <iostream>
#include <math.h>
#include <typeinfo>
#include <string>
using namespace std;

#ifndef WEBSUBMIT
int main(){

	int a=1;
	short b=2;
	string c="bye";

	cout << typeid(a).name() << "\n" << typeid(b).name() << "\n" << typeid(c).name() << endl;


return 0;
}
#endif //WEBSUBMIT
