//5,6,7,8,12
#include <iostream>
using namespace std;

 int Prototype(int x=8, int y, float z=6.2);

void func1(int& x, int y, int&z);
void func2(int& x, int y, int z);
int main()
{
    int a=10, b=50,c=40;
    func1(a,b,c);
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
void func1(int&x, int y, int &z)
{
    cout<<x<<" "<<y<<" "<<z<<endl;
    y=y+x+z;
    z=y-x;
    func2(x,y,z);
    cout<<x<<" "<<y<<" "<<z<<endl;
}
void func2(int& x, int y, int z)
{
    cout<<x<<" "<<y<<" "<<z<<endl;
    y=x+z;
    z=y-x;
    x=z-y;
}

/*
The output is
10 50 40
10 100 90
-10 100 90
-10 50 90

*/
