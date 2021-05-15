#include <iostream>
using namespace std;
int main()
{
    char str[50];
    int i=0;
    cout << "Enter String: ";
    cin.getline(str,50);
    while(str[i] != 0)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    cout << "The given string with a case changed from lower to upper or upper case is " <<endl<< str;
    return 0;
}
