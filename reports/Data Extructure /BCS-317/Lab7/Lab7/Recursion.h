//*********************************************************************************
// File: MyStack.h
//
// Purpose: To creat an array based list that will save as many BaseballPlayer data 
// type as the array size allows.
//
// Written By: Piter Garcia 
//*********************************************************************************

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>				 
using namespace std;

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
int *p;
int player[100];

public:
MyStack();


//Transformers
void Pop();													  //Removes the top element of the stack.
void Clear();																	  //Clears the stack.
void Push(int b);						//Adds a baseball player to the top of the stack.
void Top(int& b);								//Puts the top element of the stack in b. 

//Observers
int ArrayAdd(int, int);
int Fibonacci(int n);
int Factorial(int n);
int summation(int n);
int multiple(int,int);
int Power(int number, int index);
bool IsFull() const;
bool IsEmpty() const;

//Observers
void Show();						  //Prints the values of all elements on the stack to the console.
};



