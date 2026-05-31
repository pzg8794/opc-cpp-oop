#include "DayType.h"
dayType::dayType()
{
dayNumber=0;
day[0+1]="Sunday";
day[1+1]="Monday";
day[2+1]="Tuesday";
day[3+1]="Wednesday";
day[4+1]="Thursday";
day[5+1]="Friday";
day[6+1]="Saturday";
}

void dayType::printDay(ofstream& outData, int Today, int Tomorrow, int Yesterday, int Changeday) 
{
	outData<<"\n\n\n";

	outData<<setw(31)<<right<<" "<<setw(5)<<left<<"____________________________________________________\n\n";
	outData<<setw(69)<<right<<" DAYS OF A WEEK TABLE \n";
	outData<<setw(31)<<right<<" "<<setw(5)<<left<<"____________________________________________________\n";


	 outData<<setw(30)<<right<<" "<<setw(18)<<left<<" INPUT DAY"<<" | "<<setw(5)<<right<<" PREVIOUS DAY"<<" |  "<<setw(13)<<right<<" NEXT DAY"<<" |  \n";
	 outData<<setw(31)<<right<<" "<<setw(5)<<left<<"____________________________________________________\n";
	 outData<<setw(31)<<right<<" "<<setw(18)<<left<<day[Today]<<setw(3)<<left<<"|";
	 outData<<setw(13)<<left<<day[Yesterday]<<setw(8)<<left<<"|"<<setw(9)<<left<<day[Tomorrow]<<"|  \n";	
	 outData<<setw(31)<<right<<" "<<setw(5)<<left<<"____________________________________________________\n";
	 
	 if(Changeday<0)
	 {
		tempDay=(Today+Changeday);
		Changeday=tempDay+7;

		outData<<setw(30)<<right<<" "<<setw(18)<<left<<" SUBSTRACTED DAYS: \n ";
		outData<<setw(30)<<right<<" "<<"Before The Input Days the Day is ";
	 }
	 else
	 {
	 outData<<setw(30)<<right<<" "<<setw(18)<<left<<" ADDED DAYS: \n ";
	 outData<<setw(27)<<right<<" "<<"After The Input Days the Day is ";
	 }

outData<<day[Changeday]<<endl;
outData<<setw(31)<<right<<" "<<setw(5)<<left<<"____________________________________________________\n";
}

void dayType::setDay(int day)
{
dayNumber=day;
}

int dayType::returnDay(int& day)
{
day=dayNumber;
return day;
}

int dayType::returnNextDay()
{
dayNumber++;
if(dayNumber>6)
dayNumber-=7;

return abs(dayNumber);
}

int dayType::returnPreviousDay()
{
dayNumber--;
 if(dayNumber<=0)
	 dayNumber+=7;

return dayNumber;
}

int dayType::calculateDay(int changeDay)
{

tempDay=(dayNumber+changeDay);
dayNumber=(tempDay%7);

return dayNumber;
} 
  void dayType::AuthorAndTitle(ofstream& outData)
  {
  	outData<<"\n\n";
	outData<<"Lab Assignment # 14 " <<setw(95)<<right<< " By  Piter Garcia\n" ;
	outData<<"-------------------" <<setw(95)<<right<< "----------------" ;
	outData<<"\n\n\n";
	outData<<right<<setw(82)<< " PROGRAM ASSIGNMENT USING ARRAYS WITH CONSTRUCTORS\n";
	outData<<setw(83)<<right<< " =================================================\n\n";
	outData<<"\n";
  }