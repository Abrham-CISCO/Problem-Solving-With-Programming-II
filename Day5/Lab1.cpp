#include <iostream>
using namespace std;

//Structure declaration
struct student{
    int rollno, age;
    string name;
    float marks;
} s1,s4;
//structure is a way to organize similar data
//also student s1,s2,s3 is possible
int main()
{
    //structure variable declaration inside main function
    //student s1;
    cout<<"Enter first student rollno "<<endl;
    cin >> s1.rollno;
    cout<<"Enter first student age "<<endl;
    cin >> s1.age;
    cout<<"Enter first student name "<<endl;
    cin >> s1.name;
    cout<<"Enter first student mark "<<endl;
    cin >> s1.marks;
    cout<<s1.rollno<<" "<<s1.age<<" "<<s1.name<<" "<<s1.marks;
    cout<<endl;
    //Initializing a struct
    student s2 = {100, 17, "Aster",92};
    cout<<s2.rollno<<" "<<s2.age<<" "<<s2.name<<" "<<s2.marks;
    cout<<endl;
    student s3;
    s3 = s2; //Copying structs
    cout<<s3.rollno<<" "<<s3.age<<" "<<s3.name<<" "<<s3.marks;
    return 0;
}
