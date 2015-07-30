#include <iostream>


int sum_array(int array[], int n){
	int number=0;
	int i=0;
	for(i=0;i<n;i++){
		number=number+array[i];
	}

	return number;
}

#ifndef WEBSUBMIT
int main(){
	int array[5] = {7,6,2,10,7};
	std::cout << sum_array(array,5) << std::endl;

}
#endif //WEBSUBMIT
