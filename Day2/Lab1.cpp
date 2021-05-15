#include <iostream>
//Notes
/*
     you can use cmath instead of math.h. these files contain built in math functions.

*/
using namespace std;
#include <math.h>
int main()
{
    int x;
    cout<<"Enter the value of x\t";
    cin>>x;
    cout<<sqrt(x);
    cout<<endl;
    cout<<max(10,6);
    cout<<endl;
    cout<<exp(5);
    cout<<endl;
    cout<<log(5);// The base here is e.
    cout<<endl;
    cout<<log10(10); //The base here is 10.
    cout<<fabs(-25);
    cout<<endl;
    cout<<sin(30);
    cout<<pow(2,5);
    cout<<endl;
    cout<<endl;
    cout<<round(5.7);
    cout<<endl;
    return 0;
}
