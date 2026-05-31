#include "BillsComparision.h"

int main()
{	char MonthName[100], MonthName1[100],MonthName2[100];
	MAA MAA;
 	MAA.i=1;

	while(MAA.i!=0)
	{	   
	cout<<" Please Enter Your Full Name:\n ";
	getline(cin, MAA.FN);

	ifstream inData1;
	// Assigning the file name for the program to read the output Data.
	cout<<" Please Enter First Month You Will Compare Followed by Input:\n ";
	cin>>MonthName1;
	inData1.open(MonthName1);

	ifstream inData2;
	// Assigning the file name for the program to read the input Data.
	cout<<" Please Enter Second Month You Will Working on Followed by Input:\n ";
	cin>>MonthName2;
	inData2.open(MonthName2);

	ofstream outData;
	// Assigning the file name for the program to read the output Data.
	cout<<" Please Abreviate Both Months in One Word Followed by Output:\n ";
	cin>>MonthName;
	outData.open(MonthName);
	
	cout<<"\n Please enter the date in its numerical way: \n ";
	cin>>MAA.month>>MAA.day>>MAA.year;

	cout<<fixed<<setprecision(2)<<endl;
	
	if      (MAA.day==1) {MAA.T='s'; MAA.H='t';}
	else if (MAA.day==2) {MAA.T='n'; MAA.H='d';}
	else if (MAA.day==3) {MAA.T='r'; MAA.H='d';}
	else	{MAA.T='t'; MAA.H='h';}
	
	MAA.TGA[0]=(0,0,0);
	cout<<" Please Wait While We Process the Following Spendings for the above Months"; 
	inData1>>MAA.GA[0]; inData2>>MAA.GA[1]; 
	// amount spent in food shopping 
	inData1>>MAA.FS[0];	inData2>>MAA.FS[1];
	//the amount of the Cellphone Bill 
	inData1>>MAA.MB[0];	inData2>>MAA.MB[1];
	//the Homephone Bill amount 
	inData1>>MAA.HPB[0];inData2>>MAA.HPB[1];	
	//Cable Bill amount 
	inData1>>MAA.CB[0];	inData2>>MAA.CB[1];
	//the Gass & ELectricity Bill amount 
	inData1>>MAA.GEB[0];inData2>>MAA.GEB[1];
	//the  amount spent in Gass for the Car
	inData1>>MAA.CG[0];	inData2>>MAA.CG[1];
	//your Mother's Cable Bill amount
	inData1>>MAA.MC[0];	inData2>>MAA.MC[1];
	//your Appartment's Rent Bill amount
	inData1>>MAA.AR[0];	inData2>>MAA.AR[1];
	//your Health Insurance Bill amount
	inData1>>MAA.HIB[0];inData2>>MAA.HIB[1];
	//your Car Insurance Bill amount
	inData1>>MAA.CIB[0];inData2>>MAA.CIB[1];
	//the amount of both Gym Bills
	inData1>>MAA.GB1[0]>>MAA.GB2[0]; inData2>>MAA.GB1[1]>>MAA.GB2[1]; MAA.GB[0]= MAA.GB1[0]+MAA.GB2[0];	MAA.GB[1]= MAA.GB1[1]+MAA.GB2[1];			
	//the number of visits to the Chiropractor 
	inData1>>MAA.n[0];	inData2>>MAA.n[1];	MAA.CPB[0]= 250/12*MAA.n[0] ;MAA.CPB[1]= 250/12*MAA.n[1];
	//the amount spent in your HairCut
	inData1>>MAA.HC[0];	inData2>>MAA.HC[1];
	//your Cleaning Lady Bill amount
	inData1>>MAA.CLB[0];inData2>>MAA.CLB[1];
	//the Triple A RS Assistance annual payment
	inData1>>MAA.TAB[0];inData2>>MAA.TAB[1];	 MAA.TAB[0]= MAA.TAB[0]/12;	MAA.TAB[1]= MAA.TAB[1]/12;
	
	MAA.TotalBill(outData, MAA);
	MAA.KeethPayments(outData, MAA);
	MAA.AmericanExpGreenCard(outData, MAA);
	MAA.MarksChecking(outData, MAA);

	cout<<" Do you want to compare more Bill Summaries? \n If so type 1 otherwise type 0:\n ";
	cin>>MAA.i;
}

return 0;
}