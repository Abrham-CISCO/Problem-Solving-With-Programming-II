#include <iostream>
#include <cstring>
using namespace std;
//String manipulation built-in function
int main()
{
    string a[25] = "This is the first string";
    cout << "The number of characters /t"<<strlen(a)<<endl;
    string b[50];
    //you will get an error message if the size of b is less than a
    //strcpy : appends to the last element
    cout << "copy the content of a to b /t"<<strcpy(b,a)<<endl;
    cout<<string a[]<<endl;
    cout<<string b[]<<endl;
    cout << "Copy part of string if /t"<<strncpy(b,a,4)<<endl;
    return 0;
}
