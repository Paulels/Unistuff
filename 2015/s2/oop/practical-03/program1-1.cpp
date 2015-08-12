#include <iostream>
#include <math.h>
using namespace std;

int printer(int array[10][10]){
	int i=0;
	int j=0;
	for(j=0;j<10;j++){
		for(i=0;i<10;i++){
			cout << array[j][i] << " ";
		}
	cout << "\n";
	}
	cout << "\n";
return 0;
}

#ifndef WEBSUBMIT
int main(){
	int A[10][10]={{1,2,0,0,0,0,0,0,0,0},{0,1,0,0,0,0,0,0,0,0},{0,0,1,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,0,0},{0,5,0,0,0,1,0,0,0,0},{0,0,0,0,0,0,1,2,0,0},{0,0,0,0,0,0,0,1,0,0},{0,2,0,0,0,0,0,0,1,0},{0,0,0,0,0,0,0,0,0,1}};
	std::cout << printer(A) <<std::endl;
}
#endif //WEBSUBMIT
