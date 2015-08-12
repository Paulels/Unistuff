#include <iostream>

using namespace std;

// use integer division for a and b
int divint(int a, int b)
{
	return a / b;
} 

// attempt 5/2 and 3/0
int main()
{
	int x = 5, y = 2;

	cout << divint(x, y);

	x = 3; y = 0;
	cout << divint(x, y);

	return 0;
}
