//Assignment #4 A
//Name: Julio Sanchez
/*Description: This program calculates the voltage across a given resistor
for a provided range of current. */

#include "stdafx.h"
#include "iostream"

using namespace System;
using namespace std;

void main()
{
    double I0, IF, x;
	float V, R;
	cout << " \n Please enter the value of the Resistor(R) in Kohms: \n";
	cout << "\t";
	cin >> R;
	cout << " \n \n Please enter the initial Current(I0) in mA: \n";
	cout <<"\t";
	cin >> I0;
	cout << " \n \n Please enter the final Current(IF) in mA: \n";
	cout << "\t";
	cin >> IF;
	cout << " \n \n RESISTOR \t \t CURRENT \t \t VOLTAGE \n";
	for(x=I0;x<=IF;x=x+250)
	{
		V= R*x;
		cout << " \n" << R << " Kohms" << " \t \t " << x << " mA" << " \t \t " << V << " Volts";
	}
	cout << " \n \n";

    return;
}
