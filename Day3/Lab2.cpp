#include <iostream>
using namespace std;
//Function return multiple values
void sumproduct(int a, int b, int *sum, int *prod, int *sub, float *div)
{
    *sum = a+b;
    *prod = a*b;
    *sub = a-b;
    *div = a/b;
}
int main()
{
    int x=10, y=5,prod, sum, sub,div;
    sumproduct(x,y,z, &sum, &prod, &sub, &div)
    cout<<"the sum of number is \t"<<sum<<" and their product is \t"<<prod<<endl;
    cout<<"the difference of number is \t"<<sub<<" and their division is \t"<<div<<endl;
    return 0;
}
