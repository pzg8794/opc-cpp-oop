// Assignment 7A1.cpp : main project file.
// Angel Segura.

#include "stdafx.h"
#include<iostream>
using namespace std;
using namespace System;

double ask_for_res();
double series(double R1, double R2);
double ladder(double R1, double R2);

void main()
{
    int n=1;
	double R1,R2,R,Rs,Rl;
	
	R1=ask_for_res();
	
	for(n=1;n<=6;n++)
	{			
		R2=ask_for_res();		
		Rs=series(R1,R2);
		R=ask_for_res();
		R1=ladder(Rs,R);
		cout<<"\n The equivalent resistor in the ladder section is:\t" <<R1 <<"Ohms\n\n";
	}
	
}
double ask_for_res()
{
	double R;
	cout<<"\n Please enter the value of the Resistor in Ohms:\t";
	cin>>R;
	return(R);
}
double series(double R1, double R2)
{
	return(R1+R2);
}
double ladder(double Rs, double R)
{
	return((R*Rs)/(R+Rs));
}




