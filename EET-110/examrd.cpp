#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
float AVG,H, L, F, C; 
int x;

	for (x=1; x<=30; x=++x)
	{
	// High and Low temperature
	cout<<"\n Please enter the value for the high temperature\n\t"; 
    cin>>H;

	cout<<"\n Please enter the value for the low temperature\n\t";
	cin>>L;

	AVG=(H+L)/2;
	
	C=H=L;

	F=(9/5)*C+32; 
	cout<<"\n \t\t Temperature Table\n";
	cout<<"\n Average \t\t Fahrenhait \t\t Celcius\n";
	cout <<"\n"<<AVG<<"degree"<<"\t\t"<<F<<"\degree"<<"\t\t"<<C<<"degree";
	}

	return 0;
}