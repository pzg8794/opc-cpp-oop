//*******************************************************************************************************
// File: MyArrayIMP.cpp
//
// Purpose: To assing, check, compare the values and index of the array in class MyArray. Also, to output
// required answers to demostrate that MyArray works properly.
//
// Written By: Piter Garcia 
//*******************************************************************************************************
#include"MyArray.h"


//*******************************************************************
// Method: set
//
// Purpose: To assign a value to an element of original/Clone array
//*******************************************************************
void MyArray::Set(int i, int value)		//– Sets an array element at the given index to the given value.
{ 
	if(i==0)
	{
	cout<<"\n Please wait until "<<size<<" Array Index Numbers follow by its value are input: \n";
	cout<<" Note: Index Range is between 0 and "<<size-1<<" : \n\n";	
	}
	
	m_Array[i]=value;


	//*******************************************************************************************
	// Method: Displaying Indexes and values of the array after being set to a given value
	//
	// Purpose: To be able to demostray that class Myarray works properly
	//*******************************************************************************************
	if(i==size)
	{
	 cout<<setw(20)<<right<<" Array Index : ";
	 for(i=0;i<10;i++)							//- Displaying Indexs of Array
	 {   
	 cout<<setw(5)<<right<<i;}

     if (i==10)									//- Displaying Values of Array
	 {cout<<endl;  cout<<setw(20)<<right<<" Array Value : ";
	 for(int j=0;j<10;j++)
	 {cout<<setw(5)<<right<<m_Array[j];}
	 }
	 cout<<endl;
	}
}



//**********************************************************************************
// Method: Get
//
// Purpose: To check if the value is in the array and wether it has an index or not.
//**********************************************************************************
int MyArray::Get(int index)
{
	if(index<0||index>=size)	//Loop to test the index to make sure that it is valid.
	{	
	cout<<"\n Please enter an Index between the range (0-"<<size-1<<"): \n ";
	return -1;
	}

return m_Array[index];
}



//**********************************************************************************
// Method: Looking for the index of the first occurrence of a given value.
//
// Purpose: To check if the value is in the array and wether it has an index or not.
//**********************************************************************************
int MyArray::Size()
{ 
	int i;
	size=10;

	//***************************************************************************
	// Method: Displaying Indexes and values of the array after being initialized
	//
	// Purpose: To be able to demostray that class Myarray works properly
	//***************************************************************************
	 cout<<"\n\n Initialized to 0 \n";	
	 cout<<setw(20)<<right<<" Array Index : ";
	 for(i=0;i<10;i++)							//- Displaying Indexs of Array
	 {   
	 cout<<setw(5)<<right<<i;}

     if (i==10)									//- Displaying Values of Array
	 {cout<<endl;  cout<<setw(20)<<right<<" Array Value : ";
	 for(int j=0;j<10;j++)
	 {cout<<setw(5)<<right<<m_Array[j];}
	 }
	 cout<<endl;

return size;
}


//**********************************************************************************
// Method: FindFirst
//
// Purpose: To check if the value is in the array and wether it has an index or not.
//**********************************************************************************
int  MyArray::FindFirst(int value)		
{
	for(int i=0;i<size;i++)
		{
			if (m_Array[i]==value)
			return i;
		}

return -1;
}




//**********************************************************************************
// Method: FindLast
//
// Purpose: To check if the value is in the array and wether it has an index or not.
//**********************************************************************************
int  MyArray::FindLast(int value)	
{
	for(int i=size;i>=0;i--)
	{
		if (m_Array[i]== value)
		return i;

	}
return -1;
}



//****************************************************
// Method: Initializing and creating dynamic memory
//
// Purpose: To make every element equal to zero.
//****************************************************

void MyArray::Initialize()
{   
	for(int i=0;i<10;i++)
	 {
	  m_Array[i]=0;
	 }
}



//*******************************************************
// Method: Initializing
//
// Purpose: To make every element equal to a given value.
//*******************************************************
void MyArray::Initialize(int value)
{	
	cout<<"\n\n Initializing to 5 \n";
	
	int i;
	for(i=0;i<10;i++)
	 {
	  m_Array[i]=value;
	 }


	//***************************************************************************
	// Method: Displaying Indexes and values of the array after being set to 5.
	//
	// Purpose: To be able to demostray that class Myarray works properly
	//***************************************************************************
	if(i==10)
	{
	 cout<<setw(20)<<right<<" Array Index : ";
	 for(i=0;i<10;i++)							//- Displaying Indexs of Array
	 {   
	 cout<<setw(5)<<right<<i;}

     if (i==10)									//- Displaying Values of Array
	 {cout<<endl;  cout<<setw(20)<<right<<" Array Value : ";
	 for(int j=0;j<10;j++)
	 {cout<<setw(5)<<right<<m_Array[j];}
	 }
	 cout<<"\n\n ";
	}
}



//*********************************************************************
// Method: MyArray()
//
// Purpose: Default Constructor to Initialize values of a whole Array.
//*********************************************************************

