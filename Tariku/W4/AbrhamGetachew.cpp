#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line;
    ifstream bookFile ("sampleFile.txt");
    if(bookFile.is_open())
    {
        while(getline(bookFile,line))
        {
            cout<<line<<endl;
        }
        bookFile.close();
    }else
    {
        cout<<"File not found";
    }
    return 0;
}
