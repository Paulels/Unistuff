#include <iostream> 
using namespace std;

// forward declare setint so it is defined before being used
void setint(int*, int);

// our main function, this one ignores its 3 parameters
int main()
{
	int a;

	setint(&a, 10);
	cout << a << endl;

	int *b;
	cout << b << *b;
	setint(b, 10);
	cout << *b << endl;

	return 0;
}

// follow pointer and set the int value to i
void setint(int *ip, int i)
{
	*ip = i;
} 
