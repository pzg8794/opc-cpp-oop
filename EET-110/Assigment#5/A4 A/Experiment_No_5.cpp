/*  Experiment_No_5.cpp : main project file.
	(Voltage drop in a Series Circuit)
	EET 110, 8:30am-10:45
	Prof. Issapour
	Garcia, Piter
	Discription: This will capute the voltage drop across each 
	resistor in a series circuit consisting of three resistors. */

#include "stdafx.h"
#include <iostream>

using namespace std;
double Ask_For_Res();
double Series_Res( double R1, double R2, double R3);
double Ask_For_Current();
double Ask_For_Voltage();
double Series_volt(double V1, double V2, double V3);
double V1(double R1, double RT, double VT);
double V2(double R2, double RT, double VT);
double V3(double R3, double RT, double VT);

void main()
{
    //Author
	cout<<"\n Author:\n Made by Piter Garcia\n";
	//Title
	cout<<"\n Title:\n Voltage drop in a Series Circuit\n";
	
	double R1, R2, R3, RT, I, VT, V1, V2, V3;
	R1= Ask_For_Res();
	R2= Ask_For_Res();
	R3= Ask_For_Res();
	
	RT= Series_Res( R1, R2, R3);
	Cout<<"\n the total Resistance is<< RT << Ohms\n";

	I= Ask_For_Current();
	VT= Ask_For_Voltage();
	V1= V1(R1, RT, VT);
	cout<<"\n the Voltage (V1) is"<<V1<<"Volts\n";
	V2= V2(R2, RT, VT);
	cout<<"\n the Voltage (V2) is"<<V2<<"Volts\n";
	V3= V3(R3, RT, VT);
	cout<<"\n the Voltage (V3) is"<<V3<<"Volts\n";
 }

double Ask_For_Res()
{ 
	cout<<"\n Please enter the value fot the Resistor\n";
	cin>>R
	return(R);
}

double Series_Res (double R1, double R2, double R3)
{ 
	double RT;
	RT= R1+R2+R3;
	return(RT);
}
double Ask_For_Curernt()
{
	double I;
	cout<<"\n Please enter the value for the Current\n";
	cin>> I
	return(I);
}
double Ask_For_Voltage()
	cout<<"\n Please enter the value for the Voltage\n";
	cin>> V
	return(V);
}
double V1(double R1, double RT, double VT);
{
	double V1;
	V1= VT(R1/RT)
}
double V2(double R2, double RT, double VT);
{
	double V3;
	V2= VT(R2/RT)
}
double V3(double R3, double RT, double VT);
{
	double V3;
	V3= VT(R3/RT)
}
