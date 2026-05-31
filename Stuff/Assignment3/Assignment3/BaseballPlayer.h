//*************************************************************************************
// File: Team.h
//
// Purpose: To create an usorted linked list that will contained a class variable type
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

int Gethr();
int Getab();
double Avg();
int Gethits();
string Getname();

void setab(int);
void sethr(int);
void sethits(int);
void show(ostream&);
void setname(string);
void AuthorName(ostream& o);
};