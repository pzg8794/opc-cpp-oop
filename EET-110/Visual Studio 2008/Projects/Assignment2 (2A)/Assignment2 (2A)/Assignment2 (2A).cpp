// Assignment2 (2A).cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;



int main()
{
    float It, Vt, R1, R2, R3;

	//R1=1000;
cout<<"\n please enter the value for R1 in ohms";
cin>>R1;

	//R2=1500;
cout<<"\n please enter the value for R2 in ohms";
cin>>R2;

	//R3=1500;
cout<<"\n please enter the value for R3 in ohms";
cin>>R3;

	//Vt=4.8;
cout<<"\n please enter the value for Vt in Volts";
cin>>Vt;

It= Vt/(R1+R2+R3);
cout<<"the value for It is " <<It<<" amps\n";
	return 0;





}
