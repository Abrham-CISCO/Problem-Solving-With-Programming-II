#include <iostream>
using namespace std;
//Write a c++ structure to store personal information (Hint: use citizen ID or passport information)
//Structure declaration
struct book{
    int bookID, edition;
    string bookName;
    string Author;

} MyBook;
int main()
{
    cout<<"Enter first book bookID "<<endl;
    cin >> MyBook.bookID;
    cout<<"Enter first book edition "<<endl;
    cin >> MyBook.edition;
    cout<<"Enter first book bookName "<<endl;
    cin >> MyBook.bookName;
    cout<<"Enter first book Author "<<endl;
    cin >> MyBook.Author;
    cout<<MyBook.bookID<<" "<<MyBook.edition<<" "<<MyBook.bookName<<" "<<MyBook.Author;
    cout<<endl;
    return 0;
}
