// A 7A1.cpp 
// Diamela Duverge E.
//EET-110

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
int i;
	float R1, R, Rp;
cout << "\t\t Resistance Measurement (Theoretical)\n";
	
		   	R1 = 20;
	cout << "\n Rt =" << R1 << "Kohms";

		for (i = 1 ; i <= 6; i++ )

	{
R =10;

Rp = ((R1*R)/(R1+R))+ 10;
cout << "\n Rt =" << Rp << "Kohms";
R1 = Rp;
	}


cout << "\n Thanks for using This Program! \n";
return 0;
}

