//*********************************************************************************
// File: MyStack.h
//
// Purpose: To creat an array based list that will save as many BaseballPlayer data 
// type as the array size allows.
//
// Written By: Piter Garcia 
//*********************************************************************************
#include "BaseballPlayers.h"


// PREPROCESSOR - Defined constant for the size of the queue
#define STACK_ARRAY_SIZE  100

//**********************************************************
//
// class - MyStack
//
//**********************************************************
class MyStack 
{
int top;
int length;
BaseballPlayer *p;
BaseballPlayer player[STACK_ARRAY_SIZE];

public:
MyStack();


//Transformers
void Pop();													  //Removes the top element of the stack.
void Clear();																	  //Clears the stack.
void Push(BaseballPlayer b);						//Adds a baseball player to the top of the stack.
void Top(BaseballPlayer& b);								//Puts the top element of the stack in b. 

//Observers
bool IsFull() const;
bool IsEmpty() const;

//Observers
void Show();						  //Prints the values of all elements on the stack to the console.
void ShowToFile(ostream&  o);	//Prints the values of all elements on the stack to the given ostream. 
};



