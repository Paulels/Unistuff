#include <iostream>

using namespace std;

// use integer division for a and b
float divint(float a, float b)
{
	return a / b;
} 

// attempt 5/2 and 3/0
int main()
{
	float x = 5, y = 2;

	cout << divint(x, y) << std::endl;

	x = 3; y = 0;
	cout << divint(x, y) << std::endl;

	return 0;
}
