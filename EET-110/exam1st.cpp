/* ExamNo.1.cpp : main project file.
EET 110, 8:30am-10:45
Prof. Issapour	
Garcia, Piter */

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

char Ask_for_Employees_name();
int Ask_for_yearlysalary();
double Ask_for_taxpercentage();

using namespace System;

void main()
{
   char name;
   double p, tax,w,y;
   
   name= Ask_for_Employees_name();
   
   cout<<"\n Please enter the salary yearly";
   cin>>y;
   
   p= Ask_for_taxpercentage();
   cout<<"\n the tax percentage is"<<p<<"$dollars";
   
  // weekly Salary
   w= y/52;
   cout<<"\n The Weekly Salary is "<<w<<"\t $dollars\n "; 
   
   tax= p*w/100;
   cout<<"\n The Tax is"<<tax<<"\t $dollars\n";
   
}

  char Ask_for_Employees_name()
  { 
  char name;
  cout<<"\n Please enter the name of the employee";
  cin>>(name);
  return(name);
  }
  double Ask_for_taxpercentage()
  {
    double p;
	cout<<"\n Please enter the tax percentage";
	cin>>(p);
	return(p);
  }

