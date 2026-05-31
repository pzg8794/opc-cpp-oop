/*  Experiment_No5_2.cpp : main project file.
					 (Resistors in Parallel)
EET 110, 8:30am-10:45
Prof. Issapour	
Garcia, Piter
Discription: This program will find the resistor value 
of two resistors parallel combination. */


#include "stdafx.h"
#include <iostream>
using namespace std;

double Ask_For_R();
double Ask_For_Res();
double Parallel_Res(double R1, double R2);


void main()
{				/*Title*/cout<<"\n\t\t\t\t Assingment#5";
			cout<<"\n\t\t\t    Resistors in Parallel";
        /*Author*/cout<<"\n\n\t\t\t\t\t\t Made by Piter Garcia\n\n";
							
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

