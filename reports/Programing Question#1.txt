/*Programing Question#1: Temperature from Celsius to Fahrenhiet.
EET 110, 8:30am-10:45
Prof. Issapour
Garcia, Piter
Discription: This program converts the temperatures 
from degrees Celcius to Fahrenheit.*/
 
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//Title:
	cout<<"\n\t\t\t  Programing Quetion#1";
	cout<<"\n\t\tCorverting from Celsius to Fahrenhient\n\n\n";
	
float F, C; 

	//C= Celsius Centrigrade
	cout<<"\n\t  Please enter the value for Degrees Celsius(C) in degrees\n";
	cin>>C;

		cout << " \n \n";
		cout<<"\n\t\t     Centigrade Temperature Values\n"; 
		cout << "\n\n\t\t   Celsius \t\t Fahrenheit\n";

	F=(9/5)*C+32;
		cout << " \n\t\t  "<<C<< " degrees" << " \t \t " << F<< " degrees";
		cout << " \n \n";
	
	//Author:
	cout<<"\n\n\n\t\t\t\t\t\t Made by Piter Garcia\n";
	return 0;
}