//*************************************************************************************
// File: Team.h
//
// Purpose: To create an usorted linked list that will contained a class variable type
//
// Written By: Piter Garcia 
//*************************************************************************************
#include "BaseballPlayer.h"
class MyList
{

	struct MyNode
	{
	int x;
	MyNode *next;
	BaseballPlayer data;
	}*root;
	int length;

public:

MyList();
~MyList();

int Length();

void Clear();
void Delete(string name);
void Add(BaseballPlayer b);
void ShowToFile(ostream&  o);
};

