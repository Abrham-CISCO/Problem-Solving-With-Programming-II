#include <iostream>
using namespace std;
inline void factorial(int x)
{
    int i, f=1;
    for(i=1; i<=x; i++)
    {
        f = f * i;
    }
    cout<<"Factorial of "<<x<<" is "<<f<<endl;
}
int main()
{

    int i, N;
    cout<<"C++ Program to print factorial of first N natural numbers"<<endl<<endl;
    cout<<"Enter total number of natural number:"<<endl;
    cin>>N;
    for(i=0; i<=N; i++)
    {
        factorial(i);
    }
    return 0;
}
