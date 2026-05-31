/*Name : Piter Garcia
Subje: BCS-120
Date : Sept 21, 2010
Discription : This program will ask the user the sales figures values made within three days
and print out the total amount along with the sales figures.
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main ()
{
double Day1, Day2, Day3, Total;
 

cout << "\n\t\t\t Laboratory in Class # 3\n" << "\t\t\t     By Piter Garcia\n\n";
cout<<"\n\t\t\t Sales Figures Program";
cout<<"\n\t\t\t========================\n\n";

	cout<<"\n Please Enter the value of the Sales Figures for Day1, Day2 and Day3 in order \n ";
	cin>> Day1 >> Day2 >> Day3;

	Total= Day1+Day2+Day3;

	cout<<"\n\n  Sales Figures\n ---------------\n";

	cout<< setprecision(2)<< fixed;
	// it is used to set output to 2 decimals to the right.

	cout<<"\n Day1 : "<< setw(7)<< Day1 <<"\n Day2 : "<< setw(7)<< Day2 <<"\n Day3 : "<< setw(7)<< Day3;
	cout<<"\n Total: "<< setw(7)<< Total <<"\n\n";
   //setw()is used to allined the outputs and give them the same number of space in on colum.
return 0;
}



