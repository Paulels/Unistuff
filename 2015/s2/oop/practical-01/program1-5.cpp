#include <iostream>


int count_even(int number){
	int total=0;
	int i=0;
	if(number==0){
		return -1;
	}
	else if(number<0){
			for(i=-1;i>=number;i--){
				if((i%2)==0){
					total=total+1;
				}
			}	
		}
	else {
			for(i=1;i<=number;i++){
				if((i%2)==0){
					total=total+1;
		}
		return total;

}

#ifndef WEBSUBMIT
int main(){
	//count_even(12);
	std::cout << count_even(9) << std::endl;

}
#endif //WEBSUBMIT
