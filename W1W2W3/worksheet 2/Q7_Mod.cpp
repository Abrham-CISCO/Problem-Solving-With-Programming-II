#include <iostream>
using namespace std;
int f1(int&);
int f2(int&);
int n = 6;
int main ()
{
    cout<<f2(n);
    system("pause");
    return 0;
}
int f1(int &m) {
     if (m==0)
        return 1;
     else
        return m* f2(--m);
}
int f2(int &n) {
     if (n==0)
        return 1;
     else
       return n*f1(--n);
}
