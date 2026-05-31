// ExamNo.1.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

double Ask_for_Employees_name();
int weekly_salary(int y);
double tax(double p, int weekly);

using namespace System;

void main()
{
   double name;
   double p, tax; 
   int weekly,y;
   name= Ask_for_Employees_name();
   //yearly_salary
   y=1;
   cout<<"\n Please enter the value for the yearly salary\n";
   cin>>y;
   p=1;
   //percentage
   cout<<"\n Please enter the value for the Percentage\n";
   cin>>p;
   weekly= weekly_salary(y);
   tax= tax(p,weekly);
}

double Ask_for_Employees_name()
{
	double name;
	cout<<"\nPlease enter the name of the employess\n";
	cin>>name;
	return name;
}

int weekly_salary(int y)
{
	int weekly;
	weekly= y/52;
	cout<<"\n" << weekly << "$ dollars" <<"\n";

}
double tax(double p, int weekly)
{
	double tax;
	tax= p*(weekly/100);
	cout<<"\n"<< tax << "$dollars"<<"\n";
}
