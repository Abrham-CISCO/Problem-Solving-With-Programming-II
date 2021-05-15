#include <iostream>
using namespace std;
void Func(int a ){
   while (a != 0 ){
      static int n = a;
       int x = 0;
       cout << "x = " << ++x << ", n = " << ++n + x  << "\n";
       a--; }
    }	int main (void)
{
    Func(4);
    return 0;
}

/*
x = 1, n = 6
x = 1, n = 7
x = 1, n = 8
x = 1, n = 9
*/
