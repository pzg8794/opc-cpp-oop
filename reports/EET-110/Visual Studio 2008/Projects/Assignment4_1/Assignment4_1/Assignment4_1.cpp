/*Assignment4 (A): Power for a range of Current.
EET 110, 8:30am-10:45
Prof. Issapour
Garcia, Piter*/
 
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
    //Title:
		cout<<"\n Assingment#4";
		cout<<"\n Power for a Range of Current";
	
		 
float V, Ii, If, Ix; 

	//Ii= Incial Current 
	cout<<"\n Please enter the value for value of current(Ii) in milli Amps\n";
	cin>>Ii;

	//If= Final Corrent.
	cout<<"\n Please enter the value for value of current(If) in milli Amps\n";
	cin>>If;

	//V= Voltage.
	cout<<"\n Please enter the value for Voltage(V) in Volts\n";
	cin>>V;
	cout << " \n \n Voltage \t \t Current \t \t Power \n";
for(Ix=Ii;Ix<=If;Ix=Ix+250)
	{
	P= I*V;
		cout << " \n" << V << "Volts" << " \t \t " << Ix << "mA" << " \t \t " << P << "milli Watts";
		cout << " \n \n";
	}
	//Author:
	cout<<"\n Made by Piter Garcia\n";
return ;
}