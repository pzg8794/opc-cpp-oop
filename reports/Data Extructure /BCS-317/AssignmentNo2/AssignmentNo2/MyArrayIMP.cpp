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
	if(SIZE==0)
	{
	size=10;
	}
	else
	size=SIZE;

return size;
}


//**********************************************************************************
// Method: Resize
//
// Purpose: To Change Array Values
//**********************************************************************************
void MyArray::Resize(int size)
{ 
m_temp=new int[size];

	for(int i=0;i<size;i++)
	{
	 m_temp[i]=m_Array[i];
	}

//MyArray::~MyArray();
	delete m_Array;
m_Array=m_temp;
SIZE=size;
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


//**********************************************************
// Method: Show()
//
// Purpose: To Display Elements in m_Array of MyArray Class
//**********************************************************
void MyArray::Show()
{

	 cout<<setprecision(2)<<fixed; 

	//********************************************************************
	// Method: Displaying Indexes and values of the array.
	//
	// Purpose: To be able to demostray that class Myarray works properly
	//********************************************************************
	 cout<<right<<"  -----------------------------------------";
	 cout<<"-------------------------------\n";
	 cout<<right<<setw(56)<< " ARRAY INDEXS AND VALUES DATA TABLE \n";
	 cout<<right<<"  ------------------------------------------";
	 cout<<"------------------------------\n";	
	 cout<<"\n"; 
	 size=Size();
	 int i;
	 cout<<" Array Index : ";
	 for(i=0;i<size;i++)							//- Displaying Indexs of Array
	 {   
	 cout<<setw(5)<<left<<i;
	 }

     if (i==size)									//- Displaying Values of Array
	 {cout<<endl;  cout<<setw(5)<<left<<" Array Value : ";
	 for(int j=0;j<size;j++)
	 {	
	 if(size>10 && j>=10)
	{m_Array[j]=0;}
	 cout<<setw(5)<<left<<m_Array[j];
	 }
	 }

cout<<"\n\n";
}




//*********************************************************************
// Method: Show()
// Purpose:Displaying Indexes and values of the array.
// -To be able to demostray that class Myarray works properly
//*********************************************************************
void MyArray::Show(ostream& p)
{	 
	 p<<"\n\n"; 
	 p<<setprecision(2)<<fixed; 
	 
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



//*********************************
// Method: Clone
//
// Purpose: Clonning MyArray Class
//*********************************
MyArray* MyArray::Clone()
{ 
	ofstream p;
	p.open("Clonefile.txt");
	int i=0,v=0;
	
	MyArray * CLONE = new MyArray;

	 cout<<right<<"  ---------------------------------------------------";
	 cout<<"---------------------\n";
	 cout<<right<<setw(62)<< " ARRAY INDEXS AND VALUES DATA TABLE FOR CLONE \n";
	 cout<<right<<"  ----------------------------------------------------";
	 cout<<"--------------------\n";	
	 cout<<"\n"; 

	
	CLONE->Initialize();	//-Initializing the Clone Array.
	CLONE->Show();			//-Displaying.
	CLONE->Show(p);			//-Saving Displaying into a File.
		
	for(i=0;i<10;i++)
	{	
	v+=100;
	if(i==6 || i==8)
	{CLONE->Set(i,400);}

	else if(i==2 || i==4)
	{CLONE->Set(i,200);}	//-Calling function to assign an index and value to each element in the array.

	else
	CLONE->Set(i,v);
	}						//-Calling function to assign an index and value to each element in the array.

	CLONE->Show();			//-Displaying set Array Elements.
	CLONE->Show(p);			//-Saving Displaying into a File.
	CLONE->MyArray::MyArray(size);	//-Calling Constructor to initialize Temporary Arrary.
	CLONE->Show();			//-Displaying 
	CLONE->Show(p);			//-Saving Displaying into a File.





//*******************************
// Method: Resize
//
// Purpose: Modifying Array Size
//*******************************
	cout<<" The Actual Size of Your Clone Array is : "<<CLONE->Size()<<endl;
	cout<<" Risizing Your Array to 6: \n";
	size=6;
	SIZE=6;

	CLONE->Resize(size);
	CLONE->Show();			//-Displaying 
	CLONE->Show(p);			//-Saving Displaying into a File.
	
return new MyArray(*this);
}



//*********************************************************************
// Method: MyArray()
//
// Purpose: Default Constructor to Initialize values of a whole Array.
//*********************************************************************

MyArray::MyArray()
{
SIZE=0;
size=Size();
m_Array= new int[size]; 
Initialize();					//Sets the value of all elements to 0 for the first and new array.
}



//********************************************************
// Method: MyArray(int SIZE)
//
// Purpose: Initialize the values of a temporary Array
//********************************************************
MyArray::MyArray(int SIZE)
{
m_temp=new int[SIZE];

	for(int i=0;i<SIZE;i++)
	{
	 m_temp[i]=0;
	}
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
void MyArray::ClassOutput(ostream& p, int value, int sosa, int value1, int index1, int value2, int index2, int index)
{
	 p<<setprecision(2)<<fixed; 


	//***************************************************************************
	// Method: Displaying Indexes and values of the array.
	//
	// Purpose: To be able to demostray that class Myarray works properly
	//***************************************************************************
	 p<<right<<"\n\n  -----------------------------------------";
	 p<<"-------------------------------\n";
	 p<<right<<setw(62)<< " FINAL ARRAY INDEXS AND VALUES COMPLETE DATA TABLE \n";
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

 
	//-Table to display the properties of the array.
	 p<<right<<"\n\n  -----------------------------------------";
	 p<<"-------------------------------\n";
	 p<<right<<setw(53)<< " ARRAY PROPERTIES DATA TABLE \n";
	 p<<right<<"  ------------------------------------------";
	 p<<"------------------------------\n";	
	 p<<right<<setw(30)<<" Array Size .= "<<setw(5)<<right<<size;
	 p<<setw(21)<<" Items Added....= "<<setw(5)<<right<< size-sosa <<endl;



	//***************************************************************************
	// Method: Testing value for the Input Index.
	//
	// Purpose: To check wether the value is in the array or not.
	//***************************************************************************	 
	 p<<right<<setw(30)<<" Input Index = "<<setw(5)<<right<< index;
	 if(value==-1)
	 p<<setw(21)<<" Assigned Value = "<<setw(5)<<right<<"None"<<"\n\n"; 
	 else
	 p<<setw(21)<<" Assigned Value = "<<setw(5)<<right<<value<<"\n\n";
	
	 

	//***************************************************************************
	// Method: Testing value for the first occurrence.
	//
	// Purpose: To check wether it is in the array or not.
	//***************************************************************************	 
	 p<<right<<setw(39)<<" FIRST OCCURENCE CASE: \n";
	 p<<setw(30)<<" Value ......= "<<setw(5)<<right<<value1; 

	if(index1==-1)	
	p<<right<<setw(21)<<" Index .........= "<<setw(5)<<right<<"None"<<"\n\n";
	else
	p<<right<<setw(21)<<" Index .........= "<<setw(5)<<right<<index1<<"\n\n";



	//***************************************************************************
	// Method: Testing value for the last occurrence.
	//
	// Purpose: To check wether it is in the array or not.
	//***************************************************************************	 
	p<<right<<setw(39)<<" LAST OCCURRENCE CASE: \n";
	p<<setw(30)<<" Value ......= "<<setw(5)<<right<<value2; 
	
	if(index2==-1)	
	p<<right<<setw(21)<<" Index .........= "<<setw(5)<<right<<"None"<<"\n\n";
	else
	p<<right<<setw(21)<<" Index .........= "<<setw(5)<<right<<index2<<"\n\n";

	p<<right<<"  ------------------------------------------";
	p<<"------------------------------\n";

	p<<"\n\n";
}