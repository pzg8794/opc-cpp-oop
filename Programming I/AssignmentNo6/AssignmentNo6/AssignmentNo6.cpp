/*
Name : Piter Garcia
Subje: BCS-120
Date : Oct 23, 2010
Discription : This program will read information for each employee written in the input file.
It will reach each information according to its data and print out their weekly payroll 
along with the union payment information.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main ()
{
	ofstream outData;
	// Declaring variable for our output data.
	ifstream inData;
	// Declaring variable for our input data.

outData.open("AssignmentNo6_output.txt"); // Assigning the file name for the program to read the output
inData.open("AssignmentNo6_input.txt"); // Assigning the file name for the program to read the input.	
								
									//Assignment Number and Name
		outData<<"\n\n";
		outData<< "  Assignment # 6 " <<setw(58)<<right<< " By  Piter Garcia\n " ;
		outData<< "----------------" <<setw(57)<<right<< "------------------" ;
		outData<<"\n";
										 //Title
		outData<<right<<setw(50)<< " Weekly Payroll Program \n" <<setw(52)<<right<< " ==========================\n\n";
		outData<<"\n\n\n\n";

		outData<<right<<setw(52)<< " Employees Pay Information \n" <<setw(54)<<right<< " -------------------------------\n";
										// Table of Data
outData<<" _________________________________________________________________________\n\n";
outData<<setw(54)<<" Union \n";
outData<<" ID Number "<<setw(10)<<" Hours "<<setw(9)<<" Rate "<<setw(12)<<" Pay "<<setw(12)<<" Member "<<setw(9)<<" Dues "<<setw(12)<<" Net\n";
outData<<" _________________________________________________________________________\n\n";

 int MemberStatus, IDN;
 char M, M1, M2, M3, M4, M5, M6 ;				// Characters for Member status.
 double Hrs, RP, WP, D, N, TWP=0, TD=0, TN=0;	// Hours, Rate of Pay, Weekly Payroll, Due, Net,
												// Total Weekly Payroll, Total Dues, Total Net.

						//Checking that is reading the input file.
 if (!inData)
{
	outData<<" Cannot open theinput file.\n";
	outData<<" Program Terminated!!!\n";
	return 1;
}

while (!inData.eof())	// Assign to reach all the data written in the file.
{

inData>> IDN >> Hrs >> RP;
inData>> MemberStatus; 
switch (MemberStatus)
 {
 case 1:
	 
		M = 'Y'; M1= 'e'; M2= 's'; M3= ' '; M4= ' '; M5= ' '; M6= ' '; // Displaying characters of Yes for an employee.
	 	 
	 if ( Hrs<=40)		// Weekly Payroll for employees whose hours are less or equal to 40.
	 { WP= Hrs*RP;			
	 	 D= 10/100.*WP;		
		 N= WP-D;			
	 }
	 else				// Weekly Payroll for employees that exceed 40hrs.
	 { WP= 40*RP +(Hrs-40)*1.5*RP;	
		 D= 10/100.*WP;
		 N= WP-D;
	 }
 break;


 case 0:
		
		M = 'N'; M1= 'o'; M2= ' '; M3= ' ';	M4= ' '; M5= ' '; M6= ' ';	// Displaying the characters for an employee.
		
	 if ( Hrs<=40)		// Weekly Payroll for employees whose hours are less or equal to 40.
	 { WP= Hrs*RP;
	     D= 5;
		 N= WP-D;
	 }
	 else				// Weekly Payroll for employees that exceed 40hrs.
	 {	 WP= 40*RP +(Hrs-40)*1.5*RP;
		 D= 5;
		 N= WP-D;
	 }
 break;


 default:
		M = 'U'; M1= 'n'; M2= 'k'; M3= 'n';	M4= 'o'; M5= 'w'; M6= 'n';	// Displaying the characters of Unkown for an employee.
	 if ( Hrs<=40)		// Weekly Payroll for employees whose hours are less or equal to 40.
	 {	 WP= Hrs*RP;
	     D= 0;
		 N= WP-D;
	 }
	 else				// Weekly Payroll for employees that exceed 40hrs.
	{ WP= 40*RP +(Hrs-40)*1.5*RP;
		 D= 0;
		 N= WP-D;
	}

 }

outData<<fixed<<setprecision(2);

											// Displaying Employee Information
outData<<setw(10)<< IDN <<setw(10)<< Hrs <<setw(9)<< RP <<setw(12)<< WP <<setw(7)<< M << M1 << M2 << M3 << M4 << M5 << M6 <<setw(8)<< D <<setw(12)<< N << endl;
TWP+= WP;									//Equation for Total Weekly Payroll.
TD+= D;										// Equation for Total Dues.
TN+= N;										// Equation for Total Net.
TN= floor(TN*100+0.5)/100;					// rounding total net to its nearest hundredths.
}

outData<<" _________________________________________________________________________\n";
outData<<setw(6)<<"\n Totals "<< setw(33)<<right<< TWP <<setw(21)<<right<< TD << setw(12)<<right<<TN<< endl;
											// Displaying Total Values

inData.close();
outData.close();
//Closing files.

return 0;
}

