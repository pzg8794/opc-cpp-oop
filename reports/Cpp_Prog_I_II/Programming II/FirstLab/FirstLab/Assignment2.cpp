/*C++ Homework Assignment(2)
Subjet: BCS-120
Name: Piter Garcia
Program discription: This program  converts an 
elapsed time in seconds to hours,minutes and seconds.*/

#include <iostream>
using namespace std;

int main ()
{
cout << "\n\t\t\t Homework Assignment # 2\n"; 
cout << "\t\t\t     By Piter Garcia\n\n";
	


int X, Z, Y, q, p, ts;
//ts is the elpased time given in seconds.


cout<<"\n\t Elapsed Time Converted from Seconds to Hrs,Mins,and Seconds";
cout<<"\n\t=============================================================\n\n";

cout << " \n\n Please enter the elapsed time in seconds\n ";
cin>>ts;

X= ts%360;
Z= ts%60;
Y= X/Z;
q= Y/Z;
p= Y/q;

cout<<"\n "<< q <<":"<< p <<":"<< Z << " \n" << endl;
return 0;

}