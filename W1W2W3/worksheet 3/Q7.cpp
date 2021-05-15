#include <iostream>
using namespace std;

//A=(1 3 5: 6 7 8: 9 0 1: 4 2 0) // A is 4x3 matrix
//

struct matrix34 {
    int m[3][4];
};

struct matrix43 {
    int m[4][3];
};

matrix43 add(matrix43,matrix43);
matrix43 subtract(matrix43,matrix43);
matrix43 multiply(matrix43,matrix43);
matrix43 multiplyByScalar(matrix43,int);
matrix34 transpose(matrix43);
float determinant(matrix43);
matrix43 createMatrix(bool);
void displayMatrix(matrix43);
void displayMatrix(matrix34);

int menu();

//add,subtract,multiply,multiplyByScalar,transpose, determinant
//displayMatrix, createMatrix, menu.

int main()
{
    matrix43 A,B,C;
    matrix34 D;
    float det;
    int scalar;
    do
    {
        switch(menu()) {
            case 1:
                A = createMatrix(true);
                B = createMatrix(false);
                break;
            case 2:
                C = add(A,B);
                displayMatrix(C);
                break;
            case 3:
                C = subtract(A,B);
                displayMatrix(C);
                break;
            case 4:
                C = multiply(A,B);
                displayMatrix(C);
                break;
            case 5:
                det = determinant(A);
                cout<<"Can not compute determinant of A";
                break;
            case 6:
                cout<<endl<<"scalar = ";
                cin>>scalar;
                A = multiplyByScalar(A,scalar);
                displayMatrix(A);
                break;
            case 7:
                D = transpose(A);
                displayMatrix(D);
                break;
            case 8:
                displayMatrix(A);
                break;
            case 9:
                displayMatrix(B);
                break;
        }
    }while(true);
    return 0;
}

matrix43 add(matrix43 A,matrix43 B)
{
    matrix43 C;
    for(int i=0; i<4; i++)
        for(int j=0;j<3;j++)
            C.m[i][j] = A.m[i][j] + B.m[i][j];
    return C;
}

matrix43 subtract(matrix43 A,matrix43 B)
{
    matrix43 C;
    for(int i=0; i<4; i++)
        for(int j=0;j<3;j++)
            C.m[i][j] = A.m[i][j] - B.m[i][j];
    return C;
}

matrix43 multiply(matrix43 A,matrix43 B )
{
    int r1,r2,c1,c2,i,j,k;
     matrix43 c;
     cout << "Enter rows and column for first matrix: ";
	cin >> r1 >> c1;

	cout << "Enter rows and column for second matrix: ";
	cin >> r2 >> c2;
	system("cls");
	 if(c1!=r2)
           do {
        cout << "Error! column of first matrix not equal to row of second." << endl;
		cout << "Enter rows and column for first matrix: ";
		cin >> r1 >> c1;
		cout << "Enter rows and column for second matrix: ";
		cin >> r2 >> c2;
            }
        while(c1!=r2);
        cout << endl << "Enter elements of matrix 1:" << endl;
	for(i = 0; i < r1; ++i)
	{
		for(j = 0; j < c1; ++j)
		{
			cout << "Enter elements a"<< i + 1 << j + 1 << ": ";
			cin >> A.m[i][j];
		}
	}

	cout << endl << "Enter elements of matrix 2:" << endl;
	for(i = 0; i < r2; ++i)
	{
		for(j = 0; j < c2; ++j)
		{
			cout << "Enter elements b" << i + 1 << j + 1 << ": ";
			cin >> B.m[i][j];
		}
	}
for(i = 0; i < r1; ++i)
	{
		for(j = 0; j < c1; ++j)
		{
			c.m[i][j] = 0;
		}
	}
for(i = 0; i < r1; ++i)
	{
		for(j = 0; j < c2; ++j)
		{
			for(k=0; k<c1; ++k)
			{
				c.m[i][j] += A.m[i][k] * B.m[k][j];
			}
		}
	}

return c;
}
matrix43 multiplyByScalar(matrix43 A,int scalar)
{
    matrix43 C;
    for(int i=0; i<4; i++)
        for(int j=0;j<3;j++)
            C.m[i][j] = scalar * A.m[i][j];
    return C;
}

matrix34 transpose(matrix43 A)
{
    matrix34 C;
    for(int i=0; i<4; i++) //row
        for(int j=0;j<3;j++) //column
            C.m[j][i] = A.m[i][j];
    return C;
}

float determinant(matrix43)
{
    return 0.0;
}

matrix43 createMatrix(bool f)
{
    matrix43 A;
    if(f)cout<<endl<<"A=";
    else cout<<endl<<"B=";
    for(int i=0; i<4; i++) //row
        for(int j=0;j<3;j++) //column
            cin>>A.m[i][j];
    return A;
}
int menu()
{
        int inpt;
        do
        {
            cout<<endl<<"What do you want to do? "<<endl;
            cout<<"Press 1 to Enter matrix A and B"<<endl;
            cout<<"Press 2 to add matrix A and B"<<endl;
            cout<<"Press 3 to subtract matrix A and B"<<endl;
            cout<<"Press 4 to multiply matrix A and B"<<endl;
            cout<<"Press 5 to find the determinant of matrix A"<<endl;
            cout<<"Press 6 to multiply matrix A with a scalar"<<endl;
            cout<<"Press 7 to transpose matrix A"<<endl;
            cout<<"Press 8 to display matrix A"<<endl;
            cout<<"Press 9 to display matrix B"<<endl;
            cin >> inpt;
            if(inpt<1 || inpt>9)
            {
                cout<<"Invalid Input! Please Try again."<<endl;
            }
        }
        while(inpt<1 || inpt>9);
        return inpt;
}
void displayMatrix(matrix43 A)
{
    for(int i=0; i<4; i++)
    {
        cout<<endl;
        for(int j=0;j<3;j++)
            cout<<A.m[i][j]<<" ";
    }

}

void displayMatrix(matrix34 A)
{
    for(int i=0; i<3; i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
            cout<<A.m[i][j]<<" ";
    }

}

