//*********************************************************************************
// File: MyQueque.h
//
// Purpose: To creat a linked list that will save as many BaseballPlayer data type 
// as memory allows.
//
// Written By: Piter Garcia 
//*********************************************************************************

//**********************************************************
// Include Files
//**********************************************************
#include "MyStack.h"

// PREPROCESSOR - If this file was already include then 
//					the file will not be included again
#ifndef QUETYPE
#define QUETYPE


//******************************************************************
// Exception classes
//******************************************************************
struct QueueFull{};		// Exception to throw when the queue is full
struct QueueEmpty{};   // Exception to throw when the queue is empty


//**********************************************************
//
// class - MyQueue
//
//**********************************************************
class MyQueue 
{
	//Private Members:
	struct MyNode
	{
	int x;
	MyNode *next;
	BaseballPlayer data;
	}*front,*rear;
	int length;


public:
	//Transformers:
	MyQueue();
	~MyQueue();

	void Clear();
	void Enqueue(BaseballPlayer b);
	void Dequeue(BaseballPlayer& b);

	//Observers:
	void Show();
	void ShowToFile(ostream&  o);

	bool IsFull();
	bool IsEmpty();
};
#endif