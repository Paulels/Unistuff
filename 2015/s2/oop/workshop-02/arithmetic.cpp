#include <iostream>
#include <math.h>

void arithmetic(int a1[], int a2[],int n1, int n2){
	int a=0;
	if(n1>n2){
		a=n1+1;
	}
	else{
		a=n2+1;
	}
	int add[a];
	int carry[a];
	int i=0;
	for(i=0;i<a;i++){
		carry[i]=0;
	}
	add[0]=0;
	int c=a-1;
	int x=0;
	int s=0;
	for(c=a;c>=0;c--){
		s=a1[n1]+a2[n2]+carry[c-1];
		if(s==3){
			add[c]=1;
			carry[c-2]=1;
		}
		else if(s==2){
			add[c]=0;
			carry[c-2]=1;			
		}
		else if(s==1){
			add[c]=1;
			carry[c-2]=0;
		}
		else{
			add[c]=0;
			carry[c-2]=0;
		}
	n1--;
	n2--;
	if(n1<0){
		n1=0;
		a1[n1]=0;
	}
	if(n2<0){
		n2=0;
		a2[n2]=0;
	}
	}
	int j=0;
	for(j=0;j<a;j++){
		std::cout << add[j];
	}
std::cout << "\n";
return;
}

#ifndef WEBSUBMIT
int main(){
	int m1[9]={1,1,1,1,1,1,1,1,1};
	int m2[9]={1,1,1,0,1,1,1,0,1};
	int l1=9;
	int l2=9;
	arithmetic(m1,m2,l1,l2);
}
#endif //WEBSUBMIT
