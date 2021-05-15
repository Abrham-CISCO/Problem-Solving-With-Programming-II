#include <iostream>
using namespace std;

/*

Write a complete program that allows users to manipulate fractions: Add, subtract, multiply,
and divide, Input must be accepted in a/b form. Result also must be displayed in the same
format and should be also in reduced form. Use modular approach.

Required functions
    1. Add
    2. Subtract
    3. Multiply
    4. divide
    5. input
    6. result
    7. reduce
    8. Menu
    9. validateFraction
    10.acceptInput
*/

struct fraction {
    int a;
    int b;
};

int menu(void);
void acceptInput(fraction*,fraction*);
fraction reduce(fraction);
void displayResult(fraction,fraction,fraction,int);
fraction multiply(fraction,fraction);
fraction add(fraction,fraction);
fraction divide(fraction,fraction);
fraction subtract(fraction,fraction);
fraction validateFraction(int,char,int);

int main()
{
    fraction a,b,c;
    int choice = menu();
    acceptInput(&a,&b);
    switch(choice) {
        case 1:
            c = add(a,b);
            break;
        case 2:
            c = subtract(a,b);
            break;
        case 3:
            c = multiply(a,b);
            break;
        case 4:
            c = divide(a,b);
            break;
    }
    c = reduce(c);
    displayResult(a,b,c,choice);
    return 0;
}

int menu(void)
{
    int choice;
    do {
        cout<<"Welcome to calculator"<<endl;
        cout<<"What would you like to do?"<<endl;
        cout<<"Enter 1 for addition"<<endl;
        cout<<"Enter 2 for subtraction"<<endl;
        cout<<"Enter 3 for multiplication"<<endl;
        cout<<"Enter 4 for division"<<endl;
        cin >> choice;
        if(choice > 4 || choice < 1)
        {
            cout<<"Invalid Input! Please try again."<<endl;
        }
    }while(choice > 4 || choice < 1);
    return choice;
}
fraction validateFraction(int a, char b, int c)
{
    //check if b is '/' and check if c <> 0
    fraction d = {0,0};
    if(c != 0 && b == '/'){
        d.a = a;
        d.b = c;
        return d;
    }
    else return d;
}
void acceptInput(fraction *a,fraction *b)
{
    int c,d;
    char e;
    do
    {
        cout<<"Enter the first fraction: ";
        cin>>c>>e>>d;
        *a = validateFraction(c,e,d);
        if(a->b == 0) cout<<"Invalid Input! Please Try again."<<endl;
    } while (a->b == 0);
    do
    {
        cout<<"Enter the second fraction: ";
        cin>>c>>e>>d;
        *b = validateFraction(c,e,d);
        if(b->b == 0) cout<<"Invalid Input! Please Try again."<<endl;
    } while (b->b == 0);
}
fraction reduce(fraction a)
{
    int min;
    if(a.a>a.b) min=a.b;
    else min=a.a;
    for(int i = 1; i <= min; i++)
        if(a.a%i==0)
            if(a.b%i==0)
            {
                a.a=a.a/i;
                a.b=a.b/i;
                i=1;
            }
    return a;
}
void displayResult(fraction a,fraction b, fraction c,int opType)
{
    cout<<a.a<<"/"<<a.b;
    switch(opType) {
        case 1:
            cout<<" + ";
            break;
        case 2:
            cout<<" - ";
            break;
        case 3:
            cout<<" * ";
            break;
        case 4:
            cout<<" / ";
            break;
    }
    cout<<b.a<<"/"<<b.b<<" = ";
    if(c.a == c.b) cout<<1;
    else cout<<c.a<<"/"<<c.b;
}
fraction multiply(fraction a,fraction b)
{
    fraction result;
    result.a = a.a * b.a;
    result.b = a.b * b.b;
    return result;
}
fraction add(fraction a,fraction b)
{
    fraction result;
    result.a = a.a * b.b + a.b * b.a;
    result.b = a.b * b.b;
    return result;
}
fraction divide(fraction a,fraction b)
{
    fraction result;
    result.a = a.a * b.b;
    result.b = a.b * b.a;
    return result;
}
fraction subtract(fraction a,fraction b)
{
    fraction result;
    result.a = a.a * b.b - a.b * b.a;
    result.b = a.b * b.b;
    return result;
}
