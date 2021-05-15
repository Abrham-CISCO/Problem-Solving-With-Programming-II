#include <iostream>
using namespace std;
//function return array as a pointer
int *fun()
{
    static int arr[10] = {10,20,30,40,50};
    return arr;
}
int main()
{
    int *ptr=fun();
    //cout<<ptr[0]<<ptr[1]<<ptr[2]<<ptr[3]<<ptr[4];
    for(int i = 0; i<5; i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}
