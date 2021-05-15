#include <iostream>
using namespace std;
//Write a C++ program to find the largest word in a given string.
int main()
{
    char str[150], strMax[100];
    int i=0, numberOfCharacters = 0, maxNumberOfCharacters = 0;
    cout << "Enter a string: ";
    cin.getline(str,150);
    while(str[i] != '*')
    {
        if(str[i] == 0) {
            str[i] = ' ';
            str[i+1] = '*';
        }
        if(str[i] != ' ')
        {
            numberOfCharacters++;
        }
        else
        {
            if(numberOfCharacters > maxNumberOfCharacters)
            {
                maxNumberOfCharacters = numberOfCharacters;
                for(int j = 0; j < maxNumberOfCharacters; j++)
                {
                    strMax[j] = str[i - maxNumberOfCharacters + j];
                }
                strMax[maxNumberOfCharacters] = 0;
            }
            numberOfCharacters = 0;
        }
        i++;
    }
    //This is a string
    cout << "The largest string is " <<strMax;
    return 0;
}
