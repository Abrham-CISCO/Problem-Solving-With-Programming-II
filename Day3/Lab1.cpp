#include <iostream>
using namespace std;
//Function return multiple values
void sumproduct(int a, int b, int c, int *sum, int *prod)
{
    *sum = a+b+c;
    *prod = a*b*c;
}
int main()
{
    int x=10, y=5, z=1, prod, sum;
    sumproduct(x,y,z, &sum, &prod)
    cout<<"the sum of number is \t"<<sum<<" and their product is \t"<<prod;
    return 0;
}
