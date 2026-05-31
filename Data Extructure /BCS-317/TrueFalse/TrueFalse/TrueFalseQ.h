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

class TrueFalseQ
{
	string statement;
	bool *correctAnswer;
	bool *UserAnswer;
	int nextIndex;

public:
bool Getuseranswer(bool);
void setuseranswer(bool);

bool Getcorrectanswer(bool);
void setcorrectanswer(bool);

void Set(bool Answer);					//– Sets the array element at the given index to the given value. 
string  Get(bool UserAnswer);			//– Return the value located at element index of the array.

void setstatment(string s);

void AddQuestion(TrueFalseQ  q);

TrueFalseQ();							//- Constructor	
TrueFalseQ(const TrueFalseQ& other);	//Copy Constructor
//~TrueFalseQ();						//- Distructor
};