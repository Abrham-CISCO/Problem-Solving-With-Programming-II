#include <iostream>
using namespace std;
char *str = "Trust";
void Print(char *str="Peace"){
{
      char *str = "Love";
      cout << str << "\n";
      cout << ::str << "\n";
}
cout << str << "\n";
cout << str  << " is the best"<< "\n";
}
int main (void)
{
    Print();
    cout << str <<"?"<<"\n";
    return 0;
}

/*

Love
Trust
Peace
Peace is the best
Trust?

*/
