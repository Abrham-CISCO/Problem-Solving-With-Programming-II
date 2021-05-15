/*

Rewrite the parking system program using the structure type declaration given below
                          struct parking
 	      {
		  int licenceNo;
		  float hour;
		  float charge;
	       };


*/

#include <iostream>
#include <iomanip>
using namespace std;

//assuming the maxmimum number of parked cars does not exceed 100
const int size = 100;
struct parking{
  int licenceNo;
  float hour, charge;
};

parking cars[size];
/*float Hr[size];
unsigned int Ln[size];
float charge[size];
*/

//function prototypes
int inputData(int);
void sort(int);
void swap(float &x, float &y);
void calc_Charge(int);
float sum(int);
void display(int);
bool validateInputTime(int hr);
bool validateInputNcar(int size, int nCar);


int main()
{
	unsigned int nCar;
	nCar = inputData(1);
	for(int i=0; i<nCar; i++)
	{
		system("cls");
		cout<<"\n\nCar "<<i+1<<endl;
		cars[i].licenceNo = inputData(2);
		cars[i].hour = inputData(3);
	}
	calc_Charge(nCar);
	sort(nCar);
	display(nCar);
	return 0;
}
bool validateInputNcar(int size, int nCar)
{
	if(nCar > size) return false;
	else return true;
}
bool validateInputTime(int hr)
{
	if(hr > 24) return false;
	else return true;
}
int inputData(int messageType)
{
	int input;
	if(messageType == 1)
	{
		do{
			cout <<"\nEnter the number of car(s)";
			cout <<"\n\n\tnumber = ";
			cin>>input;
			if(!validateInputNcar(100,input))
			{
				cout <<"Number of cars can not exceed 100"<<endl<<"Please Try Again";
			}
		}
		while(!validateInputNcar(100,input));
		return input;
	}
	else if(messageType == 2)
	{
		cout<<"\n\n\tLicence number = ";
		cin>>input;
		return input;
	}
	else
	{
		do{
			cout<<"\n\tHour(s) parked = ";
			cin>>input;
			if(!validateInputTime(input))
			{
				cout << "\n Parking hour can not be greater than 24\n";
				cout << "Please, enter a correct parking hour.\n";
			}
		}while(input>24);
		return input;
	}
}
void sort(int nCar)
{
	for(int i=0;i<nCar;i++)
		for(int j=nCar-1;j>0;j--)
		{
			if(cars[j].licenceNo<cars[j-1].licenceNo)
			{
				//do swapping
				swap(cars[j].licenceNo,cars[j].licenceNo);
				swap(cars[j].hour,cars[j-1].hour);
				swap(cars[j].charge,cars[j-1].charge);
			}
		}
}
void swap(float &x, float &y)
{
	int z;
	z = x;
	x = y;
	y = z;
}
void calc_Charge(int nCar)
{
	for(int j=0; j<nCar; j++)
	{
		if(cars[j].hour <= 3)
			cars[j].charge = 2;
		else
			cars[j].charge = 2 + (cars[j].hour-3)*0.5;
	}
}
float sum(int nCar)
{
	float tIncome=0;
	for(int k=0; k<nCar;k++) tIncome+=cars[k].charge;
	return tIncome;
}
void display(int nCar)
{
	system("cls");
	cout<<"\n\n     Parking information\n";
	cout<<"  ______________________________\n\n\n";
	cout<<"License no"<<setw(10)<<"Hours"<<setw(11)<<"   Charge\n";
	cout<<"__________"<<setw(10)<<"_____"<<setw(11)<<"   ______\n";

	for(int m=0;m<nCar;m++)
	{
		cout<<endl;
		cout<<setw(10)<<cars[m].licenceNo<<setw(10)<<float(cars[m].hour)<<setw(10)<<cars[m].charge;
	}
	cout<<"\n                         ____________\n";
	cout<<"\n\n"<<setw(10)<<"\t\t          Total "<<setw(5.5)<<sum(nCar)<<"\n                                  ___________________\n";
	system("pause");
}
