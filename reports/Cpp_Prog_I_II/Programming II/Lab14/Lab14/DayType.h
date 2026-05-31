#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
 
using namespace std;

class dayType
{
public:
//member functions
void setDay(int day);
void printDay(ofstream& outData, int Today, int Yesterday, int Tomorrow, int Changeday);
void AuthorAndTitle(ofstream& outData);
int returnDay(int& day);
int returnNextDay();
int returnPreviousDay();
int calculateDay(int changeDay);
//constructor
dayType();
//days of week stored in array
string day[9];
int dayNumber;
private:
int tempDay;
};