//Teacher's Code

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	system("cls");
	const int size = 100;
	unsigned int nCar;
	float Hr[size];
	unsigned Ln[size];
	float charge[size];
	float tIncome=0;
	float testHr;

	cout << "Enter the number of car(s)";
	cout <<"\n\n\tnumber = ";
	cin>>nCar;
	for(int i=0; i<nCar;i++)
	{
		//system("cls");
		cout<<"\n\nCar "<<i+1<<endl;
		cout<<"\n\n\tLicence number = ";
		cin>>Ln[i];
		do{
			cout<<"\n\tHour(s) parked = ";
			cin>>testHr;
			if(testHr > 24)
			{
				cout << "\n Parking hour can not be greater than 24\n";
				cout << "Please, enter a correct parking hour.\n";
			}
			else
			Hr[i]=testHr;
		}while(testHr>24);
	}
	for(int j=0; j<nCar; j++)
	{
		if(Hr[j] <= 3)
			charge[j] = 2;
		else
			charge[j] = 2 + (Hr[j]-3)*0.5;
	}
	for(int k=0; k<nCar;k++) tIncome=tIncome+charge[k];
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
	cout<<"\n                      ____________\n";
	cout<<"\n\n"<<setw(10)<<"\t\t  Total "<<setw(5.5);
	cout<<tIncome<<"\n              ___________________\n";
	system("pause");
	return 0;
}
