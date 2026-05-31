#include "DayType.h"

int main()
{
	ofstream outData;
	// Assigning the file name for the program to read the outputoutData.
	outData.open("LabNo14_output.txt");

dayType today;
int Today, Tomorrow, Yesterday, Changeday;
string option;
int changeDay=0;
int day;

today.AuthorAndTitle(outData);

cout<<"Please Type in The Day Number You Wish to Set Up"<< endl;
cin>> day; //allows the user to input the current day

today.setDay(day);
Today=today.returnDay(day);

Tomorrow=today.returnNextDay();
today.dayNumber--;

Yesterday=today.returnPreviousDay();
today.dayNumber++;

cout<<"Do You Want to Add or Subtracts Days to the Input Day?\n";
cout<<"If so Enter yes, otherwise enter no."<< endl;
cin>>option;
if(option=="yes")
{
cout<<"Please Enter Below the Day(s) You Wish to Add or Substract:\n";
cin>> changeDay;
}
if(changeDay<0)
{
today.printDay(outData, Today,Tomorrow, Yesterday,changeDay); 
}
else
{
Changeday=today.calculateDay(changeDay);
today.printDay(outData, Today,Tomorrow, Yesterday,Changeday); 
}	
return 0;
}
