/*Assignment No.4 (B): Power Dissipated.
EET 110, 8:30am-10:45
Prof. Issapour
Garcia, Piter
Discription: This program calculate the power dissipated in a resistor 
for a range of voltage values across the resistor*/
 
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
    //Title:
		cout<<"\n Assingment#4";
		cout<<"\n Power Dissipated";
	//Author:
		cout<<"\n Made by Piter Garcia\n";
		 
double R, Vi, Vf, Vx, P; 

	//Vi= 1
	cout<<"\n please enter the value for voltage(Vi) in Volts\n";
	cin>>Vi;

	//Vf= 10
	cout<<"\n please enter the value for voltage(Vf) in Volts\n";
	cin>>Vf;

	//R= 4.7k
	cout<<"\n please enter the value for resistor(R) in KOhm\ns";
	cin>>R;
	cout << " \n \n";
	cout<<"\n Power Dissipated for the Voltage values 1 through 10 in steps of 1\n"; 
	cout << " \n \n Resistor \t \t Voltage \t \t Power \n";

for(Vx=Vi;Vx<=Vf;Vx=Vx+1)
	{
	//(Power is giving in milli watts)
	P= (Vx*Vx)/R;
		cout << " \n" << R << " Kohms" << " \t \t " << Vx << " Volts" << " \t \t " << P << " mWatts";
		cout << " \n \n";
	}
return ;
}