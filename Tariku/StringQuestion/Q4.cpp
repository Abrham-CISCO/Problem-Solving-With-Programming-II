#include <iostream>
#include <cstring>
using namespace std;
const int SIZE = 100;
int main()
{
    int maxCharacterCount = 0, characterCounter=0, i=0, j=0, k=0;
    char inpt[SIZE];
    char largestWord[SIZE];
    cout << "Enter a string: ";
    cin.getline(inpt, SIZE);
    while(inpt[i] != '*')
    {
        if(inpt[i] == 0) {
            inpt[i] = ' ';
            inpt[i+1] = '*';
        }
        if(inpt[i] != ' ')
        {
            characterCounter++;
        }
        else
        {
            if(maxCharacterCount < characterCounter)
            {
                maxCharacterCount = characterCounter;
                j = i - maxCharacterCount;
                k=0;
                for(int l=0; l<SIZE; l++) largestWord[l] = ' ';
                while(j < i)
                {
                    largestWord[k] = inpt[j];
                    k++;
                    j++;
                }
            }
            characterCounter = 0;
        }
        i++;
    }
    cout << "The Largest Word is: "<<largestWord;
    return 0;
}

    /*do
    {
        if(invalidInpt)
        {
                    invalidInpt = false;
            cout << "Invalid Input! a word can not contain a character other than elements of alphabet!"<<endl;

        }
        cout << "Enter a string: ";
        for(int l=0; l<SIZE; l++) inpt[l] = ' ';
        cin.getline(inpt, SIZE);
        while(inpt[i] != 0)
        {
            if(!(inpt[i] > 'a' && inpt[i] < 'z' || inpt[i] > 'A' && inpt[i] < 'Z' || inpt[i] == ' '))
            {
                invalidInpt = true;
            }
            i++;
        }

    }while(invalidInpt);*/
