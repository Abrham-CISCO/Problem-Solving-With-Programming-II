#include <iostream>
using namespace std;
//Write a c++ structure to store personal information (Hint: use citizen ID or passport information)
//Structure declaration
struct citizen{
    int IdNo, age;
    string name;
    string sex;
    string telephone;
} person1;
int main()
{
    cout<<"Enter first person IdNo "<<endl;
    cin >> person1.IdNo;
    cout<<"Enter first person name "<<endl;
    cin >> person1.name;
    cout<<"Enter first person sex "<<endl;
    cin >> person1.sex;
    cout<<"Enter first person telephone "<<endl;
    cin >> person1.telephone;
    cout<<person1.IdNo<<" "<<person1.name<<" "<<person1.sex<<" "<<person1.telephone;
    cout<<endl;
    return 0;
}
