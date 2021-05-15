#include <iostream>
using namespace std;
//function overloading is the process of defining a function with the same name but with
//different parameter order, type and count.
int add(int x, int y)
{
    return(x+y);
}
int add(int x, int y, int z)
{
    return(x+y+z);
}
float add(float x, double y)
{
    return(x+y);
}
int main()
{
    int x,y,z;
    float a,b;
    cout <<"Enter x: ";
    cin >> x;
    cout <<"Enter y: ";
    cin >> y;
    cout <<"Enter z: ";
    cin >> z;
    cout <<"Enter a: ";
    cin >> a;
    cout <<"Enter b: ";
    cin >> b;
    //Assignment : accept input from key board
    cout<<add(x,y)<<endl;
    cout<<add(x,y,z)<<endl;
    cout<<add(a,b)<<endl;
    return 0;
}
