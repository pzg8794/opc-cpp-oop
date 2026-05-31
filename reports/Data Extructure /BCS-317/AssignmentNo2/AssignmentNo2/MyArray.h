//*****************************************************************
// File: MyArray.h
//
// Purpose: To write a class that will encapsulate a C++ Array 
//
// Written By: Piter Garcia 
//****************************************************************
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

class MyArray
{
private:
int size;						//-Size of the Array *m_Array.
int SIZE;						//-SIZE of the Array *m_temp.
int *m_Array;					//-Original Array.
int *m_temp;					//-Temporary Array.

public:

int  Size();					//– Returns the size of the array. 
int	 elements;					//- Element added to the array.
int  Get(int index);			//– Return the value located at element index of the array.
int  FindLast(int value);		//– Returns the index of the last occurrence of the given value in the array.
int  FindFirst(int value);		//– Returns the index of the first occurrence of the given value in the array.


void Show(); 
void Resize(int);				//- Perform a shallow copy and then resize m_Array.
void Initialize();				//- Sets the value of all elements to 0.
void AuthorName();				//- Author Name and Header of the Output File.
void Show(ostream&); 
void Initialize(int value);		//- Sets all elements to the given value.
void Set(int index, int value);	//– Sets the array element at the given index to the given value. 

void ClassOutput(ostream&, int, int, int, int, int, int, int);	//- Outputs required results to prove the class works properly.
	
MyArray();						//- Default Constructor.
MyArray(int);					//- Constructor for Temporary Array.
MyArray*Clone();				//- Used to clone MyArray Class.
~MyArray();						//- Distructor
};

