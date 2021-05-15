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
    int value[45], sum = 0, n;
    cout<<"This program adds together two integers.\n";
    cout<<"how many numbers you want to insert\n";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        value[i] = prompt();
        sum+=value[i];
    }
    cout << "sum is \t"<<sum<<"\n";
}
