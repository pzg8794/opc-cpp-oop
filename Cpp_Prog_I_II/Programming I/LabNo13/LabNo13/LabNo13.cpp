/*
Name : Piter Garcia
Subje: BCS-120
Date : Dic 1, 2010
Discription : This program will ask the user for a radius and its units.
Then, it will print out the area along with its circuference and the radius itself with their respect units.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
double pi=3.1416;

void calculations(double&, double&, double&);

int main ()
{
									// Author and Type of Lab.
	cout<<"\n\n";
	cout<< "  Lab Assignment # 13 " <<setw(58)<<right<< " By  Piter Garcia\n " ;
	cout<< " -------------------" <<setw(57)<<right<< "----------------" ;
	cout<<"\n\n\n";
	cout<<right<<setw(63)<< " References Arguments and Globla Variables \n" <<setw(67)<<right<< " ================================================\n\n";
	cout<<"\n\n\n\n";

	double r, circumference, area;
	string unit;//unit
	calculations(r,circumference, area); //calling function to get the circumference and area along with its radius.
	cin>>unit;

	 cout<<"\n\n";
	 //Displaying Area and Circumference wit its radious.
	 cout<<right<<"  ----------------------------------------------------------------------------\n";
	 cout<<right<<setw(60)<< " Area and Circumference Data Table \n";
	 cout<<right<<"  ----------------------------------------------------------------------------\n";
	
	 cout<<setprecision(2)<<fixed;// maximum two number after the decimal point.
	 
	 //Table Data for the above parameters.
	 cout<<"  Radius "<<setw(30)<<right<<" Area"<<setw(38)<<right<<"Circumference"<<endl;
	 cout<<setw(6)<<r<<setw(2)<<unit<<right<<setw(27)<<area<<setw(2)<<right<<unit<<"^2"<<setw(36)<<circumference<<setw(2)<<right<<unit<<endl;

	 cout<<right<<"  ----------------------------------------------------------------------------\n";

	 cout<<"\n\n  ";
	return 0;
}

void calculations(double& r, double& circumference, double& area)// function to get the radius.
{
	cout<<"  Please enter the Radius and its Units \n  "; // asking for radius.
	cin>>r;

	circumference= 2*pi*r; // formula for the circumference.
	area= pi*r*r; // formula for the Area.
}