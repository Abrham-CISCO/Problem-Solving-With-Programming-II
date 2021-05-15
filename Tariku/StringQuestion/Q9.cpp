#include <iostream>
using namespace std;
int main(){
    int i=0, char1Counter=0, char2Counter=0;
    char str[50] = {}, char1, char2;
    cout << "Enter a string : ";
    cin.getline(str,50);
    cout << "Enter character 1: ";
    cin >> char1;
    cout << "Enter character 2: ";
    cin >> char2;
    while(str[i] != 0)
    {
        if(str[i] == char1) char1Counter++;
        if(str[i] == char2) char2Counter++;
        i++;
    }
    cout << char1 << " is present " << char1Counter << " times."<<endl;
    cout << char2 << " is present " << char2Counter << " times."<<endl;
    if(char1Counter == char2Counter)
    {
        cout << "Thus," << char1 <<" and "<< char2 <<" are present equal times in the string \""<<str<<"\"";
    }
    else if(char1Counter > char2Counter)
    {
        cout << "Thus," << char1 <<" is more present than " << char2 << " in the string \""<<str<<"\"";
    }
    else
    {
        cout << "Thus," << char2 <<" is more present than " << char1 << " in the string \""<<str<<"\"";
    }
    return 0;
}
