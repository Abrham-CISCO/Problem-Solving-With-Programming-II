#include <iostream>
using namespace std;
//structure members can either be a function or variable.
struct Person{
    //functions that are defined inside a struct block has the structure scope.
    //Like any other case with blocks
    char name[50]="Mr.Abebe";
    int age=50;
    float salary=5000;
    void display()
    {
        cout<<name<<" "<<age<<" "<<salary;
    }
    float get_salary()
    {
        return salary;
    }
};
void show(Person s)//also, it is possible to use &s, s[], *s are possible instead of s.
{
    cout<<s.name<<" "<<s.age<<" "<<s.salary<<endl;
    //for pointer parameter accepted as *s
    //cout<<s->name<<" "<<s->age<<" "<<s->salary<<endl;

    /*
    for array
    for(int i=0; i<9;i++)
    {
        cout<<s[i].name<<" "<<s[i].age<<" "<<s[i].salary<<endl;
    }*/
}
//accepting user defined data type as a pointer
void show(Person *s)
{
    //for pointer parameter accepted as *s
    cout<<"From a function that accepts data structure as a pinter "<<endl;
    cout<<s->name<<" "<<s->age<<" "<<s->salary<<endl;
}
//a function that returns a structure
Person readInput(Person w)
{
    cout<<"Enter name ";
    cin>>w.name;
    cout<<"Enter age ";
    cin>>w.age;
    cout<<"Enter salary ";
    cin>>w.salary;
    return w;
}
int main()
{
    Person p1 = {};
    p1.display();
    cout<<endl;
    cout<<p1.name<<" "<<p1.age<<" "<<p1.get_salary()<<endl;
    p1 = readInput(p1);
    show(&p1);
    return 0;
}
