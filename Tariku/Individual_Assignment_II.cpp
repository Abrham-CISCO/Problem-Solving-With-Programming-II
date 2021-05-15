#include <iostream>
#include <iomanip>
using namespace std;
// Use T1, T2, T3
// const
// Returns number of cars
// Assuming the driver name does not have space in it
int actualNumberOfCars;
int getValues(string driverName[], int age[],  float carValue[], int ticketsCount[]);
void calcBaseRate(const float carValue[], float baseRate[]);
void calcAgePayment(const int age[], const float baseRate[], float agePayment[]);
void calcSubTotal(const float agePayment[],const float baseRate[], float subTotal[]);
void calcTicketPayment(const float subTotal[], const int ticketsCount[], float ticketsPayment[]);
void calcTotalPayment(const float agePayment[],const float baseRate[],const float ticketsPayment[], float totalPayment[]);
void printInvoice(int numberOfCars,const string driverName[], int age[],  const float carValue[], const int ticketsCount[],
                  const float agePayment[],const float baseRate[],const float ticketsPayment[], const float totalPayment[]);

int main()
{
    int maxNumberOfCars = 100,
    age[maxNumberOfCars]={},
    ticketsCount[maxNumberOfCars]={};

    float subTotal[maxNumberOfCars]={},
    carValue[maxNumberOfCars]={},
    agePayment[maxNumberOfCars]={},
    baseRate[maxNumberOfCars]={},
    ticketsPayment[maxNumberOfCars]={},
    totalPayment[maxNumberOfCars]={};

    string driverName[maxNumberOfCars]={};

    actualNumberOfCars = getValues(driverName, age ,carValue, ticketsCount);
    calcBaseRate(carValue, baseRate);
    calcAgePayment(age,baseRate,agePayment);
    calcSubTotal(agePayment,baseRate,subTotal);
    calcTicketPayment(subTotal,ticketsCount,ticketsPayment);
    calcTotalPayment(agePayment,baseRate,ticketsPayment,totalPayment);
    printInvoice(actualNumberOfCars,driverName,age,carValue,ticketsCount,agePayment,baseRate,ticketsPayment, totalPayment);
    return 0;
}

int getValues(string driverName[], int age[],  float carValue[], int ticketsCount[])
{
    int numberOfCars;
    //validate input
    do{
        cout<<"Enter the number of cars: ";
        cin>>numberOfCars;
        if(numberOfCars > 100 || numberOfCars < 1)
        {
            cout<<"Invalid Input! Number of cars must be between 1 and 100";
        }
    }while(numberOfCars > 100 || numberOfCars < 1);
    for(int i = 0; i<numberOfCars; i++)
    {
        cout<<"Enter details of driver "<<i+1<<endl;
        cout<<"Name: ";
        cin>>driverName[i];
        cout<<"Age: ";
        cin>>age[i];
        cout<<"Car Value: ";
        cin>>carValue[i];
        cout<<"Tickets Count: ";
        cin>>ticketsCount[i];
        cout<<endl;
    }
    return numberOfCars;
}
void calcBaseRate(const float carValue[], float baseRate[])
{
    for(int i = 0; i<actualNumberOfCars; i++)
    {
        baseRate[i] = carValue[i] * 0.05;
    }
}
void calcAgePayment(const int age[], const float baseRate[], float agePayment[])
{
    for(int i = 0; i<actualNumberOfCars; i++)
    {
        if(age[i]<25) agePayment[i] = baseRate[i] * 0.15;
        else if(age[i]>=25 && age[i]<=29) agePayment[i] = baseRate[i] * 0.10;
        else if(age[i]>29) agePayment[i] = 0;
    }
}
void calcSubTotal(const float agePayment[],const float baseRate[], float subTotal[])
{
    for(int i = 0; i<actualNumberOfCars; i++)
    {
        subTotal[i] = baseRate[i] + agePayment[i];
    }
}
void calcTicketPayment(const float subTotal[], const int ticketsCount[], float ticketsPayment[])
{
    for(int i = 0; i<actualNumberOfCars; i++)
    {
        if(ticketsCount[i]==0) ticketsPayment[i] = 0;
        else if(ticketsCount[i]==1) ticketsPayment[i] = 0.1 * subTotal[i];
        else if(ticketsCount[i]==2) ticketsPayment[i] = 0.25 * subTotal[i];
        else if(ticketsCount[i]==3) ticketsPayment[i] = 0.5 * subTotal[i];
        else if(ticketsCount[i]>3) ticketsPayment[i] = -1;
    }
}
void calcTotalPayment(const float agePayment[],const float baseRate[],const float ticketsPayment[], float totalPayment[])
{
    for(int i = 0; i<actualNumberOfCars; i++)
    {
        totalPayment[i] = agePayment[i] + baseRate[i] + ticketsPayment[i];
    }
}
void printInvoice(int numberOfCars, const string driverName[], int age[], const float carValue[], const int ticketsCount[],
                  const float agePayment[],const float baseRate[],const float ticketsPayment[], const float totalPayment[])
{
    cout<<"                     Auto Insurance Information                  "<<endl;
    cout<<"                     __________________________                  "<<endl;
    cout<<"Name              Age NoTickets CarValue BaseRate AgePayment TicketPayment TotalPayment"<<endl;
    cout<<"_________________ ___ _________ ________ ________ __________ _____________ ____________"<<endl;
    for(int i = 0; i<numberOfCars; i++)
    {
        if(ticketsPayment[i] == -1)
            cout<<left<<setw(18)<<driverName[i]<<setw(4)<<age[i]<<setw(10)<<ticketsCount[i]<<setw(9)<<carValue[i]<<setw(9)<<baseRate[i]<<setw(11)<<agePayment[i]<<setw(14)<<ticketsPayment[i]<<"CD"<<endl;
        else
            cout<<left<<setw(18)<<driverName[i]<<setw(4)<<age[i]<<setw(10)<<ticketsCount[i]<<setw(9)<<carValue[i]<<setw(9)<<baseRate[i]<<setw(11)<<agePayment[i]<<setw(14)<<ticketsPayment[i]<<totalPayment[i]<<endl;

    }

}
