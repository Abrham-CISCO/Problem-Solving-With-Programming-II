#include <iostream>
using namespace std;
struct employee
{
	string title;
	string First_name;
	string Last_name;
	int ID;
	float salary;
	char sex;
	int age;
	float bonous;
	float tax;
	float pension;
	string profession;
	void computeBonous()
	{
		if(salary<120) bonous = 0.1 * salary;
		else if(salary<=600) bonous = 0.08 * salary;
		else if(salary<=1200) bonous = 0.06 * salary;
		else if(salary<=2000) bonous = 0.04 * salary;		
	}
	void computeTax()
	{
		if(salary<120) tax = 0;
		else if(salary<=600) tax = 0.1 * salary - 12;
		else if(salary<=1200) tax = 0.15 * salary - 42;
		else if(salary<=2000) tax = 0.2 * salary - 102;
		else if(salary<=3000) tax = 0.3 * salary - 302;
		else tax = 0.4 * salary - 602;
	}
	void computePension()
	{
		pension = salary * 0.04;
	}
	struct location
	{
		string city;
		string subCity;
		int kebele;
	} address;
};

void displayTotalSalary(employee emp)
{
	emp.computeBonous();
	emp.computePension();
	emp.computeTax();
	cout<<endl<<"Total Salary: "<<emp.bonous + emp.pension + emp.tax + emp.salary;
}

void inputData(employee &emp)
{
	cout<<"Title: ";
	cin>>emp.title;
	cout<<"First name: ";
	cin>>emp.First_name;
	cout<<"Last name: ";
	cin>>emp.Last_name;
	cout<<"ID: ";
	cin>>emp.ID;
	cout<<"Salary: ";
	cin>>emp.salary;
	cout<<"Sex: ";
	cin>>emp.sex;
	cout<<"Age: ";
	cin>>emp.age;
	cout<<"Profession: ";
	cin>>emp.profession;
	cout<<"City: ";
	cin>>emp.address.city;
	cout<<"Sub City: ";
	cin>>emp.address.subCity;
	cout<<"Kebele: ";
	cin>>emp.address.kebele;
}

void displayEmployee(employee emp)
{
	cout<<endl<<endl<<endl;
	cout<<"Title: ";
	cout<<emp.title<<endl;
	cout<<"First name: ";
	cout<<emp.First_name<<endl;
	cout<<"Last name: ";
	cout<<emp.Last_name<<endl;
	cout<<"ID: ";
	cout<<emp.ID<<endl;
	cout<<"Salary: ";
	cout<<emp.salary<<endl;
	cout<<"Sex: ";
	cout<<emp.sex<<endl;
	cout<<"Age: ";
	cout<<emp.age<<endl;
	cout<<"Profession: ";
	cout<<emp.profession<<endl;
	cout<<"City: ";
	cout<<emp.address.city<<endl;
	cout<<"Sub City: ";
	cout<<emp.address.subCity<<endl;
	cout<<"Kebele: ";
	cout<<emp.address.kebele<<endl;
	cout<<"bonous: ";
	cout<<emp.bonous<<endl;
	cout<<"tax: ";
	cout<<emp.tax<<endl;
	cout<<"pension: ";
	cout<<emp.pension<<endl;
}

int main()
{
	employee Abrham;
	//Accept input
	inputData(Abrham);
	//Compute tax, pension and Bonus
	Abrham.computeBonous();
	Abrham.computePension();
	Abrham.computeTax();
	//Display employee detail	
	displayEmployee(Abrham);
	displayTotalSalary(Abrham);
	return 0;
}
