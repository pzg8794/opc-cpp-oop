/*
Name : Piter Garcia
Subje: BCS-120
Date : Oct 18, 2010
Discription : This program will ask the user for the amount of checks written during the month.
Then, it will print out number of checks, its fees along with the banck fees.
*/

#include <iostream>
#include <iomanip> 
#include <fstream>

using namespace std;

int main()
{
double Grade,NoStudent,TNoStudent=0, TotalGrade=0, Average;
//Grade, Number of Student, Total Number of Student, Total Grade, and Average.
 	
	
	ifstream InData;
	// Declaring variable for our input data.
	InData.open("LabNo9_Input.txt"); 
	// Assigning the file name for the program to read the input.	

									// Author and Type of Lab.
	cout<<"\n\n";
	cout<< "  Lab Assignment # 7 " <<setw(58)<<right<< " By  Piter Garcia\n " ;
	cout<< "--------------------" <<setw(57)<<right<< "------------------" ;
	cout<<"\n\n\n";
	cout<<right<<setw(63)<< " While Statement Program with a eof Function \n" <<setw(66)<<right<< " =================================================\n\n";
	cout<<"\n\n";
									// Data Title.
	cout<<right<<setw(52)<< " Grades and Average Table \n" <<setw(54)<<right<< " -------------------------------\n";
									// Variables Table
		cout<<setw(70)<<right<<" __________________________________________________________ \n\n";
		cout<<setw(18)<<" Grades "<<setw(23)<<" Number of Students "<< setw(25)<<" Average of the Class "<<"\n";
		cout<<setw(70)<<right<<" __________________________________________________________ \n\n";
	cout<< setprecision(2)<< fixed;		

if (!InData)						// Checking for the input file.
	{
	
	cout<<" The File was not found or written correctly!\n Please check file's name spelling!\n";
	return 1;
	}

	while(!InData.eof())			// Reading file untill the end of its data.
{
		InData>>Grade;

	
if ( Grade>0)						// Not accepting grades less than Zero.
	{
		NoStudent= Grade/Grade;		// Number of Students.
		TNoStudent+= NoStudent;		// Total Number of Students.
		
		TotalGrade+= Grade;			// Total Grade of the Class.
		
		Average= TotalGrade/TNoStudent;	// Average of the Class.

									// Converting double data to int with the static_cast<int> function and the
									//Displaying the Data in the table.
		cout<<setw(17)<< static_cast<int>(Grade) <<setw(23)<< static_cast<int>(TNoStudent) << setw(25)<< Average <<"\n";	
	}
		
		
}									// Totals and Ending Table.
		cout<<setw(70)<<right<<" __________________________________________________________ \n\n";
		cout<<" Total "<< setw(10)<< static_cast<int>(TotalGrade) <<setw(23)<< static_cast<int>(TNoStudent) << setw(25)<< Average <<"\n\n\n";

return 0;
}