//Assignment3 (1): main project file.
//EET 110, 8:30am-10:45
//Prof. Issapour
//Garcia, Piter

#include "stdafx.h"
#include <iostream>

using namespace std;
#define PI 3.141592654

int main()
{
    //Title
		cout<<"\n Assingment#3";
		cout<<"\n Area of a Circle";
	//Author
		cout<<"\n Made by Piter Garcia";
 
    double A, r;

	//r= 2
		cout<<"\n please enter the value for the Radius(r) in ft";
		cin>>r;

	A= PI*r*r;

		cout<<"the value for Area of a Circle(A) is " <<A<<" sq ft\n";
	return 0;

	
}