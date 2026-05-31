
// File: PlayerDetails.ccp
//
// Purpose: To write methods or functions that will be called from main. 
// Purpose: To assign, edit and obtain the value of parameters in a class or struct.
//
// Written By: Piter Garcia 
//*********************************************************************************
#include "MyQueue.h"




//*********************************************************************************
// Method: BaseballPlayer()
//
// Purpose: Default Constructor to Initialize BaseballPlayer class member variables
// Big-O runtime cost: Big-O(1)
//*********************************************************************************
BaseballPlayer::BaseballPlayer()
{	
	name = " ";
	hits = 0;
	ab = 0;
	hr = 0;
}




//***************************************************************************************
// Method: BaseballPlayer(string , int , int , int )
//
// Purpose: Constructor to assign a value to BaseballPlayer parameters
// Note: Very Useful to avoid much coding when adding a baseball player into any class
// Big-O runtime cost: Big-O(1)
//***************************************************************************************
BaseballPlayer::BaseballPlayer(string n, int hts, int a, int h)
{
	name = n;
	hits = hts;
	ab = a;
	hr = h;
}





//************************************************************************************************************
// Method: Getname()
//
// Purpose: To Get a Baseball Player name from BaseballPlayer class
// Big-O runtime cost: Big-O(1)
//
// Note: Very usefull method to delete the dinamically allocated memory of any baseball player in any class
//************************************************************************************************************
string BaseballPlayer::Getname()
{

	return name;														//Returning name of a Baseball Player.
}





//**************************************************************
// Method: Getab()
//
// Purpose: To obtain the number of at bats of a baseball player
// Big-O runtime cost: Big-O(1)
//**************************************************************
int BaseballPlayer::Getab()
{

	return ab;	   //Returning a baseball player at bats number. 
}





//********************************************************
// Method: Gethits()
//
// Purpose: To get the number of hits of a baseball player
// Big-O runtime cost: Big-O(1)
//********************************************************
int BaseballPlayer::Gethits()
{

	return hits;//Returning a baseball player hits number. 
}




//*************************************************************
// Method: Gethr()
//
// Purpose: To get the number of home runs of a baseball player
// Big-O runtime cost: Big-O(1)
//*************************************************************
int BaseballPlayer::Gethr()
{

	return hr;  //Returning a baseball player home runs number.
}




//************************************************
// Method: setsetname(string n)
//
// Purpose: To assign a name to a baseball player
// Big-O runtime cost: Big-O(1)
//************************************************
void BaseballPlayer::setname(string n)
{
	name = n; //Assigninng a baseball player name.
}





//**************************************************************
// Method: setab(int a)
//
// Purpose: To assign the number of at bats to a baseball player 
// Big-O runtime cost: Big-O(1)
//**************************************************************
void BaseballPlayer::setab(int a)
{
	ab = a;		   //Assigning a baseball player at bats number.
}





//***********************************************************
// Method: sethits(int hs)
//
// Purpose: To assign the number of hits of a baseball player
// Big-O runtime cost: Big-O(1)
//***********************************************************
void BaseballPlayer::sethits(int hs)
{
	hits = hs;     //Assigning a baseball player hits number.
}





//***************************************************************
// Method: sethr(int h)
//
// Purpose: To assign the number of home run to a baseball player
// Big-O runtime cost: Big-O(1)
//***************************************************************
void BaseballPlayer::sethr(int h)
{
	hr = h;		 //Assigning a baseball player  home runs number.
}




//*************************************************************
// Method: Avg()
//
// Purpose: To obtain the batter's average of a baseball player
// Big-O runtime cost: Big-O(1)
//*************************************************************
double BaseballPlayer::Avg()
{
	double avg, HITS, AB;

	HITS = hits;			   //Passing data from int to Double.
	AB = ab;				   //Passing data from int to Double.
	avg = HITS/AB;//Calculating baseball player batter's average. 
	
	return avg;
}

//*************************************************************************
// Method: Show()
//
// Purpose: To Display all member variables on the console.
// Big-O runtime cost: Big-O(1)
//*************************************************************************
void BaseballPlayer::show()
{
	cout<<" BASEBALL PLAYER DATA \n ";
					  cout<<"_____________________________________________________________________________\n\n";
	cout<<setw(12)<<" "<<right;
	cout<<" "<<setw(7)<<right<<" Name  | "<<" At Bat(s) | "<<" Hit(S) | "<<" Home Run(s) | "<<" Average | \n  ";
			cout<<setw(16)<<right<<name<<right<<"  |"<<setw(11)<<ab <<right<<" |"<<setw(8)<<right<< hits <<" |";
	cout<<setw(13)<<right<< hr <<" |"<<setw(9)<<right<<Avg() <<" |\n ";
					  cout<<"_____________________________________________________________________________\n\n";

//Display the baseball player name, number of at bats, number of hits, number of home runs, and batter's average 
}




//*************************************************************************
// Method: show(ostream & cout)
//
// Purpose: To Display all member variables on the console.
// Purpose: To Display all member variables to a given output file stream.
// Big-O runtime cost: Big-O(1)
//*************************************************************************
void BaseballPlayer::show(ostream & cout)
{
	cout<<" BASEBALL PLAYER DATA \n ";
					  cout<<"_____________________________________________________________________________\n\n";
	cout<<setw(12)<<" "<<right;
	cout<<" "<<setw(7)<<right<<" Name  | "<<" At Bat(s) | "<<" Hit(S) | "<<" Home Run(s) | "<<" Average | \n  ";
			cout<<setw(16)<<right<<name<<right<<"  |"<<setw(11)<<ab <<right<<" |"<<setw(8)<<right<< hits <<" |";
	cout<<setw(13)<<right<< hr <<" |"<<setw(9)<<right<<Avg() <<" |\n ";
					  cout<<"_____________________________________________________________________________\n\n";
					  
//Display the baseball player name, number of at bats, number of hits, number of home runs, and batter's average 
}
