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

double Ask_For_Res();
double Parallel_Res1(double R1, double R2);
double Parallel_Res2(double Req1, double R3);
double Parallel_Res3(double Req2, double R4);
double Parallel_Res4(double Req3, double R5);
double Parallel_Res5(double Req4, double R5);
double Parallel_Res6(double Req5, double R5);
double Parallel_Res7(double Req6, double R5);
double Parallel_Res8(double Req7, double R5);
double Total_Parallel_Res(double Req8, double R10);


void main()
{				/*Title*/cout<<"\n\t\t\t\t Assingment#5";
			cout<<"\n\t\t\t Voltage Drop in a Series Circuit";
        /*Author*/cout<<"\n\n\t\t\t\t\t\t Made by Piter Garcia\n\n";
							
double  R1,R2,R3,R4,R5,Req1,Req2,Req3,Req4,Req5,Req6,Req7,Req8,Rt;
	
R1= Ask_For_Res();
R2= Ask_For_Res();
R3= Ask_For_Res();
R4= Ask_For_Res();
R5= Ask_For_Res();
Req1= Parallel_Res1(R1, R2);
cout<<"\n The Parallel Resistor is\t"<<Req1<<"\tKillo Ohms\n";
Req2= Parallel_Res2(Req1, R3);
cout<<"\n The Parallel Resistor is\t"<<Req2<<"\tKillo Ohms\n";
Req3= Parallel_Res3(Req2, R4);
cout<<"\n The Parallel Resistor is\t"<<Req3<<"\tKillo Ohms\n";
Req4= Parallel_Res4(Req3, R5);
cout<<"\n The Parallel Resistor is\t"<<Req4<<"\tKillo Ohms\n";
Req5= Parallel_Res5(Req4, R5);
cout<<"\n The Parallel Resistor is\t"<<Req5<<"\tKillo Ohms\n";
Req6= Parallel_Res6(Req5, R5);
cout<<"\n The Parallel Resistor is\t"<<Req6<<"\tKillo Ohms\n";
Req7= Parallel_Res7(Req6, R5);
cout<<"\n The Parallel Resistor is\t"<<Req7<<"\tKillo Ohms\n";
Req8= Parallel_Res8(Req7, R5);
cout<<"\n The Parallel Resistor is\t"<<Req8<<"\tKillo Ohms\n";
Rt= Total_Parallel_Res(Req8, R5);
cout<<"\n The Total Parallel Resistor is\t"<<Rt<<"\tKillo Ohms\n";
}

double Ask_For_Res()
{
double R;
cout<<"\nPlease enter the value for Resistor\n";
cin>>R;
return (R);
}
double Parallel_Res1(double R1, double R2)
{
	double Req1;
	Req1= (R1*R1)/(R1+R2);
	return (Req1);
}
double Parallel_Res2(double Req1, double R3)
{
	double Req2;
	Req2= (Req1*R3)/(Req1+R3);
	return (Req2);
}
double Parallel_Res3(double Req2, double R4)
{
	double Req3;
	Req3= (Req2*R4)/(Req2+R4);
	return (Req3);
}
double Parallel_Res4(double Req3, double R5)
{
	double Req4;
	Req4= (Req3*R5)/(Req3+R5);
	return (Req4);
}
double Parallel_Res5(double Req4, double R5)
{
	double Req5;
	Req5= (Req4*R5)/(Req4+R5);
	return (Req5);
}
double Parallel_Res6(double Req5, double R5)
{
	double Req6;
	Req6= (Req5*R5)/(Req5+R5);
	return (Req6);
}
double Parallel_Res7(double Req6, double R5)
{
	double Req7;
	Req7= (Req6*R5)/(Req6+R5);
	return (Req7);
}
double Parallel_Res8(double Req7, double R5)
{
	double Req8;
	Req8= (Req7*R5)/(Req7+R5);
	return (Req8);
}
double Total_Parallel_Res(double Req8, double R5)
{
	double Rt;
	Rt= (Req8*R5)/(Req8+R5);
	return (Rt);
}
