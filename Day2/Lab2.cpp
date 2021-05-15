#include <iostream>
using namespace std;
/*
    Here, you are not required to provide function declaration because the
    function is defined or written prior to the main function.
*/
//Definition of the prompt function
int prompt()
{
    int num;
    cout << "Please enter an integer value: ";
    cin>>num;
    return num;
}
int main()
{
    int value1, value2, sum = 0;
    cout<<"This program adds together two integers.\n";
    value1 = prompt();
    value2 = prompt();
    sum = value1 + value2;
    cout << value1<<"+"<<value2<<"="<<sum<<"\n";
}
