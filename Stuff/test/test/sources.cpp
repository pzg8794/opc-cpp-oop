//*******************************************************************************************************
// File: MyArrayIMP.cpp
//
// Purpose: To assing, check, compare the values and index of the array in class MyArray. Also, to output
// required answers to demostrate that MyArray works properly.
//
// Written By: Piter Garcia 
//*******************************************************************************************************
#include"header.h"


//**********************************************************************************
// Method: setting up and index and value.
//
// Purpose: To assign a value to the elements of the old/new array, and display them
//**********************************************************************************
void MyArray::Set(int i, int value)		//– Sets the array element at the given index to the given value.
{ 
	cout<<"\n Please wait until "<<i<<" Array Index Numbers follow by its value are input: \n";
	cout<<" Note: Index Range is between 0 and "<<i-1<<" : \n\n";	
	
	m_Array[0]=100;	m_Array[1]=200;	m_Array[2]=300;	m_Array[3]=400;	m_Array[4]=500;
	m_Array[5]=700;	m_Array[6]=500;	m_Array[7]=900;	m_Array[8]=900;	m_Array[9]=100;	
	
	if (i>=10)
	{
		for(size=10;size<i;size++)		//Adding new value and index to the new elements in the array.
		{
		m_Array[size]=m_Array[size-1]+100;
		}
	}

	 cout<<" Array Index : ";
		for(i=0;i<size;i++)											//- Displaying Indexs of New Array.
		cout<<setw(5)<<left<<i;
			
		if (i==size)											//- Displaying Values of New Array.
		cout<<endl;  cout<<setw(5)<<left<<" Array Value : ";
		
		for(int j=0;j<size;j++)
		cout<<setw(5)<<left<<m_Array[j];
	
		cout<<"\n\n";	
}
//*************************************************************************
// Method: Displaying Author's Name and Header of this file.
//
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

//**********************************************************************************
// Method: Looking for the index of the first occurrence of a given value.
//
// Purpose: To check if the value is in the array and wether it has an index or not.
//**********************************************************************************
int MyArray::Get(int index)
{
	while(index<0||index>=size)	//Loop to test the index to make sure that it is valid.
	{	
	cout<<"\n Please enter an Index between the range (0-"<<size-1<<"): \n ";
	cin>>index;
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

size=10;

return size;
}

void MyArray::Resize(int elements)
{ 
cout<<" The Actual Size of Your Array is : "<<size<<endl;
if (size>elements)
cout<<" Please Enter the Number of Elements You wish to  substract \n for your New Array Size : \n ";
else
cout<<" Please Enter the Number of Elements You wish to add  \n for your New Array Size : \n ";

size=elements;

	for(int i=0;i<size;i++)
	{
	m_temp[i]=m_Array[i];	
	}

delete[] m_Array;

m_Array=m_temp;
}

//**********************************************************************************
// Method: Looking for the index of the first occurrence of a given value.
//
// Purpose: To check if the value is in the array and wether it has an index or not.
//**********************************************************************************
int  MyArray::FindFirst(int value)		
{
	for(int i=0;i<size;i++)
		{
			if (m_Array[i]== value)
			return i;
		}
}

//**********************************************************************************
// Method: Looking for the index of the last occurrence of a given value.
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
}

//**************************************************************
// Method: Outputting required answers of the above methods.
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
	 cout<<right<<"  -----------------------------------------";
	 cout<<"-------------------------------\n";
	 cout<<right<<setw(56)<< " ARRAY INDEXS AND VALUES DATA TABLE \n";
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

cout<<"\n\n";
 
	//-Table to display the properties of the array.
	 cout<<right<<"  -----------------------------------------";
	 cout<<"-------------------------------\n";
	 cout<<right<<setw(53)<< " ARRAY PROPERTIES DATA TABLE \n";
	 cout<<right<<"  ------------------------------------------";
	 cout<<"------------------------------\n";	
	 cout<<right<<setw(30)<<" Array Size .= "<<setw(5)<<right<<size;
	 cout<<setw(21)<<" Items Added....= "<<setw(5)<<right<< size-sosa <<endl;
	 cout<<right<<setw(30)<<" Input Index = "<<setw(5)<<right<< index;
	 cout<<setw(21)<<" Assigned Value = "<<setw(5)<<right<<value<<"\n\n"; 
	 cout<<right<<setw(39)<<" FIRST OCCURENCE CASE: \n";
	 cout<<setw(30)<<" Value ......= "<<setw(5)<<right<<value1; 
	
	//***************************************************************************
	// Method: Testing value for the first occurrence.
	//
	// Purpose: To check wether it is in the array or not.
	//***************************************************************************
						 
	 cout<<right<<setw(21)<<" Index .........= "<<setw(5)<<right<<index1<<"\n\n";

	 cout<<right<<setw(39)<<" LAST OCCURRENCE CASE: \n";
	 cout<<setw(30)<<" Value ......= "<<setw(5)<<right<<value2; 


	//***************************************************************************
	// Method: Testing value for the last occurrence.
	//
	// Purpose: To check wether it is in the array or not.
	//***************************************************************************

	 cout<<right<<setw(21)<<" Index .........= "<<setw(5)<<right<<index2<<"\n\n";

	 cout<<right<<"  ------------------------------------------";
	 cout<<"------------------------------\n";

	 cout<<"\n\n";
}

//****************************************************
// Method: Initializing and creating dynamic memory
//
// Purpose: To make every element equal to zero.
//****************************************************

void MyArray::Initialize()
{   
	m_Array= new int[size]; 
	m_temp= new int[size];
	
	for(int i=0;i<size;i++)
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
	for(int i=0;i<size;i++)
	 {
		m_Array[i]=value;
	 }
}

MyArray *MyArray::Clone()
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           

	MyArray *Clone= new MyArray;

	int index=size,index1,index2, size=0, value=0, value1, value2;
						
	Clone->AuthorName();		//-Calling function to show author's name and header of the file.
	Clone->Set(index,value);	//-Calling function to assign an index and value to each element in the array.
	Clone->ClassOutput(value,size, value1, index1, value2, index2, index); 

return Clone;
}

void MyArray::Show()
{


	 cout<<setprecision(2)<<fixed; 

	//***************************************************************************
	// Method: Displaying Indexes and values of the array.
	//
	// Purpose: To be able to demostray that class Myarray works properly
	//***************************************************************************
	 cout<<right<<"  -----------------------------------------";
	 cout<<"-------------------------------\n";
	 cout<<right<<setw(56)<< " ARRAY INDEXS AND VALUES DATA TABLE \n";
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

cout<<"\n\n";
}

void MyArray::Show(ofstream& p)
{
	 p<<setprecision(2)<<fixed; 

	//***************************************************************************
	// Method: Displaying Indexes and values of the array.
	//
	// Purpose: To be able to demostray that class Myarray works properly
	//***************************************************************************
	 p<<right<<"  -----------------------------------------";
	 p<<"-------------------------------\n";
	 p<<right<<setw(56)<< " ARRAY INDEXS AND VALUES DATA TABLE \n";
	 p<<right<<"  ------------------------------------------";
	 p<<"------------------------------\n";	
	 p<<"\n"; 
		
	 int i;
	 p<<" Array Index : ";
	 for(i=0;i<size;i++)							//- Displaying Indexs of Array
	 {   
	 p<<setw(5)<<left<<i;
	 }

     if (i==size)									//- Displaying Values of Array
	 {p<<endl;  p<<setw(5)<<left<<" Array Value : ";
	 for(int j=0;j<size;j++)
	 {p<<setw(5)<<left<<m_Array[j];}
	 }

p<<"\n\n";
}