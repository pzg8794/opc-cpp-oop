/*
Name : Piter Garcia
Subje: BCS-120
Date : Oct 18, 2010
Discription : This program will ask the user for its Cell Phone Personal information and Sevice used.
Then, it will print out its Cell Phone Personal Information along with its due amount.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main ()
{
int An; // An stands for Account Number.
double Sm, Am, Sc, Fm, Fm1, Fm2, Mo, Mo1, Mo2, cr, c1, c2, a, b,  p;
//Mo1= Day Minutes Over, Mo2= Night Minutes Over, c1= Charge for Day Mins, c2= Charge for Night Mins.
char ServiceCode;
string Fullname;
	
	cout<<"\n\n";			// Title and Name
	cout<<right<<setw(52)<< " Programming Assignment # 5 \n" <<setw(48)<<right<< " By  Piter Garcia\n\n " ;
	cout<<"\n\n";
	cout<<right<<setw(55)<< " Cellphone Bill Calculation Program \n" <<setw(56)<<right<< " =====================================\n\n";

cout<<" Please enter your First and Last Name: \n ";
getline(cin,Fullname);						//Asking for Customer Name.
cout<<" Please enter your Account Number: \n ";
cin>>An;											
cout<<" Please enter the Service Plan Code, either R(regular) or P(premium): \n ";
cin>>ServiceCode;									

switch (ServiceCode)
{
case 'R':	//R stands for Regular Cell Phone Service.
	cout<<" Please enter the Amount of Minutes used: \n ";
	cin>>Am;	// Am stands for Amount of Minutes.

	c1=a=b=c2=Mo1=Mo2=Fm1=Fm2=0;// No Extra charges.
	Fm= 50;		// Fm stands for Free Minutes
	if(Am<= Fm)	// 50 mins free. 
	{
		p=Sc=10;			// p stands for Price.
		Sm= 50;			// Sm stands for Minutes of Service.
		cr=0;
		Mo=0;
	}
	
	else 
	{	
		Sc=10;				// Sc stands for Service Cost.
		Mo=Am-Fm;			
		Sm= 50;
		cr=(Am-Fm)*0.20; // Charges over 50 minutes.
		p=cr+Sc;
	}	
	break;

case 'P':	// P stands for Premium Cell Phone Service.
	cout<<" Please enter the Amount of Minutes used in the Day: \n ";
	cin>>a;
	cout<<" Now Please enter Minutes used at night: \n ";
	cin>>b;
					// a and b stands for Day and Night minutes.
	Mo=cr=0;
	Fm1= 75; Fm2= 100; // Free Minutes
	if(a<=Fm1 && b<=Fm2) // 175 mins free.
	{
		c1=a=b=c2=Mo1=Mo2=0;	// No Extra Charges.
		Am= a+b;				// Amount of Minutes
		Sm= 175;				// Minutes of Service
		p=Sc=25;				// price and Service Cost
	}


	else if (a<=Fm1 && b>Fm2) // Night Minutes Exceeded.
	{
		c1=0;				
		Sm= 175;
		Sc=25;
		Mo1= a-Fm1;
		Mo2= b-100;
		Am= a+b;
		c2=(b-Fm2)*0.05;// Charges over 100.
		p= c1+c2+25;
	}
	else if (a>Fm1 && b<=Fm2) // Day Minutes Exceeded
	{
		c2=0;
		Sm= 175;
		Sc=25;
		Mo1= a-Fm1;
		Mo2= b-Fm2;
		Am= a+b;
		c1=(a-Fm1)*0.10; // Charges over 75 minutes.
		p= c1+c2+25;
	}
	else if(a>=Fm1 && b>=Fm2)//Both Exceeded.
	{
		Sm= 175;
		Sc=25;
		Mo1= a-Fm1;
		Mo2= b-Fm2;
		Am= a+b;
		c1=(a-Fm1)*0.10; // Charges over 75 minutes.
		c2=(b-Fm2)*0.05;// Charges over 100.
		p= c1+c2+25;
	 }
	break;

default:
	cout<<" Invalid Character \n ";	// To make the program reject any other char that is not R or P.
}
cout<<"\n\n\n ";
cout<<setprecision(2)<<fixed; // Setting Output Numbers to 2 points decimal

								//Cell Phone Bill Complete Information.
cout<<right<<setw(52)<< " Cell Phone Bill Information \n" <<setw(54)<<right<< "=============================\n\n";
cout<<setw(39)<<" Costumer Name: "<<Fullname<<"\n\n";
cout<<setw(17)<<"Minutes Type"<<right<<setw(15)<< "Plan Minutes"<<setw(15)<<"Minutes Used"<<setw(15)<<"Minutes Over"<<setw(15)<<right<<"Extra Charges\n";
cout<<setw(17)<<right<<"   ---------------------------------------------------------------------------\n";
cout<<setw(17)<< "Day Minutes"	<<right<<setw(15)<< Fm1 <<right<<setw(15)<< a  <<right<<setw(15)<< Mo1	   <<right<< setw(8)<<"$"<< setw(6)<< c1 <<"\n\n";
cout<<setw(17)<< "Night Minutes"<<right<<setw(15)<< Fm2 <<right<<setw(15)<< b  <<right<<setw(15)<< Mo2	   <<right<< setw(8)<<"$"<< setw(6)<< c2 <<"\n\n";
cout<<setw(17)<< "Total Service:"		<<right<<setw(15)<< Sm	<<right<<setw(15)<< Am <<right<<setw(15)<< Mo+Mo1+Mo2 <<right<< setw(8)<<"$"<< setw(6)<< cr+c1+c2 <<"\n\n";

cout<<setw(17)<<"Account Number"<<right<<setw(15)<< "Service Type"<<setw(15)<<"Service Cost"<<setw(15)<<"Total Minutes"<<setw(15)<<right<<"Due Amount\n";

cout<<setw(17)<< An	<<right<<setw(15)<< ServiceCode	<<right<<setw(9)<<"$"<<right<<setw(6)<< Sc <<setw(15)<< Am <<right<< setw(8)<<"$"<< setw(6)<< p <<"\n\n";
return 0;
}