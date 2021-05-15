#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
/*
AuthorName"Book Name"ISBN"ShelfNo"row"date"month"year"Edition"quantity"BookCategory4"-
*/

struct date {
    int day, month, year;
};
struct book{
    string authorName,bookName,ISBN,BookCategory;
    int ShelfNo,Edition,row,Quantity;
    date PublishedDate;
};

int readFile(book[]);
book findSingleBook(string, book[],int);

int main()
{
    book myBook[100], foundBook;
    int bookCount;
    bookCount = readFile(myBook);
        cout<<"There are "<<bookCount<<" count."<<endl;
        for(int i = 0; i<bookCount;i++)
        {
            cout<<myBook[i].authorName<<endl;
            cout<<myBook[i].bookName<<endl;
            cout<<myBook[i].ISBN<<endl;
            cout<<myBook[i].ShelfNo<<endl;
            cout<<myBook[i].row<<endl;
            cout<<myBook[i].PublishedDate.day<<endl;
            cout<<myBook[i].PublishedDate.month<<endl;
            cout<<myBook[i].PublishedDate.year<<endl;
            cout<<myBook[i].Edition<<endl;
            cout<<myBook[i].Quantity<<endl;
            cout<<myBook[i].BookCategory<<endl<<endl<<endl;
        }
        foundBook = findSingleBook("ISBN2",myBook,bookCount);
            cout<<"ISBN 2 : Search Result:"<<endl;
            cout<<foundBook.authorName<<endl;
            cout<<foundBook.bookName<<endl;
            cout<<foundBook.ISBN<<endl;
            cout<<foundBook.ShelfNo<<endl;
            cout<<foundBook.row<<endl;
            cout<<foundBook.PublishedDate.day<<endl;
            cout<<foundBook.PublishedDate.month<<endl;
            cout<<foundBook.PublishedDate.year<<endl;
            cout<<foundBook.Edition<<endl;
            cout<<foundBook.Quantity<<endl;
            cout<<foundBook.BookCategory<<endl<<endl<<endl;
    return 0;
}

int readFile(book myBook[])
{
    int i=0, clmn=0, init=0,bookCount=0;
    char tmp[100] = {}, *location;
    string line;
    ifstream bookFile ("sampleFile.txt");
    if(bookFile.is_open())
    {
        while(getline(bookFile,line))
        {
            i=0,clmn=0,init=0;
            while(line[i] != '-')
            {
                if(line[i]=='\"')
                {
                    clmn++;
                    switch(clmn) {
                       case 1:
                          myBook[bookCount].authorName = line.substr(init,i-init);
                          break;
                       case 2:
                          myBook[bookCount].bookName = line.substr(init,i-init);
                          break;
                       case 3:
                          myBook[bookCount].ISBN = line.substr(init,i-init);
                          break;
                       case 4:
                          myBook[bookCount].ShelfNo = stoi(line.substr(init,i-init));
                          break;
                       case 5:
                          myBook[bookCount].row = stoi(line.substr(init,i-init));
                          break;
                       case 6:
                          myBook[bookCount].PublishedDate.day = stoi(line.substr(init,i-init));
                          myBook[bookCount].PublishedDate.month = stoi(line.substr(init,i-init));
                          myBook[bookCount].PublishedDate.year = stoi(line.substr(init,i-init));
                          break;
                       case 7:
                          myBook[bookCount].Edition = stoi(line.substr(init,i-init));
                          break;
                       case 8:
                          myBook[bookCount].Quantity = stoi(line.substr(init,i-init));
                          break;
                       case 9:
                          myBook[bookCount].BookCategory = line.substr(init,i-init);
                          break;

                       // you can have any number of case statements.
                       //default : //Opti
                    }

                    init = i+1;
                }
                i++;
            }
            bookCount++;
        }
        bookFile.close();
        return bookCount;
    }else
    {
        cout<<"File not found";
        return 0;
    }
}

book findSingleBook(string ISBN, book books[], int bookCount)
{
    for(int i = 0; i<bookCount; i++)
    {
        if(books[i].ISBN == ISBN)
        {
            return books[i];
        }
    }
}
