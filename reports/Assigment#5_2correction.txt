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

double Ask_For_Res();
double Parallel_Res(double R1, double R2);

void main()
{				/*Title*/cout<<"\n\t\t\t\t Assingment#5";
			cout<<"\n\t\t\t      Parallel  Resistors\n\n";
        /*Author*/cout<<"\n\n\t\t\t\t\t\t   Made by Piter Garcia\n\n";	
					
double  R1, R2, Rt; 
	
R1= Ask_For_Res();
R2= Ask_For_Res();
Rt= Parallel_Res(R1, R2);

cout << " \n\t" << " Resistor 1" << " \t \t " <<"Resistor 2" 
<< " \t \t " <<" Total Resistor";

cout << " \n\t" << R1 << " Killo Ohms" << " \t \t " << R2 << " Killo Ohms" 
<< " \t \t " << Rt << " Killo Ohms";
cout << " \n \n";
}

double Ask_For_Res()
{
double R;
cout<<" \nPlease enter the value for Resistor in Killo Ohms\n";
cin>>R;
return (R);

}
double Parallel_Res(double R1, double R2)
{
double Rt;
Rt= (R1*R2)/(R1+R2);
return(Rt);
}