/*Name : Piter Garcia
Subje: BCS-120
Date : Sept 21, 2010
Discription : This program will read the sales figures values made within three days
from an input file and print out the total amount along with the sales figures in output file.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int main ()
{
double Day1, Day2, Day3, Total;

ofstream outData;
// Declaring variable for our output data.
ifstream inData;
// Declaring variable for our input data.

inData.open("Lab4_Input.txt"); // Assigning the file name for the program to read the input.
outData.open("Lab4_Output.txt"); // Assigning the file name for the program to read the output.

outData<<setprecision(2)<<fixed;

outData<< "\n\t\t\t Laboratory in Class # 5 \n" << "\t\t\t     By Piter Garcia\n\n";
outData<<"\n\t\t\t Sales Figures Program";
outData<<"\n\t\t\t========================\n\n";
//Sending data to the output file.

inData>>Day1>>Day2>>Day3;
//asking to read data from the input file.

outData<<"\n Day1  : "<< setw(7)<< Day1 <<"\n Day2  : "<< setw(7)<< Day2 <<"\n Day3  : "<< setw(7)<< Day3;
//sending data to the output file.

Total= Day1+Day2+Day3;
outData<<"\n Total : "<< setw(7)<< Total <<"\n\n";
//sending data to the output file.

inData.close();
outData.close();
//Closing input and output files.
return 0;
}