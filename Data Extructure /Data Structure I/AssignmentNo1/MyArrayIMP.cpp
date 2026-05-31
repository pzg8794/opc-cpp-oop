//****************************************************************************************************
// File: MyArrayIMP.cpp
//
// Purpose: To assing, check, compare the values and index of the array in class MyArray. Also, to output
// required answers to demostrate that MyArray works properly.
//
// Written By: Piter Garcia 
//****************************************************************************************************

#include"MyArray.h"
int elements=0;

void MyArray::Set(int i, int value)	//– Sets the array element at the given index to the given value.
{ 
	cout<<"\n Please wait until 10 Array Index Numbers follow by its value are input: \n";
	cout<<" Note: Index Range is between 0 and 9: \n\n";	
	
	Array[0]=100;	Array[1]=200;	Array[2]=300;	Array[3]=400;	Array[4]=500;
	Array[5]=700;	Array[6]=500;	Array[7]=900;	Array[8]=900;	Array[9]=100;	
	
	 cout<<setw(20)<<right<<" Array Index : ";
	 for(i=0;i<10;i++)							//- Displaying Indexs of Array
	 {   
	 cout<<setw(5)<<right<<i;}

     if (i==10)									//- Displaying Values of Array
	 {cout<<endl;  cout<<setw(20)<<right<<" Array Value : ";
	 for(int j=0;j<10;j++)
	 {cout<<setw(5)<<right<<Array[j];}
	 }
	 cout<<endl;	
}

//**********************************************************************************
// Method: Displaying Author's Name and Header of this file.
//
// Purpose: To be able to identify the name and type of file that was used.
//**********************************************************************************
void MyArray::AuthorName()
{
	cout<<"\n\n";
	cout<<"  Lab Assignment # 01 " <<setw(58)<<right<< " By  Piter Garcia\n " ;
	cout<<" -------------------" <<setw(57)<<right<< "----------------" ;
	cout<<"\n\n\n";
	cout<<right<<setw(70);
	cout<<" Program Assignment using Parameter Functions with a Class \n";
	cout<<setw(71)<<right;
	cout<<" ==========================================================\n\n";
	cout<<"\n\n\n\n";
}

//**********************************************************************************
// Method: Looking for the index of the first occurrence of a given value.
//
// Purpose: To check if the value is in the array and wether it has an index or not.
//**********************************************************************************
int MyArray::Get(int index)
{
int x=1;
 	
	while(index<0 || index>10)//Loop to test the index to make sure that it is valid.
	{	
	cout<<"\n Please enter an Index between the range (0-10): \n ";
	cin>>index;
	} 

return Array[index];
}

//**********************************************************************************
// Method: Looking for the index of the first occurrence of a given value.
//
// Purpose: To check if the value is in the array and wether it has an index or not.
//**********************************************************************************
int MyArray::Size()
{ 
int i,size=0, j=0;

		for(i=9;i>=0;i--) //Adding the amount of elements in the array.
		{
			if (Array[i]>0) 
			{size++;}
			else
			{j++;}
		}
elements=j+size;
return size;
}

//**********************************************************************************
// Method: Looking for the index of the first occurrence of a given value.
//
// Purpose: To check if the value is in the array and wether it has an index or not.
//**********************************************************************************

int  MyArray::FindFirst(int value)		
{
	for(int i=0;i<=10;i++)
		{
			if (Array[i]== value)
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
		for(int i=10;i>=0;i--)
	{
		if (Array[i]== value)
		return i;
	}
}

//**************************************************************
// Method: Outputting required answers of the above methods.
//
// Purpose: To check if the class MyArray works properly or not.
//**************************************************************
void MyArray::ClassOutput(int value, int size, int value1, int index1, int value2, int index2, int index)
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
	 cout<<setw(20)<<right<<" Array Index : ";
	 for(i=0;i<10;i++)							//- Displaying Indexs of Array
	 {   
	 cout<<setw(5)<<right<<i;}

     if (i==10)									//- Displaying Values of Array
	 {cout<<endl;  cout<<setw(20)<<right<<" Array Value : ";
	 for(int j=0;j<10;j++)
	 {cout<<setw(5)<<right<<Array[j];}
	 }

cout<<"\n\n";
 
	//-Table to display the properties of the array.
	 cout<<right<<"  -----------------------------------------";
	 cout<<"-------------------------------\n";
	 cout<<right<<setw(53)<< " ARRAY PROPERTIES DATA TABLE \n";
	 cout<<right<<"  ------------------------------------------";
	 cout<<"------------------------------\n";	
	 cout<<right<<setw(30)<<" Array Size .= "<<setw(5)<<right<<size;
	 cout<<setw(21)<<" Items Used ....= "<<setw(5)<<right<< elements <<endl;
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
// Method: Initializing
//
// Purpose: To make every element equal to zero.
//****************************************************

void MyArray::Initialize()
{   
	 for(int j=0;j<10;j++)
	 {
		Array[j]=0;
	 }
}

//*******************************************************
// Method: Initializing
//
// Purpose: To make every element equal to a given value.
//*******************************************************
void MyArray::Initialize(int value)
{
	for(int j=0;j<10;j++)
	 {
		Array[j]=value;
	 }
}