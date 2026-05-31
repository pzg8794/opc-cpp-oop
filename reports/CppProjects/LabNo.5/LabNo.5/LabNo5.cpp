/*Name : Piter Garcia
Subje: BCS-120
Date : Sept 21, 2010
Discription : This program will ask the user the sales figures values made within three days
and print out the total amount along with the sales figures.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int main ()
{
double Day1, Day2, Day3, Total;

ifstream inData;
ofstream outData;

inData.open("D:\\Lab4.txt");
outData.open("D:\\Lab4_Output.txt");

outData<<setprecision(2)<<fixed;


cout << "\n\t\t\t Laboratory in Class # 5 \n" << "\t\t\t     By Piter Garcia\n\n";
cout<<"\n\t\t\t Sales Figures Program";
cout<<"\n\t\t\t========================\n\n";

inData>> Day1>> Day2>> Day3;
outData<<"\n Day1 : "<< setw(7)<< Day1 <<"\n Day2 : "<< setw(7)<< Day2 <<"\n Day3 : "<< setw(7)<< Day3;

Total= Day1+Day2+Day3;
outData<<"\n Total: "<< setw(7)<< Total <<"\n\n";

inData.close();
outData.close();
return 0;

}