#include <iostream>

// counts the number of even numbers in an array with n elements
int count(int array[], int n)
{
        int number = 0;
	int i=0;

        for(i=0;i<n;i++){
		if(array[i]%2==0){
			number=number++;
		}
	}

        return number;
}

#ifndef WEBSUBMIT
int main()
{
        int array[5] = {4,5,6,7,8};
        std::cout << "The number is: " << count(array, 5) << std::endl;
}
#endif //WEBSUBMIT
