#include <iostream>
using namespace std;
int main()
{
    string str1 = "String manipulation";
    cout << "Size of a string \t"<<str1.length()<<endl;
    cout << "Size/Length of a string \t"<<str1.size()<<endl;
    cout << "Symbol at 5 \t" << str1.at(5)<<endl;
    for(int i = 0; i<19; i++)
    {
        cout << "Symbol at "<<i<<" \t" << str1.at(i)<<endl;
    }
    cout << "insert symbol \t"<<str1.insert(7,"m")<<endl;
    cout << "Append New String in str1 \t"<<str1.append(" This is the appended string")<<endl;
    string str2 = " c++ built-in function";
//    str1.swap(str2);
//    cout<<"new content of str1 is \t"<<str1<<endl;
//    cout<<"new content of str2 is \t"<<str2<<endl;
    //Sub string
    cout << "Sub String / Part of string \t"<< str1(5,6);
}
