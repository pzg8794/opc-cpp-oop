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
int size;
int *m_Array;
int *m_temp;

public:

int  Size();					//– Returns the size of the array. 
int	 elements;					//- Element added to the array.
int  FindFirst(int value);		//– Returns the index of the first occurrence of the given value in the array.
int  FindLast(int value);		//– Returns the index of the last occurrence of the given value in the array.
void Initialize();				//- Sets the value of all elements to 0.
void Initialize(int value);		//- Sets all elements to the given value.
void Set(int index, int value);	//– Sets the array element at the given index to the given value. 
int  Get(int index);			//– Return the value located at element index of the array.
void AuthorName();				//- Author Name and Header of the Output File.
void Resize(int);
MyArray*Clone();

void Show(); 
void Show(ofstream&); 
void ClassOutput(int, int, int, int, int, int, int);//- Outputs required results to prove the class works properly.

MyArray()
{
Initialize();					//Sets the value of all elements to 0 for the first and new array.
}
MyArray(int value)
{
Initialize(value);				//Sets all elements to a given value.
}
~MyArray()
{
								//Sets the value of all elements to 0.
}
};
