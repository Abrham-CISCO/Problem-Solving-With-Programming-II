#include <iostream>
using namespace std;
void function1(void); //you can ommit the void parameter by default () is considered as with void
void function2(void)
{
    cout<<"Writing in function2\n";
}
int main()
{
    cout<<"writing in main\n";
    function1();
    return 0;
}
void function1(void)

{
    cout<<"writing in function1\n";
    function2();
}