MyArray::MyArray()
{
Initialize();					//Sets the value of all elements to 0 for the first and new array.
}



//********************************************************
// Method: MyArray(int SIZE)
//
// Purpose: Initialize the values of a temporary Array
//********************************************************
MyArray::MyArray(int value)
{
Initialize(value);					//Sets the value of all elements to 5 for the first and new array.
}


//********************************************************
// Method: ~MyArray()
//
// Purpose: Initialize the values of a temporary Array
//********************************************************
MyArray::~MyArray()						//- Distructor
{
//cout<<"Thanks For Using MyArray!!! \n";
//cout<<"Piter Garcia \n";
}






//*************************************************************************
// Method:	AuthorName()
// Purpose:	Displaying Author's Name and Header of this file.
// Purpose: To be able to identify the name and type of file that was used.
//***************************************************************************
void MyArray::AuthorName()
{
	cout<<"\n\n";
	cout<<"  Lab Assignment # 02 " <<setw(58)<<right<< " By  Piter Garcia\n " ;
	cout<<" -------------------" <<setw(57)<<right<< "----------------" ;
	cout<<"\n\n\n";
	cout<<right<<setw(70);
	cout<<" Program Assignment using Parameter Functions with a Class \n";
	cout<<setw(71)<<right;
	cout<<" ==========================================================\n\n";
	cout<<"\n";
}


//**************************************************************
// Method: ClassOutput
//
// Purpose: To check if the class MyArray works properly or not.
//**************************************************************
void MyArray::ClassOutput(int value, int sosa, int value1, int index1, int value2, int index2, int index)
{
	 cout<<setprecision(2)<<fixed; 


	//***************************************************************************
	// Method: Displaying Indexes and values of the array.
	//
	// Purpose: To be able to demostray that class Myarray works properly
	//***************************************************************************
	 cout<<right<<"\n\n  -----------------------------------------";
	 cout<<"-------------------------------\n";
	 cout<<right<<setw(62)<< " FINAL ARRAY INDEXS AND VALUES COMPLETE DATA TABLE \n";
	 cout<<right<<"  ------------------------------------------";
	 cout<<"------------------------------\n";	
	 cout<<"\n"; 
		
	 int i;
	 cout<<" Array Index : ";
	 for(i=0;i<size;i++)							//- Displaying Indexs of Array
	 {   
	 cout<<setw(5)<<left<<i;
	 }

     if (i==size)									//- Displaying Values of Array
	 {cout<<endl;  cout<<setw(5)<<left<<" Array Value : ";
	 for(int j=0;j<size;j++)
	 {cout<<setw(5)<<left<<m_Array[j];}
	 }

 
	//-Table to display the properties of the array.
	 cout<<right<<"\n\n  -----------------------------------------";
	 cout<<"-------------------------------\n";
	 cout<<right<<setw(53)<< " ARRAY PROPERTIES DATA TABLE \n";
	 cout<<right<<"  ------------------------------------------";
	 cout<<"------------------------------\n";	
	 cout<<right<<setw(30)<<" Array Size .= "<<setw(5)<<right<<size;
	 cout<<setw(21)<<"Items Used....= "<<setw(5)<<right<< size<<endl;



	//***************************************************************************
	// Method: Testing value for the Input Index.
	//
	// Purpose: To check wether the value is in the array or not.
	//***************************************************************************	 
	 cout<<right<<setw(30)<<" Input Index = "<<setw(5)<<right<< index;
	 if(value==-1)
	 cout<<setw(21)<<" Assigned Value = "<<setw(5)<<right<<"None"<<"\n\n"; 
	 else
	 cout<<setw(21)<<" Assigned Value = "<<setw(5)<<right<<value<<"\n\n";
	
	 

	//***************************************************************************
	// Method: Testing value for the first occurrence.
	//
	// Purpose: To check wether it is in the array or not.
	//***************************************************************************	 
	 cout<<right<<setw(39)<<" FIRST OCCURENCE CASE: \n";
	 cout<<setw(30)<<" Value ......= "<<setw(5)<<right<<value1; 

	if(index1==-1)	
	cout<<right<<setw(21)<<" Index .........= "<<setw(5)<<right<<"None"<<"\n\n";
	else
	cout<<right<<setw(21)<<" Index .........= "<<setw(5)<<right<<index1<<"\n\n";



	//***************************************************************************
	// Method: Testing value for the last occurrence.
	//
	// Purpose: To check wether it is in the array or not.
	//***************************************************************************	 
	cout<<right<<setw(39)<<" LAST OCCURRENCE CASE: \n";
	cout<<setw(30)<<" Value ......= "<<setw(5)<<right<<value2; 
	
	if(index2==-1)	
	cout<<right<<setw(21)<<" Index .........= "<<setw(5)<<right<<"None"<<"\n\n";
	else
	cout<<right<<setw(21)<<" Index .........= "<<setw(5)<<right<<index2<<"\n\n";

	cout<<right<<"  ------------------------------------------";
	cout<<"------------------------------\n";

	cout<<"\n\n";
}