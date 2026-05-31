/*Assignment4 (A): Voltage Drop Across a Resistor.
EET 110, 8:30am-10:45
Prof. Issapour
Garcia, Piter*/
 
#include "stdafx.h"
#include <iostream>

using namespace std;

void main()
{
    //Title:
		cout<<"\n Assingment#3";
		cout<<"\n Voltage Drop Across a Resistor";
	//Author:
		cout<<"\n Made by Piter Garcia\n";
		 
double Ii, If, Ix, V, R;

	//Ii= 0.500
	cout<<"\n please enter the value for value of current(Ii) in Amps\n";
	cin>>Ii;

	//If= 0.300
	cout<<"\n please enter the value for value of current(If) in Amps\n";
	cin>>If;

	//R= 4700
	cout<<"\n please enter the value for resistor(R) in Ohm\ns";
	cin>>R;
	
for(Ix=Ii;Ix<=If;Ix=Ix+250)

	V= R*Ix;
		cout << " \n" << R << " Kohms" << " \t \t " << Ix << " mA" << " \t \t " << V << " Volts";
		cout << " \n \n";
return;

}	