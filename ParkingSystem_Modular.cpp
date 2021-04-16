#include <iostream>
#include <iomanip>
using namespace std;

//assuming the maxmimum number of parked cars does not exceed 100
const int size = 100;
float Hr[size];
unsigned Ln[size];
float charge[size];


//function prototypes
int validateInput(int nCar);
int inputData(int); 
void sort(void);
void swap(float &x, float &y);
void calc_Charge(int);
void sum(void);
void display(void);
bool validateInputTime(int hr)
bool validateInputNcar(int size, int nCar)


int main()
{
	unsigned int nCar;
	nCar = inputData(1);
	for(int i=0; i<nCar; i++)
	{
		system("cls");
		cout<<"\n\nCar "<<i+1<<endl;
		Ln[i] = inputData(2);
		Hr[i] = inputData(3);
	}
	calc_Charge(nCar);
	sort();
	display();
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
		while(!validateInputNcar(100,input))		
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
void sort(void)
{
	for(int i=0;i<nCar;i++)
		for(int j=nCar-1;j>0;j--)
		{
			if(Ln[j]<Ln[j-1])
			{
				//do swampping
				swap(Ln[j],Ln[j-1]);
				swap(Hr[j],Hr[j-1]);
				swap(charge[j],charge[j-1]);
			}
		}
}
void swap(float &x, float &y)
{
	int z;
	z = x;
	x = y;
	y = z;
	return 0;
}
void calc_Charge(int nCar)
{
	for(int j=0; j<nCar; j++)
	{
		if(Hr[j] <= 3) 
			charge[j] = 2;
		else 
			charge[j] = 2 + (Hr[j]-3)*0.5;
	}
}
void sum(void)
{
	int tIncome=0;
	for(int k=0; k,nCar;k++) tIncome=tIncome+charge[k];
	return tIncome;
}
void display(void)
{
	system("cls");
	cout<<"\n\n     Parking information\n";
	cout<<"  ______________________________\n\n\n";
	cout<<"License no"<<setw(10)<<"Hours"<<setw(11)<<"   Charge\n";
	cout<<"__________"<<setw(10)<<"_____"<<setw(11)<<"   ______\n";
	
	for(int m=0;m<nCar;m++)
	{
		cout<<endl;
		cout<<setw(10)<<Ln[m]<<setw(10)<<float(Hr[m])<<setw(10)<<charge[m];
	}
	cout<<"\n                         ____________\n";
	cout<<"\n\n"<<setw(10)<<"\t\t          Total "<<setw(5.5)<<sum()<<"\n                                  ___________________\n";
	system("pause");
	return 0;
}