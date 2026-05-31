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
double Series_Res(double R1, double R2, double R3);
double Total_Current(double Vt, double Rt);
double Ask_For_Total_Voltage();
double Voltage_drop(double I, double R);


void main()
{
							//Title:
					cout<<"\n\t\t\t\t Assignment#5";
	    cout<<"\n\t\t\t Voltage Drop in a Series Circuit";
							//Author:
		cout<<"\n\n\t\t\t\t\t\t Made by Piter Garcia\n\n";


double I, Rt, R1, R2, R3, Vt, V1, V2, V3; 
	
    R1= Ask_For_Res();
	R2= Ask_For_Res();
	R3= Ask_For_Res();
	Rt= Series_Res( R1, R2, R3);
	cout<<"\n The Total Resistance is "<<Rt<<" Ohms\n";
 	
	Vt= Ask_For_Total_Voltage();
	I=  Total_Current(Vt,Rt);
	V1= Voltage_drop(I,R1);
	cout << " \n\t"<<R1<<" Killo Ohms"<<"\t\t"<< I<< " Amps"<<"\t\t" <<V1<< " Volts";
	V2= Voltage_drop(I,R2);
	cout << " \n\t"<<R2<<" Killo Ohms"<<"\t\t"<< I<< " Amps"<<"\t\t" <<V2<< " Volts";
	V3= Voltage_drop(I,R3);
	cout << " \n\t"<<R3<<" Killo Ohms"<<"\t\t"<< I<< " Amps"<<"\t\t" <<V3<< " Volts";
	cout << " \n \n";
}
					//Resistors in the Series Circuit
	
double Ask_For_Res()
{
	double R;
	cout<<"\n Please enter the value for Resistor in Ohms\n";
	cin>>R;
	return (R);
}

double Series_Res(double R1, double R2, double R3)
{
	double Rt;
	Rt= (R1+R2+R3);
	return(Rt);
}
//Total Current across the Circuit
	
double Total_Current(double Vt, double Rt)
{
	double I;
	I= Vt/Rt;
	return (I);
}
double Ask_For_Total_Voltage()
{
 double Vt;
 cout<<"\n Please enter the value for the Total Voltage\n";
 cin>>Vt;
 return(Vt);
}
double Voltage_drop(double I, double R)
{
	double V;
	V= I*R;
	return V;
}