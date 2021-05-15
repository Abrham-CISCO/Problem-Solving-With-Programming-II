//Question 1
//Question 2: Write a function that swaps contents of 2 variables
//Question 3: Write a function to display the message "Hello" 5 times in different part of a program.
#include <iostream>
const float PI = 3.14f;
using namespace std;
float areaRectangle(float, float);
float areaCircle(float);
int main()
{
    cout << "Area of a rectangle with length 12 and width 15 is "<< areaRectangle(12,15);
    cout << "Area of a circle with radius 15 is "<< areaCircle(15);
    return 0;
}
float areaRectangle(float length, float width)
{
    return length * width;
}
float areaCircle(float radius)
{
    return (PI * radius * radius)
}
