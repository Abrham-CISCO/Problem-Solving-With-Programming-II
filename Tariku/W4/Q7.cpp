#include <iostream>
using namespace std;

struct student {
    int id;
    char firstName[20];
    char lastName[20];
    char sex;
};

struct course {
    int student_Id;
    int course_Id;
    char courseCode[5];
    char courseName[40];
};

student readStud(void);
course ReadCourseRec(void);
void search(course[], int, int);
void studReport(student[],int);
void courseReport(course[],int);

int main()
{
    student stu[100];
    course crs[100];

    int crs_No, stu_No,sid;
    cout<<"How many courses do you want to add? ";
    cin>>crs_No;
    cout<<"How many students do you want to add? ";
    cin>>stu_No;
    for(int i=0; i<stu_No; i++)
    {
        stu[i] = readStud();
    }
    for(int i=0; i<crs_No; i++)
    {
        crs[i] = ReadCourseRec();
    }
    studReport(stu,stu_No);
    courseReport(crs,crs_No);
    cout<<endl<<"Search for a course with a studentId";
    cout<<endl<<"StudentId : ";
    cin>>sid;
    search(crs,sid,crs_No);
    return 0;
}

student readStud(void)
{
    student stu;
    cout<<endl<<"Student Id:";
    cin>>stu.id;
    cout<<"First Name:";
    cin>>stu.firstName;
    cout<<"Last Name:";
    cin>>stu.lastName;
    cout<<"Sex:";
    cin>>stu.sex;
    return stu;
}
course ReadCourseRec(void)
{
    course crs;
    cout<<endl<<"Student Id:";
    cin>>crs.student_Id;
    cout<<"Course Id:";
    cin>>crs.course_Id;
    cout<<"Course Code:";
    cin>>crs.courseCode;
    cout<<"Course Name:";
    cin>>crs.courseName;
    return crs;
}
void search(course crs[], int studentId, int count)
{
    course result;
    int i;
    bool found = false;
    for(int in = 0; in<count; in++)
    {
        if(crs[i].student_Id == studentId)
        {
            found = true;
            i = in;
        }
    }
    if(found)
    {
            cout<<"Student Id:";
            cout<<crs[i].student_Id<<endl;
            cout<<"Course Id:";
            cout<<crs[i].course_Id<<endl;
            cout<<"Course Code:";
            cout<<crs[i].courseCode<<endl;
            cout<<"Course Name:";
            cout<<crs[i].courseName<<endl;
    }
    else
    {
        cout<<"Course not found!";
    }
}
void studReport(student st[], int count)
{
    cout<<"Student Id"<<" ";
    cout<<"First Name"<<" ";
    cout<<"Last Name"<<" ";
    cout<<"Sex:"<<endl;
    for(int i=0; i<count; i++)
    {
        cout<<st[i].id<<" ";
        cout<<st[i].firstName<<" ";
        cout<<st[i].lastName<<" ";
        cout<<st[i].sex<<endl;
    }
}
void courseReport(course cs[], int count)
{
    cout<<"Student Id"<<" ";
    cout<<"Course Id"<<" ";
    cout<<"Course Code"<<" ";
    cout<<"Course Name"<<endl;
    for(int i = 0; i<count; i++)
    {
        cout<<cs[i].student_Id<<" ";
        cout<<cs[i].course_Id<<" ";
        cout<<cs[i].courseCode<<" ";
        cout<<cs[i].courseName<<endl;
    }
}
