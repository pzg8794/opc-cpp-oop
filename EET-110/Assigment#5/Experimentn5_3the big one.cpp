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

float Ask_For_Res();
float Parallel_Res(float R1,float R2,float R3,float R4,float R5,float R6,float R7,float R8,float R9,float R10);

void main()
{							//Title:
					cout<<"\n\t\t\t\t Assingment#5";
			cout<<"\n\t\t\t Resistors  in  Parallel\n\n";
							
float  R1,R2,R3,R4,R5,R6,R7,R8,R9,R10,RT,Rx1,Rx2,Rx3,Rx4,Rx5,Rx6,Rx7,Rx8,Rx9; 

R1= Ask_For_Res();
R2= Ask_For_Res();
R3= Ask_For_Res();
R4= Ask_For_Res();
R5= Ask_For_Res();
R6= Ask_For_Res();
R7= Ask_For_Res();
R8= Ask_For_Res();
R9= Ask_For_Res();
R10= Ask_For_Res();

RT= Parallel_Res(R1,R2,R3,R4,R5,R6,R7,R8,R9,R10);
cout<<"\n the total Resistance is"<<RT<<"Ohms\n";
}
float Ask_For_Res()
{
	float R;
	cout<<"\n Please enter the value for the Resisotr\n";
	cin>> R;
	return(R);
}
float Parallel_Res(float R1,float R2,float R3,float R4,float R5,float R6,float R7,float R8,float R9,float R10)
{
float RT;
RT= R1||R2||R3||R4||R5||R6||R7||R8||R9||R10;
return (RT);

/*Author*/cout<<"\n\n\t\t\t\t\t\t Made by Piter Garcia\n";
}