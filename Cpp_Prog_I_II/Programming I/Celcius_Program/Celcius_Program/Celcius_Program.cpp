/*Programing Question#1: Temperature from Celsius to Fahrenhiet.
BCS-120
Garcia, Piter
Discription: This program converts the temperatures 
from degrees Fahrenheit to Celcius.*/
 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Title:
	cout<<"\n\t\t    Fahrenheit to Celcius Program ";
	cout<<"\n\t\t Corverting from Celsius to Fahrenhient\n\n\n";
	
double F, C; 

	//F= Fahrenheit Centrigrade
	cout<<"\n Please enter the value for the Fahrenheit Temperature in degrees\n ";
	cin>>F;

	cout<<"\n\n\n\t\t   Centigrade Temperature Values\n"; 
	
	
	C=(5./9)*(F-32);
	cout<<setprecision(2)<<fixed;
	cout << "\n\t   "<< F << "degrees is equal to = "<< C << " degrees\n\n";
	
	
	//Author:
	cout<<"\n\n\n\t\t\t\t\t\t Made by Piter Garcia\n";
	return 0;
}