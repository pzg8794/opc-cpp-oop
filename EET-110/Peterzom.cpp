/* ExamNo.3.cpp : main project file.
EET 110, 8:30am-10:45
Prof. Issapour	
Garcia, Piter */

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

double Ask_for_res();

void main()
{ double R,R1,R2,Rn;

cout<<"\n Please enter the value for the amount of resistors\n";
cin>>Rn;

cout<<"\n Please enter the value for the first resistor\n";
cin>>R1;

for(R=1; R<=Rn; ++R)
{
	R2= Ask_for_res();
	Req= (R1*R2)/(R1+R2);
	Req=R1;
}
cout<<"\n The value for the equivalente resistor is"<<Req<<"Ohms"\n;
}

double Ask_for_res()
{double R;
cout<<"\n Please enter the value of the resistor\n";
cin>>R;
}