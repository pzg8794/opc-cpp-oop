// Assignment2 (3A): main project file.
//EET 110, 8:30am-10:45
//Prof. Issapour
//Garcia, Piter

#include "stdafx.h"
#include <iostream>

using namespace std;
#define PI 3.14159265

int main()
{
    double XL, F, L;

	//L=2.5;
cout<<"\n please enter the value for L in H";
cin>>L;

	//F=1500;
cout<<"\n please enter the value for F in Hz";
cin>>F;

	XL=((2*PI)*F)*L;
	cout<<"the value for XL is " <<XL<<" ohms\n";
	return 0;

	}