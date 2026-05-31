/*
Name : Piter Garcia
Subje: EET-327 Lab 13
Date : April 06 2011
Discription : This program will first read from an input file the names and grades of n
students. Then, it will dropp the student lowest grade and work the average of each one
along with the average of the whole class. Finally it will neatly record the data in a 
output file so it is avelaible to print.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;
int main ()
{
	ofstream outData;
	// Assigning the file name for the program to read the outputoutData.
	outData.open("EET327LabNo13_output.txt");

double i,k;
double db, R0, R1, R2;

	outData<<right<<setw(65)<< " ATTENUATOR II C++ DATA TABLE \n";
	outData<<setw(69)<<right<< " --------------------------------------\n";
	outData<<setw(79)<<right<<" __________________________________________________________";
	outData<<" \n\n";
	outData<<setw(24)<<" db "<<setw(18)<<" k "<< setw(18)<<" R1(ohms)"<< setw(18)<<" R12(ohms)";
	outData<<" \n";
	outData<<setw(79)<<right<<" __________________________________________________________";
	outData<<" \n\n";
for (i=0;i<=5;i++)
{
db= -pow(2,i);
R0=50;
k=pow(10, db/20);
R1= R0*((1-k)/(1+k));
R2= R0*(2*k)/(1-k*k);	

outData<<setw(23)<<db<<setw(18)<<k<< setw(18)<<R1<< setw(18)<<R2;
outData<<"\n";
}										
	outData<<setw(79)<<right<<" __________________________________________________________";
	outData<<" \n\n";



return 0;
}