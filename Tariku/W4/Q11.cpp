#include<iostream>
#include<cmath>
using namespace std;

struct complex_number {
  int real , imag;
};

int real(complex_number);
int imag(complex_number);
complex_number add(complex_number,complex_number);
complex_number sub(complex_number,complex_number);
complex_number multi(complex_number,complex_number);
complex_number div(complex_number,complex_number);
float modulusF(complex_number);
complex_number Input();
complex_number conjugate(complex_number);
void display(complex_number);
int menu();

int main (){
    bool stop = false;
    complex_number A,B;
    enum choice{inputC=1,realC,imagC,conjugateC,addC,subC,mulC,divideC,modulusC,displayC,exitC};
    do
    {
        switch(menu())
        {
        case inputC:
            A = Input();
            B = Input();
            break;
        case realC:
            cout<<"Real: "<<real(A);
            break;
        case imagC:
            cout<<"Imaginary: "<<imag(A);
            break;
        case conjugateC:
            display(conjugate(A));
            break;
        case addC:
            display(add(A,B));
            break;
        case subC:
            display(sub(A,B));
            break;
        case mulC:
            display(multi(A,B));
            break;
        case divideC:
            display(div(A,B));
            break;
        case modulusC:
            cout<<endl<<"Modulus of A is "<<modulusF(A);
            break;
        case displayC:
            display(A);
            display(B);
            break;
        case exitC:
            stop = true;
            break;
    }

    }while(!stop);
}


complex_number add(complex_number A,complex_number B){
    complex_number C;
    C.real = A.real + B.real;
    C.imag = A.imag + B.imag;
    return C;
}

complex_number sub(complex_number A,complex_number B){
    complex_number C;
    C.real = A.real - B.real;
    C.imag = A.imag - B.imag;
    return C;
}

complex_number multi(complex_number A,complex_number B){
    complex_number C;
    C.real = A.real * B.real - A.imag * B.imag;
    C.imag = A.imag * B.real + A.real * B.imag;
    return C;
}

complex_number div(complex_number A,complex_number B){
    complex_number C;
    float cd = B.real * B.real + B.imag * B.imag;
    C.real = (A.real * B.real + A.imag * B.imag) / cd;
    C.imag = ((-1 * A.imag * B.real) + A.real * B.imag) / cd;
    return C;
}

float modulusF(complex_number A){
 float rem = sqrt(pow(A.real,2) + pow(A.imag,2));
 return  rem;
}

int real(complex_number A)
{
    return A.real;
}

int imag(complex_number A)
{
    return A.imag;
}

complex_number Input()
{
    complex_number A;
    cout<<endl<<"real: ";
    cin>>A.real;
    cout<<"imaginary: ";
    cin>>A.imag;
    return A;
}
complex_number conjugate(complex_number A)
{
    A.imag = A.imag * (-1);
    return A;
}

void display(complex_number A)
{
    if(A.imag > 0)
        cout<<endl<<A.real<<" + "<<A.imag<<"i";
    else if(A.imag < 0)
        cout<<endl<<A.real<<A.imag<<"i";
    else
        cout<<endl<<A.real;
}

int menu()
{
    int inpt;
    do
    {
        cout<<endl<<"Press 1 to enter complex number A and B"<<endl;
        cout<<"Press 2 to display real part of A"<<endl;
        cout<<"Press 3 to display imaginary part of A"<<endl;
        cout<<"Press 4 to calculate conjugate of A"<<endl;
        cout<<"Press 5 to add A and B"<<endl;
        cout<<"Press 6 to subtract A and B"<<endl;
        cout<<"Press 7 to multiply A and B"<<endl;
        cout<<"Press 8 to divide A and B"<<endl;
        cout<<"Press 9 to find out modulus of A"<<endl;
        cout<<"Press 10 to display A and B"<<endl;
        cout<<"Press 11 to Exit"<<endl;
        cin>>inpt;
        if(inpt>11 || inpt<1)
            cout<<"Invalid input. please try again!";
    }
    while(inpt>11 || inpt<1);
    return inpt;
}
