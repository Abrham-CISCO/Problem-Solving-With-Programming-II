#include <iostream>
using namespace std;
//using alias
void sample(int *y)
{
    cout<<"Inside the sample function x is "<<*y<<endl;
    *y = 15;
    cout<<"After assignment inside the sample function x is "<<*y<<endl;
}

int main()
{
    int x = 20;
    cout<<"before x is passed to the function at main function x is "
    <<x<<endl;
    sample(&x);
    cout<<"after x is passed to the function at main function x is "
    <<x<<endl;
    return 0;
}
