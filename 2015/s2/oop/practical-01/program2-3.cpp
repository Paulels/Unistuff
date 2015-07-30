#include <iostream>


void twofivenine(int array[],int n){
	int twos=0;
int fives=0;
int nines=0;
	int i=0;
			for(i=0;i<n;i++){
				if(array[i]==2 ){
					twos=twos+1;
				}
				else if(array[i]==5){
					fives=fives+1;
				}
				else if(array[i]==9){
					nines=nines+1;
				}
			}
std::cout << "2:"<< twos << ";5:"<< fives << ";9:" << nines << std::endl;
}

#ifndef WEBSUBMIT
int main(){
	int array[5]={-2,4,7,9,1};
twofivenine(array,5);

}
#endif //WEBSUBMIT
