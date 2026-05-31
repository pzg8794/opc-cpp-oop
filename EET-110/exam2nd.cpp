//Exam No.2
EET 110, 8:30am-10:45
Prof. Issapour	
Garcia, Piter */

#include "stdafx.h"
#include <iostream>
using namespace std;

double Ask_For_Res();
double Voltagedrop(double I, double R);

void main()
{				
							
double R1,R2,R3,R4,R5,I,Vi,Vf,V,Vd,P,Rt;


R1=Ask_For_Res();
R2=Ask_For_Res();
R3=Ask_For_Res();
R4=Ask_For_Res();
R5=Ask_For_Res();

Rt= (R1+R2+R3+R4+R5);
cout<<"\n The total resistor is"<<Rt<<"in Ohms";

cout<<"\n Please enter the step voltage";
cin>>V;

cout<<"\n Please enter the intial voltage";
cin>>Vi;

cout<<"\n Please enter the final voltage";
cin>>Vf;

for (V=Vi; V<=Vf;++V)
{
	I= V/R1;
	cout<<"\n The total current is"<<I<< "in Amps";
	
	Vd= Voltagedrop(I,R1);
	
	P= I*Vd;
	cout<<"\n The power accross the resistor is"<<P<<" in Watts";

	if(P>0.040)
	{ cout<<"\n Power exeeded max levels";}

	R1=R2=R3=R4=R5;
}

}
double Ask_For_Res()
{
	double R;
	cout << "\n Please enter the value for Resistor (R) in Kilo Ohms: ";
	cin >> R;
	return (R);
}

double Voltagedrop(double I, double R)
{
	double Vd;
	Vd= I*R;
	cout<<"\n The voltage drop is"<<Vd<< "in Volts";
return (Vd);
}
