//*************************************************************************************
// File: BaseballPlayers.h
//
// Purpose: To create a baseball player set of data to assign, edit and obtain 
// the value of parameters within this class.
//
// Written By: Piter Garcia 
//*************************************************************************************
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
								 
using namespace std;

class BaseballPlayer
{

int ab;
int hr;
int hits;
string name;

public:

BaseballPlayer();
BaseballPlayer(string, int, int, int);

//Observers
int Gethr();
int Getab();
double Avg();
int Gethits();
string Getname();

//Tranformers
void sethr(int);
void setab(int);
void sethits(int);
void setname(string);

//Observers
void show();
void show(ostream&);
void AuthorName(ostream& o);
};

