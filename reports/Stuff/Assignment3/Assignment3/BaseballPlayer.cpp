//*********************************************************************************
// File: PlayerDetails.ccp
//
// Purpose: To write methods or functions that will be called from main. 
// Purpose: To assign, edit and obtain the value of parameters in a class or struct.
//
// Written By: Piter Garcia 
//*********************************************************************************
#include "MyList.h"										 //Class and Struct Library




//*********************************************************************************
// Method: BaseballPlayer()
//
// Purpose: Default Constructor to Initialize BaseballPlayer class member variables
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
// Note: Very Useful to avoid much coding when adding a baseball player into MyList class
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
//
// Note: Very usefull method to delete the dinamically allocated memory of any baseball player in Mylist class
//************************************************************************************************************
string BaseballPlayer::Getname()
{

	return name;														//Returning name of a Baseball Player.
}





//**************************************************************
// Method: Getab()
//
// Purpose: To obtain the number of at bats of a baseball player
//**************************************************************
int BaseballPlayer::Getab()
{

	return ab;	   //Returning a baseball player at bats number. 
}





//********************************************************
// Method: Gethits()
//
// Purpose: To get the number of hits of a baseball player
//********************************************************
int BaseballPlayer::Gethits()
{

	return hits;//Returning a baseball player hits number. 
}




//*************************************************************
// Method: Gethr()
//
// Purpose: To get the number of home runs of a baseball player
//*************************************************************
int BaseballPlayer::Gethr()
{

	return hr;  //Returning a baseball player home runs number.
}





//************************************************
// Method: setsetname(string n)
//
// Purpose: To assign a name to a baseball player
//************************************************
void BaseballPlayer::setname(string n)
{
	name = n; //Assigninng a baseball player name.
}





//**************************************************************
// Method: setab(int a)
//
// Purpose: To assign the number of at bats to a baseball player 
//**************************************************************
void BaseballPlayer::setab(int a)
{
	ab = a;		   //Assigning a baseball player at bats number.
}





//***********************************************************
// Method: sethits(int hs)
//
// Purpose: To assign the number of hits of a baseball player
//***********************************************************
void BaseballPlayer::sethits(int hs)
{
	hits = hs;     //Assigning a baseball player hits number.
}





//***************************************************************
// Method: sethr(int h)
//
// Purpose: To assign the number of home run to a baseball player
//***************************************************************
void BaseballPlayer::sethr(int h)
{
	hr = h;		 //Assigning a baseball player  home runs number.
}




//*************************************************************
// Method: Avg()
//
// Purpose: To obtain the batter's average of a baseball player
//*************************************************************
double BaseballPlayer::Avg()
{
	double avg, HITS, AB;

	HITS = hits;			   //Passing data from int to Double.
	AB = ab;				   //Passing data from int to Double.
	avg = HITS/AB;//Calculating baseball player batter's average. 
	
	return avg;
}