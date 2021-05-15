#include <iostream>
using namespace std;
//Write an inline function that accepts the base and exponet from user and compute power
inline power(int base, int exponent)
{
	int result=1;
	for(int i=0;i<exponent;i++)
	{
		result*=base;
	}
	return result;
}
int main()
{
	int base,exponent;
	cout<<"Enter base: ";
	cin >> base;
	cout<<"Enter exponent: ";
	cin >> exponent;
	cout<<"The result is "<<power(base,exponent);
    return 0;
}
