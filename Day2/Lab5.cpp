#include <iostream>
using namespace std;
void sum(int[]); //Whilst function declaration that accepts array parameters you don't need to mention the parameter array name and size;
int main()
{
    int a[5] = {10,20,30,40,50},n;
    sum(a);
    cout<<"Enter the size of the array: ";
    cin>>n'
    for(int i = 0; i<=n; i++) cin>>a[i];
    return 0;
}
void sum(int arr[8]) //you can leave the index 8 out it is not necessary.
{
    int sum = 0;
    for(int i=0; i<8; i++) sum=sum+arr[i];
    cout<<sum<<endl;
}


//Exercise
//1. Write a function that can take array and its size and compute average of decimals.

//2. Write a function that can take two matrix and apply matrix addition.
