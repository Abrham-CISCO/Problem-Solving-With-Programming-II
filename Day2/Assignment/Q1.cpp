#include <iostream>
using namespace std;
//Exercise
//1. Write a function that can take array and its size and compute average of decimals.
float average(float[],int);

int main()
{
    int n;
    float inpt[15];
    cout << "Enter an integer n: ";
    cin>>n;
    cout << "Enter numbers separated by space: ";
    for(int i = 0; i<n ; i++) cin >> inpt[i];
    cout << "The average is "<<average(inpt,n);
    return 0;
}

float average(float nums[], int aSize)
{
    float sum = 0, average;
    for(int i=0; i<aSize; i++)
    {
        sum += nums[i];
    }
    average = sum / aSize;
    return average;
}
