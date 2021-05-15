#include <iostream>
#include <math.h>
using namespace std;
/*

8.	Write a complete application that performs 3d vector operation.
The application allows the user to perform

finding magnitude of vector,
adding two vectors,
subtracting one vector from another,
dot product and cross product.

Use structure to represent the 3d vector.

*/
struct vector_3d {
    int x,y,z;
};

float magnitiude(vector_3d);
vector_3d add(vector_3d, vector_3d);
vector_3d subtract(vector_3d, vector_3d);
int dotProduct(vector_3d,vector_3d);
vector_3d crossProduct(vector_3d, vector_3d);

int main()
{
    vector_3d A,B,C;
    A = {1,2,3};
    B = {5,1,9};
    cout << magnitiude(A)<<endl;
    C = add(A,B);
    cout << magnitiude(C)<<endl;
    C = subtract(A,B);
    cout << magnitiude(C)<<endl;
    cout<<dotProduct(A,B)<<endl;
    C = crossProduct(A,B);
    cout << magnitiude(C)<<endl;
    return 0;
}

float magnitiude(vector_3d A)
{
    return sqrt(pow(A.x,2) + pow(A.y,2) + pow(A.z,2));
}
vector_3d add(vector_3d A, vector_3d B)
{
    vector_3d i;
    i.x = A.x + B.x;
    i.y = A.y + B.y;
    i.z = A.z + B.z;
    return i;
}
vector_3d subtract(vector_3d A, vector_3d B)
{
    vector_3d i;
    i.x = A.x - B.x;
    i.y = A.y - B.y;
    i.z = A.z - B.z;
    return i;
}
int dotProduct(vector_3d A, vector_3d B)
{
    return(A.x * B.x + A.y * B.y + A.z * B.z);
}
vector_3d crossProduct(vector_3d A, vector_3d B)
{
    vector_3d i;
    i.x = A.y*B.z - A.z*B.y;
    i.y = A.z*B.x - A.x*B.z;
    i.z = A.x*B.y - A.y*B.x;
    return i;
}
