/*
Name : Piter Garcia
Subje: BCS-120
Date : Oct 13, 2010
Discription : This program will read worker's full names, current salary, and percentage of pay increase
from an input file and print out their updated salary  along with the given input data.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;


int main ()
{
double  Current_Salary, Percent_Pay_Increase, Updated_Salary,Total=0;
int i;
string First_Name, Last_Name;


ofstream outData;
// Declaring variable for our output data.
ifstream inData;
// Declaring variable for our input data.

inData.open("Ch3_Ex6input.txt"); // Assigning the file name for the program to read the input.
outData.open("Ch3_Ex6Output.txt"); // Assigning the file name for the program to read the output.

outData<<setprecision(2)<<fixed;

outData<<right<<setw(68)<< " Programming Assignment # 4 \n" <<setw(64)<<right<< " By  Piter Garcia\n\n " ;
outData<<"\n\n";
outData<<right<<setw(68)<< " Increasing Salary Program \n" <<setw(70)<<right<< " ============================\n\n";
//Sending data to the output file.

outData<<setw(20)<<"Last Name"<<setw(20)<<"First Name"<<setw(20)<<"Current Salary";
outData<<setw(20)<<"% Pay Increase"<<setw(20)<<"Updated Salary"<<endl;

for(i=1;i<=3;i++)
{
inData>>Last_Name>>First_Name;
inData>>Current_Salary>>Percent_Pay_Increase;
//asking to read data from the input file.

Updated_Salary= Percent_Pay_Increase/100.*Current_Salary;
Updated_Salary+= Current_Salary;

outData<< setw(20)<<right<<Last_Name <<setw(20)<<First_Name <<setw(20)<<Current_Salary ;
outData<< setw(20)<<Percent_Pay_Increase <<setw(20)<<Updated_Salary <<endl;
//sending data to the output file.
Total+=Updated_Salary;
}

outData<<setw(100)<<right<<Total;

inData.close();
outData.close();
//Closing input and output files.
return 0;

}

