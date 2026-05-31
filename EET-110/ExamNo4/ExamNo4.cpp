/*ExamNo4.*/
 
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
float AVG, x, H, L, F, C; 

	//C= Celsius Centrigrade
	cout<<"\n Please enter the value for Degrees Celsius(C) in degreeIn";
	cin>>C;

	cout<<'\n Please enter the value for the high temperature\n";
	cin>>H;

	cout>>"\n Please enter the value for the low temperature\n";
	cin>>L;

	for (x=1, x=30, x=++x)
	{
	F=(9/5)*C+32;
	cout << " \n"<<F<<"degrees" << "\t\t" << F<< "degrees";

	AVG=(H+L)/2;
	cout << " \n"<< AVG <<"degrees";
	}

	return 0;
}