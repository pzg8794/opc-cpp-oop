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

float F, Ci, Cf, C; 

	//Ci= 0
	cout<<"\n please enter the value for Degrees Centigrades(Ci) in degrees\n";
	cin>>Ci;

	//Cf= 40
	cout<<"\n please enter the value for Degrees Centigrade(Cf) in degrees\n";
	cin>>Cf;
	cout << " \n \n";
	cout<<"\n Centigrade Temperatures from 0 through 40 in steps of 4 degrees\n"; 
	cout << "\n\n Centigrade \t \t Fahrenheit\n";

	for(C=Ci;C<=Cf;C=C+4)
	
	{
	F=(9/5)*C+32;
		cout << " \n" << C << " degrees" << " \t \t " << F<< " degrees";
		cout << " \n \n";
	}
	return ;
}