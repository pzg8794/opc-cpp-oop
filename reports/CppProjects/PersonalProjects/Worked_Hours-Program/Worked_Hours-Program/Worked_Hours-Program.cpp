/*Work Scheduled Hours : main project file.
Hours worked for the first two weeks
Garcia, Piter
Discription: This will capute the amount of money received on a check. */

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

double Ask_For_Month();
double Ask_For_Morning_Shifts();
double Total_Morning_Shifts();
double Ask_For_Afternoon_Shifts();
double Total_Afternoon_Shifts();
double Ask_For_Full_Shifts();
double Total_Full_Shifts();
double Total_Hours(double R41, double R21, double R31);
double Total_Payment( double Rt);
double Total_Days(double R4, double R2, double R3);


void main()
{							//Title:
					cout<<"\n\t\t\t\t Practice in Class";
			cout<<"\n\t\t\t\t Writing Functions\n\n";
		   /*Author*/cout<<"\n\n\t\t\t\t\t\t Made by Piter Garcia\n\n";
double R,I, I2, R1, R2, R3, R4, R21, R31, R41, Pt,Dt,Ht;

	R1= Ask_For_Month();
	R2= Ask_For_Morning_Shifts();
	R21= Total_Morning_Shifts();
	R3= Ask_For_Afternoon_Shifts();
	R31= Total_Afternoon_Shifts();
	R4= Ask_For_Full_Shifts();
	R41= Total_Full_Shifts();
    Ht= Total_Hours( R21, R31, R41);
	Pt= Total_Payment (Ht);
	Dt= Total_Days(R2,R3,R4);
	R= 8.50;
	I= 4;
	I2=4.5;

cout << "\n\n\t" << "Total Hours" << "\t\t" <<"Total Payment" 
<<"\t\t"<<"Total Days";

cout << " \n\t" << Ht << " Hrs "<<"\t\t"<<Pt<<" $Dollars" 
<<"\t\t "<<Dt<<" Days";
cout << " \n \n";
}

double Ask_For_Month()
{
	double R1;
	cout<<"\n Please Enter the Month for the Due Payment\n ";
	cin>>R1;
	return (R1);
}
double Ask_For_Morning_Shifts() 
{
	double R2;
	cout<<"\n Please Enter the Morning Shift days worked";
	cin>>R2;
	return (R2);
}
double Total_Morning_Shift(double R2, double I2)
{
	double R21;
	R21= R2*I2;
	return (R21);
}
double Ask_For_Afternoon_Shift()
{
	double R3;
	cout<<"\n Please Enter the Afternoon Shift days worked";
	cin>>R3;
	return (R3);
}
double Total_Afternoon_Shift(double R3, double I)
{
	double R31;
	R31= R3*I;
	return (R31);
}
double Ask_For_Full_Shift()
{
	double R4;
	cout<<"\n Please Enter the Full Shift days worked";
	cin>>R4;
	return (R4);
}
double Total_Full_Shift(double R4, double R)
{
	double R41;
	R41= R4*R;
	return (R41);
}
double Total_Hours(double R41, double R21, double R31)
{
	double Ht;
	Ht= (R41+R21+R31);
	return(Ht);
}
double Total_Payment(double Ht, double R)
{
	double Pt;
	Pt= R*Ht;
	return (Pt);
}
double Total_Days(double R4, double R2, double R3)
{
	double Dt;
	Dt= (R4+R2+R3);
	return(Dt);
}