/*Assignment4 (A): Voltage Drop Across a Resistor.
EET 110, 8:30am-10:45
Prof. Issapour
Garcia, Piter
Description: This program cupute the voltage drop across a resistor 
for a range of current values selected*/
 
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
    //Title:
		cout<<"\n Assingment#4";
		cout<<"\n Voltage Drop Across a Resistor";
	//Author:
		cout<<"\n Made by Piter Garcia\n";
		 
float V, R; double Ii, If, Ix; 

	/*(Currents given in milli Amps)
	Ii= 500mA*/ 
	cout<<"\n please enter the value for value of current(Ii) in milli Amps\n";
	cin>>Ii;

	//If= 300mA
	cout<<"\n please enter the value for value of current(If) in milli Amps\n";
	cin>>If;

	/*Resistor given in kilo ohms
	R= 4.7*/ 
	cout<<"\n please enter the value for resistor(R) in KOhms\n";
	cin>>R;
	cout << " \n \n";

	cout<<"\n Voltage drop across the risistor";
	cout << " \n \n Resistor \t \t Current \t \t Voltage\n";

for(Ix=Ii;Ix<=If;Ix=Ix+250)

	V= R*Ix;
		cout << " \n" << R << " Kohms" << " \t \t " << Ix << " mA" << " \t \t " << V << " Volts";
		cout << " \n \n";
return;

}	