/*
Name : Piter Garcia
Subje: BCS-120
Date : Oct 18, 2010
Discription : This program will ask the user for the amount of checks written during the month.
Then, it will print out number of checks, its fees along with the banck fees.
*/

#include <iostream>
#include <iomanip> 

using namespace std;
int main ()
{
int i, x, n, n1, n2, n3;
double CF, CF1, CF2, CF3, BF, BF1, BF2, BF3;
//CF= Checks Written
//BF= Banck Fees
//x=n= Number of Checks
	
	cout<<"\n\n";
	cout<<right<<setw(42)<< " Laboratory # 7 \n" <<setw(44)<<right<< " By  Piter Garcia\n\n " ;
	cout<<"\n\n";
	cout<<right<<setw(45)<< " If Statement Program \n" <<setw(49)<<right<< " ============================\n\n";

	for (i=1;i<=4;i++)
{	
	cout<<" Please enter the Amount of Checks written during the month:\n ";
	cin>>x;	


	if (x>=1&&x<20) // fee for less than 20 checks.
	{	CF= x*0.1;
		BF= CF+10;
		n=x; //number of checks written.
	}

	if(x>=20&&x<=39) // fee for less than 39 checks.
	{
		CF1= x*0.08;
		BF1= CF1+10; 
		n1=x;//number of checks written.
	}

	if (x>39&&x<=59) // fee for less than 59 checks.
	{
		CF2= x*0.06;
		BF2= CF2+10;
		n2=x;//number of checks written.
	}
		
	if (x>=60)		// fee for more than 59 checks.
	{	CF3= x*0.04;
		BF3= CF3+10;
		n3=x;//number of checks written.
	}

}	
	
	cout<<"\n\n";	//Banck's Fee According to the Number of Checks Written during such Month.
	cout<<right<<setw(45)<< " Banck's Fee per Month \n";
	cout<<right<<setw(45)<< "-----------------------";
	cout<<right<<setw(45)<< "\n\n Number of Checks		Checks'Fee		Banck's Fee\n";
	cout<<setw(49)<<right<< " ____________________________________________________________________\n\n";
	
	cout<<setw(10)<< n  << right<<setw(28)<< CF  << setw(25)<< BF  <<"\n";
	cout<<setw(10)<< n1 << right<<setw(28)<< CF1 << setw(25)<< BF1 <<"\n";
	cout<<setw(10)<< n2 << right<<setw(28)<< CF2 << setw(25)<< BF2 <<"\n";
	cout<<setw(10)<< n3 << right<<setw(28)<< CF3 << setw(25)<< BF3 <<"\n\n";


return 0;
}
