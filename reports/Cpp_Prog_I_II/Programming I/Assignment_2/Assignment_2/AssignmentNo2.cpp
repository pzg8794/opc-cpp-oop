/*C++ Homework Assignment(2)
Subjet: BCS-120
Name: Piter Garcia
Program discription: This program  converts an 
elapsed time in seconds to hours,minutes and seconds.*/

#include <iostream>
#include <string>
using namespace std;


const int Hour=3600;
const int Minute=60;
int main ()
{

int x,x1,y,z,ts;

cout << "\n\t\t\t Homework Assignment # 2\n" << "\t\t\t     By Piter Garcia\n\n";
cout<<"\n\t Elapsed Time Convertion from Seconds to Hrs,Mins,and Seconds";
cout<<"\n\t==============================================================\n\n";


cout << " \n\n Please enter the elapsed time in seconds\n ";
cin>>ts;

	
	x= ts/Hour;
	//X= Represents the Number of Hours.

	x1 = ts%Hour;
	y= x1/Minute;
	//Y= Represents the Number of Minutes.

	z= x1%Minute;
	//Z= Represents the Numbre of Seconds.

	cout<< "\n The Elapsed time in Hour, Minutes and Seconds is " << x << ":" << y << ":" << z <<"\n\n ";
	return 0;

}