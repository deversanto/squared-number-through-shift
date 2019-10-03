#include <iostream>
using namespace std;

int pow(int base, int exp)
{
	int result = 1;
	while (exp)
	{
		if (exp & 1)
			result *= base;
			exp >>= 1;
			base *= base;
	}
	return result;
}

int main()
{
	int a = 5;
	int b = 4;
	
	cout << pow(a, b) << endl;


}