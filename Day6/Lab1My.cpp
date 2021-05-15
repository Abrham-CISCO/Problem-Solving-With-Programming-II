#include <iostream>
using namespace std;
//Nested Structure
int main()
{

    struct person{
        string name;
        int age;
        // here in this block or in any structure declaration "struct address addr;" is the same as "address addr;"
        struct address {
            string state;
            //Assigning default value
            int house_no = 12345;
            string email;
            long int phone_number;
        } addr;
    };
    //Initialized with nothing
    struct person p1={};
    cout<<p1.name<<" "<<p1.age<<" "<<p1.addr.state<<" "<<p1.addr.house_no<<" "<<p1.addr.email<<" "<<p1.addr.phone_number;
    cout<<endl;
    struct person p2={"Jhon", 30,{"DC",5728,"jhon@gmail.com",251897654}};
    struct person p3={name:"Jhon", age:30,{state:"DC",5728,email:"jhon@gmail.com",phone_number:251897654}};
    cout<<p2.name<<" "<<p2.age<<" "<<p2.addr.state<<" "<<p2.addr.house_no<<" "<<p2.addr.email<<" "<<p2.addr.phone_number;
    cout<<endl;
    cout<<p3.name<<" "<<p3.age<<" "<<p3.addr.state<<" "<<p3.addr.house_no<<" "<<p3.addr.email<<" "<<p3.addr.phone_number;
    cout<<endl;
    return 0;
}
