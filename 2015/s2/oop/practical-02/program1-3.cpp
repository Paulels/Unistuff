#include <iostream>
#include <math.h>

void count_numbers(int A[4][4]){
	int zeros=0;
int ones=0;
int twos=0;
int threes=0;
int fours=0;
int fives=0;
int sixes=0;
int sevens=0;
int eights=0;
int nines=0;
	int i=0;
	int j=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		if(A[i][j]==0){
			zeros++;
		}
		else if(A[i][j]==1){
			ones++;
		}
		else if(A[i][j]==2){
			twos++;
		}
		else if(A[i][j]==3){
			threes++;
		}
		else if(A[i][j]==4){
			fours++;
		}
		else if(A[i][j]==5){
			fives++;
		}
		else if(A[i][j]==6){
			sixes++;
		}
		else if(A[i][j]==7){
			sevens++;
		}
		else if(A[i][j]==8){
			eights++;
		}
		else if(A[i][j]==9){
			nines++;
		}
		}
	}
std::cout << "0:" << zeros << ";1:" << ones << ";2:" << twos << ";3:" << threes << ";4:" << fours << ";5:" << fives << ";6:" << sixes << ";7:" << sevens << ";8:" << eights << ";9:" << nines << ";" <<std::endl; 
}

#ifndef WEBSUBMIT
int main(){
	int A[4][4]={{1,1,1,1},{1,1,1,1},{1,2,3,4},{5,6,7,8}};
	count_numbers(A);
}
#endif //WEBSUBMIT
