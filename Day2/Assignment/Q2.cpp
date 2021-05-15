#include <iostream>
using namespace std;
//Exercise
//2. Write a function that can take two matrix and apply matrix addition.
float *addMatrix(float[],float[]);

int main()
{
    float mat1[5],mat2[5],*sum;
    cout << "Enter numbers of the first matrix separated by space: ";
    for(int i = 0; i<5 ; i++) cin >> mat1[i];
    cout << "Enter numbers of the second matrix separated by space: ";
    for(int i = 0; i<5 ; i++) cin >> mat2[i];
    cout << "The sum of these two matrix is ";
    sum = addMatrix(mat1,mat2);
    for(int i = 0; i<5 ; i++) cout<<*(sum+i)<<" ";
    return 0;
}

float *addMatrix(float nums1[], float nums2[])
{
    static float sum[5] = {};
    for(int i=0; i<5; i++)
    {
        sum[i] = nums1[i] + nums2[i];
    }
    return sum;
}
