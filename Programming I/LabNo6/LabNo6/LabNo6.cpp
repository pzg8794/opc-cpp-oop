/*
Name : Piter Garcia
Subje: BCS-120
Date : Oct 14, 2010
Discription : This program will check if the Month times the day is equal to the year.
It will print weather the date is magic or not, depending if the statement it's truth or false.
*/

#include <iostream>
#include <iomanip> 

using namespace std;
int main ()
{
int M, D, MD, Y;

	cout<<right<<setw(42)<< " Laboratory # 6 \n" <<setw(44)<<right<< " By  Piter Garcia\n\n " ;
	cout<<"\n\n";
	cout<<right<<setw(45)<< " If Statement Program \n" <<setw(49)<<right<< " ============================\n\n";

	cout<<" Please Enter the Month, Day, and Year in Two Digits Numerical Value: \n ";
	cin>> M >> D >>Y;
 
	MD=M*D;

if (Y == MD)

{	cout<<setw(44)<<right<<"The Date is Magic \n";
	cout<<setw(29)<<right<< M << " x " << D << " = " << MD <<"\n\n";
}

else 
	cout<<setw(45)<<right<<"  The Date is not Magic \n";
	cout<<setw(29)<<right<< M << " / " << D << " / " << Y <<"\n\n";

return 0;
}