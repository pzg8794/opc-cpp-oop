/*
Name : Piter Garcia
Subje: BCS-120
Date : Oct 23, 2010
Discription : This program will count from 1 to 30 and 
it will display you each number along with its square value.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
								 //Lab Number and Name
		cout<<"\n\n";
		cout<< "  Laboratory # 8 " <<setw(63)<<right<< " By  Piter Garcia\n " ;
		cout<< "----------------" <<setw(62)<<right<< "------------------" ;
		cout<<"\n";
										 //Title
		cout<<right<<setw(53)<< " While Statement Program \n" <<setw(56)<<right<< " ==============================\n\n";
		cout<<"\n\n";

										//Subtitle
		cout<<right<<setw(52)<< "Number and its Square \n" <<setw(53)<<right  << " _______________________\n\n";


						cout<< setw(39) << "Number" << "  " << "Square \n";
int num,result,total1=0,total2=0;

num=1;//Number starts from 1.

 while (num<=30)//Any number more than 30 won't be able to enter in the loop.
 {
	result=num; // result is the variable assigned to the square of any num
	result*=num; //This would be equal to the multiplication of the num itself.
	
	cout<<"\n ";
	cout<< setw(38)<<right<< num << "  " <<setw(6)<<right<< result; // displaying Num and its Square alined.
	total1+=num;	// Total of Numbers.
	total2+=result;	// Total of the square of numbers.
	num=num++;	// Changing the value of num.
	
 }
			//Displaying  both Totals.
  cout<<"\n Totals"<< setw(32)<<right<< total1 <<" "<<setw(7)<<right<< total2 <<"\n\n";

 return 0;
}