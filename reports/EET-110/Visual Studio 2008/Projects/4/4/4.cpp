/*Assignment No.4 (4): Temperature Degrees in Fahrenheit and Centigrade.
EET 110, 8:30am-10:45
Prof. Issapour
Garcia, Piter
Discription: This program compute and display the values of a range of temperatures
in degrees Fahrenheit and Centigrade*/
 
#include "stdafx.h"
#include <iostream>
using namespace std;
void main()
{
	//Title:
		cout<<"\n Assingment#4";
		cout<<"\n Fahrenheit and Centigrade";
	//Author:
		cout<<"\n Made by Piter Garcia\n";

double VT, IT, R, Ri, Rf, RT, Vn; 

	//Ci= 0
	cout<<"\n please enter the value for Total Resistor in ohms\n";
	cin>>RT;

    //Cf= 40
	cout<<"\n please enter the value for Resistor (Ri) in ohms\n";
	cin>>Ri;
	cout << " \n \n";

	cout<<"\n please enter the value for Resistor (Rf) in ohms\n";
	cin>>Rf;
	

	cout<<"\n please enter the value for Total Voltage (VT)  in Volts\n";
	cin>>VT;

	IT= VT/RT;


	cout<<"\n Voltage Drop in a Series Circuit\n"; 
	cout << "\n\n Resistor \t \t Voltage\n";

for(R=Ri;R<=Rf;R=R+1000)
{   
	Vn= VT*(R/RT);
	cout << " \n" << R << " Ohms" << " \t \t " << Vn<< " Volts";
	cout << " \n \n";}
;
}