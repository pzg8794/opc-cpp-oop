//*************************************************************************************
// File: MyArray.ccp
//
// Purpose: To call the functions of the class MyArray to prove that it works properly
//
// Written By: Piter Garcia 
//*************************************************************************************
#include "header.h"

int main()
{
	//Declearing myarray as a class type.
	MyArray myarray;
	//ofstream outData;
	//outData.open("Assignment2.txt");

	int index=10,index1,index2, size=0, value=0, value1, value2;
					
	myarray.AuthorName();		//-Calling function to show author's name and header of the file.
	myarray.Set(index,value);	//-Calling function to assign an index and value to each element in the array.
	
	size= myarray.Size();		//–Calling function to get the amount of elements and size of the array.

	//myarray.Resize(12);
	//else
	myarray.Resize(8);

	cout<<"\n Please enter an Index between the range 0-"<<size-1<<" : \n ";
	cin>>index;
	value=myarray.Get(index);	//–Calling function to find a value with a given index.
	
	cout<<"\n Please enter a Value to get its First Ocurrence: \n ";
	cin>>value1;	
	index1=myarray.FindFirst(value1); //-Calling function to find the index(location) of the value given.

	cout<<"\n Please enter a Value to get its Last Ocurrence: \n ";
	cin>>value2;
	index2=myarray.FindLast(value2); //-Calling function to find the index(location) of the value given.

	myarray.Show();

	ofstream p;
	char MonthName[]="Assignment2.txt";
	//Assigning the file name for the program to read the output Data.
	cout<<" Please Abreviate Both Months in One Word Followed by Output:\n ";
	p.open(MonthName);


	myarray.Show(p);
	
	//-Calling function to output required answers proving the class works properly.
	//myarray.ClassOutput(value,size, value1, index1, value2, index2, index); 
	
	myarray.Clone();

return 0;
}
