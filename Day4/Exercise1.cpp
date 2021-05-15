#include <iostream>
using namespace std;
//Write an inline function that takes an array and return the largest element of the arrays.
inline largest(int nums[])
{
    int maximum = 0;
    for(int i=0; i<5; i++)
    {
        if(maximum<nums[i]) maximum = nums[i];
    }
    return maximum;
}
int main()
{
    int nums[5] = {};
    cout<<"Enter 5 integers separated by space: ";
    for(int i=0; i<5; i++)
    {
        cin>>nums[i];
    }
    cout<<"The maximum number is "<<largest(nums);
    return 0;
}
