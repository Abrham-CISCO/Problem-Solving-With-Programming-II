#include <iostream>
using namespace std;
//function return array as a pointer
int *fun()
{
    static int arr[10] = {};
    cout << "Enter 10 integers separated by space: ";
    for(int i; i<5; i++) cin>>arr[i];
    return arr;
}
int main()
{
    int *ptr=fun();
    //cout<<ptr[0]<<ptr[1]<<ptr[2]<<ptr[3]<<ptr[4];
    for(int i = 0; i<10; i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}
