//Exam No.2


#include "stdafx.h"
#include <iostream>
using namespace std;

double Ask_For_R();
double Ask_For_Res();
double Parallel_Res(double R1, double R2);

void main()
{				
							
double  Rn,R1,R2,R;

cout << "\n Please enter the amount of Resistors in Kilo Ohms:\n ";
cin >> Rn;

R1= Ask_For_Res();
for (R=1; R<Rn; R= ++R)
{
R2= Ask_For_Res();
R1= Parallel_Res(R1, R2);
}
cout<<"\n The Resistor equivalent R1 is "<<R1<<"\t Kilo Ohms\n ";
}
double Ask_For_R()
{
	double R;
	cout << "\n Please enter the value for Resistor (R) in Kilo Ohms: ";
	cin >> R;
	return (R);
}

double Ask_For_Res()
{
double R;
cout<<"\n Please enter the value for Resistor in Kilo Ohms\n ";
cin>>R;
return (R);
}
double Parallel_Res(double R1, double R2)
{
	double Req;
	Req = (R1*R2) / (R1+R2);
	return ( Req );
}