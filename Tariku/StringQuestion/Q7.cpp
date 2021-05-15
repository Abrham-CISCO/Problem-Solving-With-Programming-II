#include <iostream>
using namespace std;
int main()
{
    char str1[500];
    int vowelCounter = 0, i=0;
    cout << "Enter a string: ";
    cin.getline(str1,500);
    while(str1[i] != 0)
    {
        if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u') vowelCounter++;
        if(str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U') vowelCounter++;
        i++;
    }
    cout << "The number of vowels is "<<vowelCounter;
    return 0;
}
