#include <iostream>
#include <cstring>
using namespace std;
//String manipulation built-in function
int main()
{
    char a[25] = "This is the first string";
    cout << "The number of characters \t"<<strlen(a)<<endl;
    char b[50] = "abc ";
    //you will get an error message if the size of b is less than a
    cout << "copy the content of a to b \t"<<strcpy(b,a)<<endl;
    strncpy(b,a,4);
    //b[4] = 0;
    cout << "Copy part of string \t"<<b<<endl;
    char c[50] = "This is the second string";
    cout << "Concatenate a and b \t"<<strcat(a,b);
    return 0;
}
