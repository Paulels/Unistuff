#include <iostream>
using namespace std;

int main()
{
	int *ptr, a[10]={1,2,3,4,5,6,7,8,9,10};
	int *b = new int[10];

	/* address of a[0] is assigned to ptr */
	ptr = &a[0];   

	// I want to copy the values in a into b; since i've declared b
    // as a dynamically allocated array,
	// I can now do pointer magic!!
	b = ptr;

	cout << "Value of first element in b " << b[0] << endl; 
	cout << "Value of second element in b " << b[1] << endl; 

	a[1] = 42;
	cout << "Value of second element in b " << b[1] << endl;

	return 0;
}
/*This program runs and compiles properly
What is going wrong is that when you print b[1] the second time it should still be 2 but it is not
This is happening because b is a pointer which is equal to ptr which is a pointer which is pointing to the array a
This means that even though you have changed the value of a[1] after the line saying b=ptr it will still
change the element b[1] to 42 because you havent really copied the array you have just pointed to it.*/
