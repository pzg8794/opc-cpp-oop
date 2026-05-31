/*
Name : Piter Garcia
Subje: Mark's Bills Management
Date : Jun 10th, 2011
Discription : This program will ask the user for the amount of checks written during the month.
Then, it will print out number of checks, its fees along with the banck fees.
*/

#include "MarksClass.h"

int main()
{	char MonthName[100];
	
	MAA MAA;
 	MAA.i=1;

	while(MAA.i!=0)
	{	   
	cout<<" Please Enter Your Full Name:\n ";
	getline(cin, MAA.FN);

	ofstream outData;
	// Assigning the file name for the program to read the outputoutData.
	cout<<" Please Enter the Month You Will Be Working on Followed by Output:\n ";
	cin>>MonthName;
	outData.open(MonthName);

	ofstream savedData;
	// Assigning the file name for the program to read the outputoutData.
	cout<<" Please Enter the Month You Will Be Working on Followed by Input:\n ";
	cin>>MonthName;
	savedData.open(MonthName);
	
	cout<<"\n Please enter the date in its numerical way: \n ";
	cin>>MAA.month>>MAA.day>>MAA.year;

	cout<<fixed<<setprecision(2)<<endl;
	
	if      (MAA.day==1) {MAA.T='s'; MAA.H='t';}
	else if (MAA.day==2) {MAA.T='n'; MAA.H='d';}
	else if (MAA.day==3) {MAA.T='r'; MAA.H='d';}
	else	{MAA.T='t'; MAA.H='h';}
	
	MAA.TGA=0;
	cout<<" Please Proceed to Enter the Following Spendings for the Month of "; MAA.date(outData, MAA.month);
	cout<<"\n Please enter your Gross Amount \n ";
	cin>>MAA.GA; savedData<< MAA.GA<<endl; 
	cout<<" Please enter the amount spent in food shopping "; 
	cout<<" \n "; cin>>MAA.FS;	savedData<< MAA.FS<<endl;
	cout<<" Please enter the amount of the Cellphone Bill "; 
	cout<<" \n "; cin>>MAA.MB;	savedData<< MAA.MB<<endl;
	cout<<" Please enter  the Homephone Bill amount "; 
	cout<<" \n "; cin>>MAA.HPB;	savedData<< MAA.HPB<<endl;	
	cout<<" Please enter the Cable Bill amount "; 
	cout<<" \n "; cin>>MAA.CB;	savedData<<	MAA.CB<<endl;
	cout<<" Please the Gass & ELectricity Bill amount "; 
	cout<<" \n "; cin>>MAA.GEB;	savedData<< MAA.GEB<<endl;
	cout<<" Please enter the  amount spent in Gass for the Car "; 
	cout<<" \n "; cin>>MAA.CG;	savedData<< MAA.CG<<endl;
	cout<<" Please enter your Mother's Cable Bill amount "; 
	cout<<" \n "; cin>>MAA.MC;	savedData<< MAA.MC<<endl;
	cout<<" Please enter your Appartment's Rent Bill amount ";
	cout<<" \n "; cin>>MAA.AR;	savedData<<	MAA.AR<<endl;
	cout<<" Please enter your Health Insurance Bill amount "; 
	cout<<" \n "; cin>>MAA.HIB;	savedData<< MAA.HIB<<endl;
	cout<<" Please enter your Car Insurance Bill amount "; 
	cout<<" \n "; cin>>MAA.CIB;	savedData<< MAA.CIB<<endl;
	cout<<" Please enter the amount of both Gym Bills "; 
	cout<<" \n "; cin>>MAA.GB1>>MAA.GB2; MAA.GB= MAA.GB1+MAA.GB2;	savedData<<MAA.GB1<<"  ";	savedData<<MAA.GB2<<" ";	savedData<<endl;
	cout<<" Please enter the number of visits to the Chiropractor "; 
	cout<<" \n "; cin>>MAA.n;	savedData<<	MAA.n<<" ";	MAA.CPB= 250/12*MAA.n;	savedData<<endl;
	cout<<" Please enter the amount spent in your HairCut "; 
	cout<<" \n "; cin>>MAA.HC;	savedData<< MAA.HC<<endl;
	cout<<" Please enter your Cleaning Lady Bill amount "; 
	cout<<" \n "; cin>>MAA.CLB;	savedData<< MAA.CLB<<endl;
	cout<<" Please enter the Triple A RS Assistance annual payment ";
	cout<<" \n "; cin>>MAA.TAB;		savedData<< MAA.TAB<<" ";	 MAA.TAB= MAA.TAB/12;	savedData<<endl;
	cout<<"\n\n";
	
	MAA.TotalBill(outData, MAA);
	MAA.KeethPayments(outData, MAA);
	MAA.AmericanExpGreenCard(outData, MAA);
	MAA.MarksChecking(outData, MAA);

	cout<<" Do you want to do another Bill Summary? \n If so type 1 otherwise type 0:\n ";
	cin>>MAA.i;
}

return 0;
}