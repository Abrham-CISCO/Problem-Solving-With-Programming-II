#include <iostream>
using namespace std;
//Inline function
/*
    an inline function is a function that is used to minimize time that is spend on excuting the same function multiple times.
    used for only multiple function calls
    best for function that is about to be called inside a loop
    While compiling the compiler prints the inline function near or at the function call.
    When the function is called it will just use the nearly printed inline function.
    This will minimize excution time because the program does not need to go to the function multiple times.
*/
inline double cube(float s)
{
    return s * s * s;
}
inline int inc(int a)
{
    return ++a;
}
int main()
{
    int a = 11;
    cout<<"The cube of 3 is: "<<cube(3.8)<<"\n";
    cout<<"Increamenting a " <<inc(a)<<"\n";
    return 0;
}
//Accept input
