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
	

cout<<"\n\t Elapsed Time Converted from Seconds to Hrs,Mins,and Seconds";
cout<<"\n\t=============================================================\n\n";

int x, z, y, q, p, ts;
//ts is the elpased time given in seconds.


ts= 9630;

x= ts%360;
z= ts%60;
y= ;(ts%360)/z;
q= (ts%360)/z/z;
p= (ts%360)/z/((ts%360)/z/z);

cout<<"\n "<< q <<":"<< p <<":"<< z << " : \n";
return 0;

}