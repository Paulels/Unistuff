#include <iostream>
#include <math.h>
#include <cstdlib>

void print_as_binary(std::string decimal_number){
	int x=atoi(decimal_number.c_str());
	int n=x;
	int c=0;
	while(x!=0){
		x=x/2;
		c++;
	}
	int m[c];
	int a=0;
	int i=c-1;
	while(n!=0){
		a=n%2;
		n=n/2;
		m[i]=a;
		i--;
		}
	for(int j=0;j<c;j++){
	std::cout << m[j];
}
std::cout << "\n";
return;
}

#ifndef WEBSUBMIT
int main(){
	print_as_binary("255");
}
#endif //WEBSUBMIT
