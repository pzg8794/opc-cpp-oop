/*
Name : Piter Garcia
Subje: BCS-120
Date : Dic 10, 2010
Discription : This program will read the values of an array function.
Then, another array functiong will square the privous one, 
follow for another array function which wiil add the two previous functions.
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
									//Lab Assignment Number and Name.
		cout<<"\n\n";
		cout<< " Lab Assignment # 14 " <<setw(60)<<right<< " By  Piter Garcia\n " ;
		cout<< "-------------------" <<setw(59)<<right<< "----------------" ;
		cout<<"\n\n\n";
									//Title.
		cout<<right<<setw(58)<< " ARREYS SQUARE AND SUM PROGRAM \n" <<setw(60)<<right<< " =================================\n\n";
		cout<<"\n";

		cout<<"\n\n\n";				//Parameters
		cout<<"\n ------------------------------------------------------------------------------ \n";	
		cout<<setw(32)<<right<<" Number"<<setw(14)<<"Square"<<setw(12)<<"Sum";
		cout<<"\n ------------------------------------------------------------------------------ \n";

int x[5],y[5], n[5]={1,2,3,4,5}; //Arrays function
int i;
		
	for (i=0;i<=n[i]; i++)			//for loop to count the n number that the arrey function n has to multiply or sum.
	{								// Note: I am using the wights of n[i] as a final state to stop this loop.

									// For loop to multiply and add n number of privous loop from n array function.
		x[i]=n[i]*n[i];	//Squaring each number in the n arrays function.
		y[i]=x[i]+n[i];	//Adding each number in the n arrays function.

		cout<<setw(32)<<right<<n[i]<<setw(14)<<x[i]<<setw(12)<<y[i]<<endl; //Displaying square and sum of imput.
	}
		
		cout<<" ------------------------------------------------------------------------------ \n";	
		cout<<"\n\n\n ";

	return 0;
}


