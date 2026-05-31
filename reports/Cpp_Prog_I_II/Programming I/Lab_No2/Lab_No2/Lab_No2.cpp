/*C++ Lab(2)
Subjet: BCS-120
Name: Piter Garcia
Program discription: This program calculates the avarage
of its assigned variables.*/

#include <iostream>
using namespace std;

int main ()
{

cout << "\n\t\t\t      Laboratory #2\n"; 
cout << "\t\t\t     By Piter Garcia\n\n";
	

int num1, num2, num3;
double Avg;

cout<<"\n\t\t Total Avarage of Three Assigned Variables";
cout<<"\n\t\t============================================\n\n";

cout<< " Please Enter the Value for num1\n ";
cin>> num1;
cout<< " Please Enter the Value for num2\n ";
cin>> num2;
cout<< " Please Enter the Value for num3\n ";
cin>> num3;

Avg= (num1 + num2 + num3)/ 3.0;
// Avg is avarage of the three assigned variables.

cout<<"\n  Assigned Variables:\n  -------------------\n  num1 = " << num1 <<"\n  num2 = "<< num2<<"\n  num3 = "<< num3<<"\n\n";
cout<<"  Total Average of "<< num1<< ", "<< num2<< ", and "<< num3<< " is "<< Avg << "\n\n";
return 0;

}