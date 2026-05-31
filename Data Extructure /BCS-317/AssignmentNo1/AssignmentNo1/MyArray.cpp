//*************************************************************************************
// File: MyArray.ccp
//
// Purpose: To call the functions of the class MyArray to prove that it works properly
//
// Written By: Piter Garcia 
//*************************************************************************************
#include "MyArray.h"

int main()
{	
	int index=0,size=0, value=100, index1,index2, value1, value2,x=0;
	
	MyArray myarray;
	
	MyArray();							//-Calling default Constructor to initialize array elements to 0.	
	myarray.AuthorName();				//-Calling function to show author's name and header of the file.
	size= myarray.Size();				//–Calling function to get the amount of elements and size of the array.				
	MyArray::MyArray(5);				//-Calling Second Constructor and Initializing array elements to 5.
	

	//***************************************************************************
	// Method: Setting values of m_Array.
	//
	// Purpose: To put in repeated values to test find first and last occurrance.
	//***************************************************************************	
	for(int i=0;i<size;i++)
	{	
	x+=value;
	if(i==6 || i==8)
	{myarray.Set(i,400);}

	else if(i==2 || i==4)
	{myarray.Set(i,200);}				//-Calling function to assign an index and value to each element in the array.

	else
	myarray.Set(i,x);
	}
		
	

	//***************************************************************************
	// Method: Testing Given Index
	//
	// Purpose: To check wether it within the range of the array or not.
	//***************************************************************************	
	cout<<"\n Please enter an Index between the range 0-"<<size-1<<" : \n ";
	cin>>index;
	value=myarray.Get(index);	//–Calling function to find a value with a given index.
	if(value==-1)
	cout<<"Sorry!!! \n The Index "<<index<<" is not withing your Array Range from 0-"<<size-1<<endl;


	//***************************************************************************
	// Method: Testing value for the First occurrence.
	//
	// Purpose: To check wether it is in the array or not.
	//***************************************************************************	
	cout<<"\n Please enter a Value to get its First Ocurrence: \n ";
	cin>>value1;	
	index1=myarray.FindFirst(value1); //-Calling function to find the index(location) of the value given.
	if(index1==-1)
	cout<<" Sorry!!! \n The Value "<<value1<<" is not in your Array \n";


	//***************************************************************************
	// Method: Testing value for the last occurrence.
	//
	// Purpose: To check wether it is in the array or not.
	//***************************************************************************	
	cout<<"\n Please enter a Value to get its Last Ocurrence: \n ";
	cin>>value2;
	index2=myarray.FindLast(value2); //-Calling function to find the index(location) of the value given.	
	if(index2==-1)
	cout<<" Sorry!!! \n The Value "<<value2<<" is not in your Array \n";
	

	//-Calling function to output required answers proving the class works properly.
	myarray.ClassOutput(value,size, value1, index1, value2, index2, index); 


	system("pause");				//-Pausing the Window to check answer.
return 0;
}