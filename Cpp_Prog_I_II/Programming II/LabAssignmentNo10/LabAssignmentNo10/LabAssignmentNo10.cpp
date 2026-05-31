/*
Name : Piter Garcia
Lab Assigntment No.: 10
Subje: BCS-230
Date : March 30th, 2010
Discription : This program will use vector using the "Push_Back" Function.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void printresult(vector<int>, vector<int>, int); 

typedef vector<int> Hours;
typedef vector<int> Rate;

void AuthorAndTitle();

int main()
{
	int i,x,y, value1,value2, counter=2;
    // Dynamically allocated vector begins with 0 elements.
    Hours Vector1;
	Rate Vector2;

    // Author Name Function.
  	AuthorAndTitle();
	
	do
	{
		if(counter==2)
		{
			for (i=0;i<2;i++)
			{
				if(i==0)
				cout<<"   Please enter the Hours:\n   ";
				else 
				cout<<"   Please enter the Rate:\n   ";

				for (x=0; x<5;x++)
				{
					if(i==0)
					{
					cin>>value1;
					Vector1.push_back(value1) ;
					}
					else 
					{
					cin>>value2;
					Vector2.push_back(value2) ;
					}
				}			
			
			}
		}
		
	else 
	{
	 cout<<"   Please Enter 1 for the Hours List or 2 for the Rate List \n   ";
	 cin>>x;
		if (x==1)
		{
			cout<<"   Please Enter Elements Amount You wish to Overwrite from the Hours List\n   ";
			cin>>x;
			for (i=0;i<x;i++)
			{
			cout<<"   Please enter the "<< i+1 <<" element subscript\n   ";
			cin>>y;
			cout<<"   Now enter the New Element You Wish to Add \n   ";
			cin>>Vector1[y];
			}
		}
		else 
		{
			cout<<"   Please Enter Elements Amount You wish to Overwrite from the Rate List\n   ";
			cin>>x;
			for (i=0;i<x;i++)
			{
			cout<<"   Please enter the "<< i+1 <<" element subscript\n   ";
			cin>>y;
			cout<<"   Now enter the New Element You Wish to Add \n   ";
			cin>>Vector2[y];
			}
		}
	 }							
	
	// Print contents of the Vectors.
	printresult(Vector1, Vector2,x);

	 cout<<"\n\n";	
	 cout<<"   Do You Wish to Overwrite any elements in any Vectors? \n";
	 cout<<"   If so enter 1, otherwise enter 0\n   ";
	 cin>>counter;
	 	 	
	 cout<<"\n\n  ";	
	
	}while(counter!=0);


}

	void AuthorAndTitle()
	{
	// Title and Name.

	cout<< "  Lab Assignment # 10 " <<setw(54)<<right<< " By  Piter Garcia\n " ;
	cout<< " -------------------" <<setw(54)<<right<< "-----------------" ;
	
	cout<<"\n\n";
	cout<<"\n\n";
	cout<<right<<setw(59)<< "   Vectors using the Push_Back Function  \n";
	cout<<setw(60)<<right<< " ======================================\n\n ";

	cout<<right<<"  -----------------------------------------";
	cout<<"--------------------------------\n";
	cout<<right<<setw(57)<< " TABLE OF HOURS AND RATE VECTORS \n ";
	cout<<right<<"  ------------------------------------------";
	cout<<"-------------------------------\n";	
	cout<<"\n";  
	}

	void printresult(vector<int> Vector1, vector<int> Vector2, int i) 
	{

     // Iterator is used to loop through the vector.
    Hours::iterator Iterator1;
	Rate::iterator Iterator2;
	int counter1=0, counter2=0;

    for (i=0;i<2;i++)
	{
		if(i==0)
		{	
			cout<<setw(39)<<right<<"  The Hours Vector: "<<setw(22)<<right<<" The Rate Vector: \n ";
		    cout<<setw(17)<<left<<"   Elements are: [ ";
	
			for (Iterator1 = Vector1.begin(); Iterator1 != Vector1.end();Iterator1++)
			{
				cout<< *Iterator1<<" ";
				counter1++;
			}

			cout<<right<<setw(3)<<"]";
			
		}

		else
		{
			cout<<setw(20)<<right<<" Elements are: [ ";
			for (Iterator2 = Vector2.begin(); Iterator2 != Vector2.end();Iterator2++)
			{
			cout << *Iterator2<<" ";
			counter2++;
			}
			cout<<"]\n ";
			 
		}
	 }	
	cout<<setw(19)<<right<<"  The Sieze of The Hours Vector is: "<< counter1;
	cout<<setw(37)<<right<<"  The Sieze of The Rate Vector is: "<< counter2; 
	
	cout<<"\n\n ";

	cout<<right<<"  ------------------------------------------";
	cout<<"-------------------------------\n";	
	cout<<setw(62)<<right<<" THE HOURS AND RATE VECTORS PRODUCT TABLE \n ";
	cout<<right<<"  ------------------------------------------";
	cout<<"-------------------------------\n";	
	 
	cout<<setw(29)<<right<<"[ ";
		Iterator1 = Vector1.begin(); 
	
		for (Iterator2 = Vector2.begin(); Iterator2 != Vector2.end();Iterator2++)
		{
		cout<< *Iterator1**Iterator2<<" ";
		Iterator1++;
		}

		cout<<"]";
	
	cout<<"\n"; 
}