#include <iostream>
#include <math.h>
using namespace std;

int min(int a, int b){

	int small;
	if(a<b){
		small=a;
	}
	else{
		small=b;
	}
	return small;
}

int max(int a, int b){

	int large;
	if(a>b){
		large=a;
	}
	else{
		large=b;
	}
	return large;
}

int callfn(int(*f)(int,int),int a, int b){

	return (*f)(a,b);

}

#ifndef WEBSUBMIT
int main(){

	cout << callfn(min,5,7) << endl;
	cout << callfn(max,5,7) << endl;

return 0;
}
#endif //WEBSUBMIT
