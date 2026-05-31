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
double Voltage_R1(double I, double R1);
double Voltage_R2(double I, double R2);
double Voltage_R3(double I, double R3);

void main()
{
							//Title:
					cout<<"\n\t\t\t\t Assingment#5";
			cout<<"\n\t\t\t Voltage Drop in a Series Circuit";
							//Author:
				cout<<"\n\n Made by Piter Garcia\n";


double I, Rt, R1, R2, R3, Vt, V1, V2, V3; 
	
    R1= Ask_For_Res();
	R2= Ask_For_Res();
	R3= Ask_For_Res();
    Rt= Series_Res( R1, R2, R3);
	cout<<"\n The Resistance is"<<Rt<<"Ohms\n";
	
	Vt= Ask_For_Total_Voltage();
	I= Total_Current(Vt,Rt);
	V1=Voltage_R1(I,R1);
	cout<<"\n The Voltage is"<<V1<<"Volts\n";
	V2=Voltage_R2(I,R2);
	cout<<"\n The Voltage is"<<V2<<"Volts\n";
	V3= Voltage_R3(I,R3);
	cout<<"\n The Voltage is"<<V3<<"Volts\n";
}

					//Resistors in the Series Circuit
	

double Ask_For_Res()
{
	double R;
	cout<<"\nPlease enter the value for Resistor\n";
	cin>>R;
	return (R);
}

double Series_Res(double R1, double R2, double R3)
{
	double Rt;
	Rt= (R1+R2+R3);
	return(Rt);
}
	
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
double Voltage_R1(double I, double R1)
{
	double V1;
	V1= I*R1;
	return (V1);
	cout << " \n" << R1 << " Ohms" << " \t \t " << V1<< " Volts"; //Voltage Across R1
	cout << " \n \n";
}
double Voltage_R2(double I, double R2)

{
	double V2;
	V2= I*R2;
	return(V2);
	cout << " \n" << R2 << " Ohms" << " \t \t " << V2<< " Volts"; //Voltage Across R1
	cout << " \n \n";
}
double Voltage_R3(double I, double R3)
{
	double V3;
	V3= I*R3;
	return (V3);
	cout << " \n" << R3 << " Ohms" << " \t \t " << V3<< " Volts"; //Voltage Across R1
	cout << " \n \n";
}

