#include <iostream>
using namespace std;
/*

6.	Define a structure that defines a point in Cartesian coordinate.

A rectangle in a Cartesian coordinate system is represented by two points,
the bottom left and top right point of the rectangle. Define a structure
that represents a rectangle.

Assuming a window is a rectangle, write a function
a)	that determines a point is in a window.
b)	that returns the intersection of two windows.

*/

struct point{
	int x,y;
};
struct rectangle{
	point p1,p2;
};

struct rectangle4P{
	point a,b,c,d;
};



rectangle input();
bool is_in_window(rectangle,point);
void intersection(rectangle A,rectangle B, point i[2]);

void displayPoint(point A)
{
        cout<<endl<<A.x<<","<<A.y;
}


int main()
{
    rectangle A,B;
    point C[2];
    cout<<"Rectangle 1"<<endl;
    A = input();
    cout<<endl<<"Rectangle 2"<<endl;
    B = input();
    intersection(A,B,C);
    if(C[0].x != 0)
    {
        cout<<endl<<"The intersection points are"<<endl;
        displayPoint(C[0]);
        displayPoint(C[1]);
    }
    return 0;
}

rectangle input()
{
    rectangle A;
    char a;
    cout<<endl<<"Enter the top left point: ";
    cin>>A.p1.x>>a>>A.p1.y;
    cout<<"Enter the top left point: ";
    cin>>A.p2.x>>a>>A.p2.y;
    return A;
}

bool is_in_window(rectangle A,point P)
{
    if(P.x > A.p1.x && A.p2.x > P.x && P.y < A.p1.y && P.y > A.p2.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void intersection(rectangle A,rectangle B, point i[2])
{
    rectangle4P A4p, B4p;
    point i1,i2;
    bool Intersect1=true, Intersect2=true;

    A4p.a = A.p1;
    A4p.b.x = A.p2.x;
    A4p.b.y = A.p1.y;
    A4p.c.x = A.p1.x;
    A4p.c.y = A.p2.y;
    A4p.d = A.p2;

    B4p.a = B.p1;
    B4p.b.x = B.p2.x;
    B4p.b.y = B.p1.y;
    B4p.c.x = B.p1.x;
    B4p.c.y = B.p2.y;
    B4p.d = B.p2;

    if(is_in_window(A,B4p.a))
    {
        i1.x = B4p.a.x;
        i2.y = B4p.a.y;
    }
    else if(is_in_window(A,B4p.b))
    {
        i1.x = B4p.b.x;
        i2.y = B4p.b.y;
    }
    else if(is_in_window(A,B4p.c)){
        i1.x = B4p.c.x;
        i2.y = B4p.c.y;
    }
    else if(is_in_window(A,B4p.d))
    {
        i1.x = B4p.d.x;
        i2.y = B4p.d.y;
    }
    else
    {
        Intersect1 = false;
    }


    if(is_in_window(B,A4p.a))
    {
        i1.y = A4p.a.y;
        i2.x = A4p.a.x;
    }
    else if(is_in_window(B,A4p.b))
    {
        i1.y = A4p.b.y;
        i2.x = A4p.b.x;
    }
    else if(is_in_window(B,A4p.c))
    {
        i1.y = A4p.c.y;
        i2.x = A4p.c.x;
    }
    else if(is_in_window(B,A4p.d))
    {
        i1.y = A4p.d.y;
        i2.x = A4p.d.x;
    }else
    {
        Intersect2 = false;
    }
    if(Intersect1 && Intersect2)
    {
        i[0] = i1;
        i[1] = i2;
    }
    else
    {
        i[0].x = -1;
    }
}
