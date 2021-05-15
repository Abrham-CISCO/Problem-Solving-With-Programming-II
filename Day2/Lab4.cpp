#include <iostream>
using namespace std;
/* increament(x)
Illustrates pass by value protocol.
Parameters can be ordinary, array, (address, pointer >> Modifies the original value)
The following codes are written by taking parameter via address into consideration
the lab demonstrates that the operation done on a parameter that is passed as an address
does affect the original variable (Variable mantioned by the address)
*/
void increament(int &x)
{
    cout << "Beginning execution of increament,x="<<x<<'\n';
    x++; //Increament x
    cout<<"Ending execution of increament,x="<<x<<'\n';
}
int main()
{
    int x=5;
    cout<<"Before increment, x="<<x<<"\n";
    increament(x);
    cout<<"After increment, x="<<x<<"\n";
}
