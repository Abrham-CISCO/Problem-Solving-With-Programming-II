#include <iostream>
//passing arguements to function can be done in two ways by value and by reference.
//by default we are passing by value. by reference means using memory address and usually done using a pointer variable
//for example int sum(int *x, int *y) here by reference method is used.
using namespace std;
int sum(int,int);
int main()
{
    int a = 10, b = 20;
    cout << "The sum of a and b is \t"<<sum(a,b);
    return 0;
}
int sum (int x, int y) {
    return (x + y);
}
function_X(x=0,y=1)
