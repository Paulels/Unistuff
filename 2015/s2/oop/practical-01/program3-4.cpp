#include <iostream>
#include <math.h>


void passorfail(char grade){
	switch (grade){
		case 'A':
			std::cout << "Pass" << std::endl;
			break;
		case 'B':
			std::cout << "Pass" << std::endl;
			break;
		case 'C':
			std::cout << "Pass" << std::endl;
			break;
		case 'D':
			std::cout << "Fail" << std::endl;
			break;
		case 'E':
			std::cout << "Fail" << std::endl;
			break;
		default:
			std::cout << "Nothing" << std::endl;
	}	
}

#ifndef WEBSUBMIT
int main(){
	char grade='A';
passorfail(grade);

}
#endif //WEBSUBMIT
