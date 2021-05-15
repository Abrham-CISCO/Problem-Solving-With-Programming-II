#include <iostream>
using namespace std;
//Default values
int add(int, int a=2, int h = 10); // Assigning default value at function declaration / prototype. It is advised
int main()
{
    int x,y,z;
    cout<<"Enter the values of x, y and z separated by space: ";
    cin>>x>>y>>z;
    cout<<endl<<add(x);
    cout<<endl<<add(x,y);
    cout<<endl<<add(x,y,z);
    return 0;
}
int add(int x, int y, int z)
{
    return (x + y + z);
}
