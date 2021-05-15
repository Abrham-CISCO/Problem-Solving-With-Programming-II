#include <iostream>
using namespace std;

int main()
{
    char userInput[100];
    int int1, int2, int3, i =0, temporary, temp2;
    cout << "Enter a number :";
    cin.getline(userInput,100);
    while(userInput[i] != 0)
    {
        int1 = int(userInput[i]) - 48;
        int2 = int(userInput[i + 1]) - 48;
        int3 = int(userInput[i + 2]) - 48;
        if(temporary != int1 && temp2 != int1 )cout<<int1;
        if((int(userInput[0]) - 48)%2 !=0 && i == 0) cout<<'-';
        if(int2 % 2 != 0)
        {
            cout<<int2;
            if(int3 % 2 != 0) cout << '-';
            temporary = int2;
        }
        else if(int2 % 2 == 0 && userInput[i+1]!=0)
        {
            temp2 = int2;
            cout<<int2;
        }
        i++;
    }
    return 0;
}
