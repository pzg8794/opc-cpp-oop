#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class BaseballPlayer
{

//	1.	Include member variables for name, ab (stands for at bats), hits, hr.
string name;
int ab;
int hits;
double hr;


public:

//2.	Write a constructor that takes values for all member variables as parameters.
BaseballPlayer(string n );
//3.	Implement the following methods:

//a.	Get/Set methods for all member variables.
string Getname();
int Getab();
int Gethits();
double Gethr();

void setname(string n);
void setab(int a);
void sethits(int hs);
void sethr(double h);
double Avg(); 
//– Returns the batter’s average. A batter’s average is calculated by dividing the hits by the at bats. For example, if a player has 30 hits and 100 at bats then their average is .300.
void Show();
//-  Prints the values of all member variables on the console.
void show(ostream & o); 
//- Prints the values of all member variables to a given output file stream. The output file stream must be opened before calling this method.
};


class MyList
{
public:

//3.	Implement the following constructors:
MyList();
//Creates an empty list.
//4.	Implement a destructor that performs the necessary cleanup.
~MyList();
//Clears the list and release dynamically allocated memory.
//5.	Implement the following methods:
void Clear();
//Clears the current list. Remember, when items are removed you MUST release memory.
int Length();
//Returns the number of items in the current list. 
//Important: The runtime of this operation should be O(1). 
void Add(BaseballPlayer b);
//Adds a baseball player to the beginning of the list.
void Delete(string name);
//Deletes the first element that matches the passed in baseball player’s name from the current list. Remember, when items are removed you MUST release memory.
void Show();
//Prints the values of all elements on the console.
void ShowToFile(ostream&  o);
};


class MyNode: MyList
{

MyList *Pointer;

public:


};