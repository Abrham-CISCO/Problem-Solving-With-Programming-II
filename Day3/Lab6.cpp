#include <iostream>
using namespace std;

//default parameter value
int product(int a=100, int b=25)
{
    return (a*b);
}
int main()
{
    cout<<product()<<endl;
    cout<<product(25)<<endl;
}
