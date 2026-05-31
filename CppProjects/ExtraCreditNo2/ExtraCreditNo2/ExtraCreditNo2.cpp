/*
Name : Piter Garcia
Subje: BCS-120
Date : Nov 06, 2010
Discription : This program will create a triangle and its inverse along with its reflections.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int x,y,k;
										//Name and Title
	cout<<"\n\n";
	cout<<right<<setw(40)<<" Extra Credit Program\n" <<setw(39)<<right<< " By  Piter Garcia\n ";
	cout<<"\n\n\n";
	cout<<right<<setw(51)<< " Using For Nested Loops to create Triangles \n" <<setw(54)<<right<< " =================================================\n\n";
	cout<<"\n\n\n\n";

										//Table
	cout<<"(A)"<<setw(16)<<"(B)"<<setw(17)<<"(C)"<<setw(25)<<"(D)\n\n";

	for ( x=10;x>=1;x--)				//Main For Loop
{
	for (y=10;y>=x;y--)
	cout<<'*';
	for (k=1; k<=x;k++ )
	cout<<' ';							//For Loops for Triangle (A)
	cout<<"\t";							// Space
	for (y=1;y<=x;y++)
	cout<<'*';
	for (k=10; k>=x;k-- )
	cout<<' ';							//For Loops for Triangle (B)
	cout<<"\t";							// Space
	for (y=10;y>=x;y--)
	cout<<' ';
	for (k=1; k<=x;k++ )
	cout<<'*';							//For Loops for Triangle (C)
	cout<<"\t";							// Space
	for (y=1;y<=x;y++)
	cout<<' ';
	for (k=10; k>=x;k-- )
	cout<<'*';							//For Loops for Triangle (D)
	cout<<"\n";							//Ending Line
}
	cout<<"\n\n";
return 0;
}