#include <iostream>
#include <math.h>
using namespace std;

void print_class(std::string courses[4],std::string student[],int report_card[][4],int nstudents){
	int i=0;
	int j=0;
	int k=0;
	cout << "Report Card";
	for(k=0;k<4;k++){
		cout << " " << courses[k];
	}
	cout << "\n";
	for(j=0;j<nstudents;j++){
		for(i=0;i<5;i++){
			if(i==0){
				cout << student[j];
			}
			else{
				cout << " " << report_card[j][i-1];
			}
		}
	cout << "\n";
	}
return;
}

#ifndef WEBSUBMIT
int main(){
	std::string A[4]={"Maths","English","Physics","Chemistry"};
	int n=3;
	std::string B[3]={"Bob","Bill","Fred"};
	int C[3][4]={{75,30,82,10},{28,45,50,99},{98,97,96,95}};
	print_class(A,B,C,n);
}
#endif //WEBSUBMIT
