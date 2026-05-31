/*Writing Functions.cpp : main project file.
EET 110, 8:30am-10:45
Prof. Issapour
Garcia, Piter
Discription: This will capute the voltage drop acrossthe series circuit. */

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

double Ask_For_Res();
double Series_Res(double R1, double R2, double R3);
double Ask_For_Current();
double Total_Voltage(double I, double Rt);
double Voltage_drop(double I, double R);

void main()
{							//Title:
					cout<<"\n\t\t\t\t Practice in Class";
			cout<<"\n\t\t\t\t Writing Functions\n\n";
		   /*Author*/cout<<"\n\n\t\t\t\t\t\t Made by Piter Garcia\n\n";
double R1, R2, R3, I,V1,V2,V3, Vt, Rt;
	
	R1= Ask_For_Res();
	R2= Ask_For_Res();
	R3= Ask_For_Res();
    Rt= Series_Res( R1, R2, R3);
	
	I= Ask_For_Current();

	cout << "\n\n\t" << "Resistor" << "\t\t" <<"Current" <<"\t\t"<<"Voltage Drop";
	V1= Voltage_drop(I,R1);
	cout << " \n\t"<<R1<<" Killo Ohms"<<"\t\t"<< I<< " Amps"<<"\t\t" <<V1<< " Volts";
	V2= Voltage_drop(I,R2);
	cout << " \n\t"<<R2<<" Killo Ohms"<<"\t\t"<< I<< " Amps"<<"\t\t" <<V2<< " Volts";
	V3= Voltage_drop(I,R3);
	cout << " \n\t"<<R3<<" Killo Ohms"<<"\t\t"<< I<< " Amps"<<"\t\t" <<V3<< " Volts";
	cout << " \n \n";
		

	Vt= Total_Voltage(I, Rt);
	
cout << "\n\n\t" << "Total Resistor" << "\t\t" <<"Total Current" 
<<"\t\t"<<"Total Voltage";

cout << " \n\t" << Rt << " Killo Ohms"<<"\t\t"<<I<<" milli Amps" 
<<"\t\t "<<Vt<<" Volts";
cout << " \n \n";
}

double Ask_For_Res()
{
	double R;
	cout<<"\n Please enter the value for Resistor in Killo Ohms\n ";
	cin>>R;
	return (R);
}

double Series_Res(double R1, double R2, double R3)
{
	double Rt;
	Rt= (R1+R2+R3);
	return(Rt);
}
double Ask_For_Current()
{
	double I;
	cout<<"\n Please enter the value for Current in milli Amps\n ";
	cin>>I;
	return (I);
}

double Total_Voltage(double I, double Rt)
{
	double Vt;
	Vt= I*Rt;
	return (Vt);
}
double Voltage_drop(double I, double R)
{
	double V;
	V= I*R;
	return V;
}