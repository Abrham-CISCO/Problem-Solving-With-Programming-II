#include <iostream>
using namespace std;
//Structure array
struct student{
    int rollno, age;
    string name;
    float marks;
};
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
//defining a struct as a n array
    student stud[10];
//accessing a struct as an array
    for(int i =0; i<n; i++)
    {
        cout<<"Enter student "<<i+1<<" rollno :";
        cin >> stud[i].rollno;
        cout<<"Enter student "<<i+1<<" age :";
        cin >> stud[i].age;
        cout<<"Enter student "<<i+1<<" name :";
        cin >> stud[i].name;
        cout<<"Enter student "<<i+1<<" mark :";
        cin >> stud[i].marks;
    }
    for(int i =0; i<n; i++)
    {
        cout<<stud[i].rollno<<" "<<stud[i].age<<" "<<stud[i].name<<" "<<stud[i].marks;
        cout<<endl;
    }
    return 0;
}
