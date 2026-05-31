/*
Name : Piter Garcia
Subje: BCS-120
Date : Sept 22, 2010
Discription : This program will calculate and print the monthly paycheck for an employee 
 after taking taxes deductions:
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main ()
{
cout << "\n\t\t\t Homework Assignment # 3\n" << "\t\t\t     By Piter Garcia\n\n";
cout<<"\n\t\t\t Monthly Paycheck Program"<<"\n\t\t\t==========================\n\n";

double FIT, ST, SST, MMT, PP, HI, NP, GA;
string firstname, lastname;		

						cout<<"\n Please Enter the Employee's First and Last Name in Order:\n ";
						cin>> firstname>> lastname;
	
						cout<<"\n Please Enter the Gross Amount for " << lastname<<" "<<firstname <<"'s Monthly Pay check in Dollars:\n ";
						cin>> GA;
	
FIT= 15./100*GA;
//Federal Income Tax: 15%

ST= 3.5/100*GA;
//State Tax: 3.5%

SST= 5.75/100*GA;
//Social Security Tax: 5.75%

MMT= 2.75/100*GA;
//Medicare/Medicaid Tax: 2.75%

PP= 5./100*GA;
//Pension Plan: 5%

HI= 75;
//Health Insurance: $75.00
 
NP= GA -(FIT+ST+SST+MMT+PP+HI);
// Net Pay

	
	cout<<setprecision(2)<<fixed;
	// it is used to set output to 2 decimals to the right.
	
	cout<<"\n\n "<<setw(1)<<left<< lastname<<" "<< firstname;
	// used to show name and last name given by the user.

	cout<<"\n Gross Amount: ........."<<setw(48)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< GA;
	cout<<"\n Federal Income Tax: ..."<<setw(48)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< FIT;
	cout<<"\n State Tax: ............"<<setw(48)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< SST;
	cout<<"\n Socia Security Tax: ..."<<setw(48)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< SST;
	cout<<"\n Medicare/Medicaid Tax: "<<setw(48)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MMT;
	cout<<"\n Pension Plan: ........."<<setw(48)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< PP;
	cout<<"\n Health Insurance: ....."<<setw(48)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< HI;
	cout<<"\n Net Pay: .............."<<setw(48)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< NP <<"\n\n ";
   
	//setw()is used to allined the outputs and give them the same number of space in on colum.
	
	// cout<<setfill('.'); is used to fill the spaces left before the numbers with periods.

	// cout<<setfill(' '); is used to fill the spaces left after the numbers with blank spaces.

return 0;

}



