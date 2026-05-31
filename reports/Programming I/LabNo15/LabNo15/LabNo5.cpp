/*
Name : Piter Garcia
Subje: BCS-120
Date : Dic 17, 2010
Discription : This program will read the values of an array function from 0 to 49.
First, it will call a function to self-multiply each array value untill it reaches the address number 24.
Then, within the same function it will check for the address to be greater than 24 to multiply the rest of the numbers, separately, by 3.
Finlly, it will call a function to print the value obtain from each function in order of 10 colums and 5 rows.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void Array_Multiple(int, double[]);
void Printing_Array(int, const double[]); 
 int main ()
 {   
	 	 									//Lab Assignment Number and Name.
		cout<<"\n\n";
		cout<< " Lab Assignment # 15 " <<setw(60)<<right<< " By  Piter Garcia\n " ;
		cout<< "-------------------" <<setw(59)<<right<< "----------------" ;
		cout<<"\n\n\n";
									//Title.
		cout<<right<<setw(59)<< " ARREYS 3 AND SELF-MULTIPLE PROGRAM \n" <<setw(60)<<right<< " ====================================\n\n";
		cout<<"\n";

		cout<<"\n\n\n";	


	 int i,j,Address=0;//initialuzing address.
	 double Multiple[50];//assinging the amount of numbers in the array.
	 

	 for (i=Address; i<6; i++)//staring loop for array anddress and values.
	 {
	 	 cout<<"\n ------------------------------------------------------------------------------ \n";

		if (Address>=0 && Address<50)
		 {
			for (j=0; j<10; j++)//calling Arrays ten by ten to shape a matrix of 10 columns.
			{
			
				Multiple[Address]=Address;//Assigning a numerical value to the address.
				Array_Multiple(Address,Multiple);//calling function to multiply arrays as explained in the description.
				Printing_Array(Address,Multiple);//Calling functiong to print arrays.
				Address++;//increassing assinged value to obtain array values from 0-49 in a matrix of five rows.
			
			}
			cout<<endl;//end of a row.
		 }
	  }
	 
  return 0;
 }


 void Array_Multiple(int i, double x[50])//Function to multiply arrays.
 {
	
	 
		if (i>24)//testing for any address greater than 24.
		{

			x[i]*=3;
		}
		else//self-multiplying arrys with an address less than 24.  
		{
			x[i]*=x[i];
		}
	

 }


 void Printing_Array(int i, const double  x[50])//Function to print arrays.
 {	 
		
		cout<<"  "<<setw(5)<<right<<x[i];//Printing Arrays
		
		//ending matrix.
	 if(i>49)
	 {
		 cout<<"\n ------------------------------------------------------------------------------ \n";
		 cout<<"\n\n       \t\t\t";
	 }

 }