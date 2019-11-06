

#include <iostream>
int inpatient (double days, double daily, double mediChar, double services);
int outpatient (double services, double mediChar);
using namespace std;

int inpatient (double days, double daily, double mediChar, double services)
{
    int total;
    total= (days * daily) + mediChar + services;
    return total;
}


int outpatient (double services, double mediChar)
{
    int total;
    total= services + mediChar;
    return total;
}



int main()
{
char choice, choice2;
double days, dailyRate, mediChar, services;

do
{
cout<< "If the person to be admitted is in-patient press I, otherwise press O for out-patient"<<endl;
cin>> choice;

if (choice == 'i' || choice == 'I')
{
    cout<< "How Many days the patient spent in the hospital? "<<endl;
    cin>> days;
    cout<< "How much is the daily rate" <<endl;
    cin>> dailyRate;
    cout<< "How much are the hospital medication charges ? "<<endl;
    cin>> mediChar;
    cout<< "How much are the charges for hospital services (lab tests, etc.) "<<endl;
    cin>>services;

    int z;
    z= inpatient (days, dailyRate, mediChar, services);
    cout<< "The patient total amount is "<< z <<endl;
}

else if (choice== 'o' ||choice== 'O')
{
    cout<< "How much are the charges for hospital services (lab tests, etc.) "<<endl;
    cin>>services;
    cout<< "How much are the hospital medication charges ? "<<endl;
    cin>> mediChar;

    int x;
    x= outpatient (services, mediChar);
    cout<< "The patient total amount is "<< x <<endl;
}

else
    cout<< "Enter a valid command " <<endl;


cout <<"Press Y if u have another costumer, otherwise press any other command"<<endl;
cin>> choice2 ;
}
while (choice2== 'y' || choice2== 'Y');

return 0;
}



