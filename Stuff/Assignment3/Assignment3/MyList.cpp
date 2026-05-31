//*********************************************************************************
// File: MyList.ccp
//
// Purpose: To write methods or functions that will be called from main. 
// Purpose: To assign, edit and obtain the value of parameters in a class or struct
//
// Written By: Piter Garcia 
//*********************************************************************************
#include "MyList.h"										 //Class and Struct Library





//*************************************************************************
// Method: show(ostream & cout)
//
// Purpose: To Display all member variables on the console.
// Purpose: To Display all member variables to a given output file stream.
//*************************************************************************
void BaseballPlayer::show(ostream & cout)
{
	cout<<" BASEBALL PLAYER DATA \n ";
	cout<<" Name........: "<< name <<"\n ";	 //Display baseball player name
	cout<<" At Bat(s)...: "<< ab <<"\n ";		 // ,, ,, number of at bats 
	cout<<" Hit(S)......: "<< hits <<"\n ";			// ,, ,, number of hits
	cout<<" Home Run(s).: "<< hr <<"\n ";	   // ,, ,, number of home runs
	cout<<" Average.....: "<< Avg() <<"\n ";	  // ,, ,, batter's average 
}





//*************************************************************************
// Method: MyList()
//
// Purpose: Default Constructor to Initialize MyList class member variables
// Big-O runtime cost: Big-O(1)
//*************************************************************************
MyList::MyList()
{   
	 // This will be the unchanging first node.
	root = NULL;								   //Creates an empty list.
	length = 0;
}





//**************************************************************
// Method: ~MyList()
//
// Purpose: Constructor to release dynamically allocated memory.
// Big-O runtime cost: Big-O(1)
//**************************************************************
MyList::~MyList()
{
	Clear();    //Calling clear function to release back memory.
}





//*************************************************************************
// Method: Clear()
//
// Purpose: To clear and release dynamically allocated memory MyNode struct
// Big-O runtime cost: Big-O(N)
//*************************************************************************
void MyList::Clear()
{
	MyNode *temp;					 //temporary variable to hold location.
	while(root != NULL)
	{
		temp = root;							 //holding actual location.
		root = root->next;				 //location equal to next location.
		delete temp;			   //releasing back actual location memory.
	}
	length= 0;								   //Setting List Size to Zero.
			//Notifying on the console window that the list has been empty.
cout<<" -----------------------------------------------------------------";
													cout<<"-----------\n ";
	    cout<<"\n  YOUR ENTIRE UNSORTED LINKED LIST HAS BEEN CLEARED! \n ";
cout<<" -----------------------------------------------------------------";
													cout<<"-----------\n ";
}





//*************************************************************
// Method: Length()
//
// Purpose: To obtain the length of the unsorted MyList anytime
// Big-O runtime cost: Big-O(1)
//*************************************************************
int MyList::Length()
{
	return length;				//Returning size of the MyList.
}





//*******************************************************************
// Method: Add(BaseballPlayer b)
//
// Purpose: To unsortedly add a BaseballPlayer in MyList. 
// Big-O runtime cost: Big-O(1)
//*******************************************************************
void MyList::Add(BaseballPlayer b)
{
	MyNode *newNode;		 //Temporary variable to hold a new node.
	newNode = new MyNode;				 //Allocating dynamic memory.
	newNode->data = b;		   //Saving Baseball player data on data.
	newNode->next = root;	   //Next Location quals actual Location.
	root = newNode;			   //Actual location equals new location.
	length++;					   //Increasing the Size of the List.
}



//***********************************************************************************************
// Method: Delete(string name)
//
// Purpose: To check whether a given name is on MyList or not. 
// Purpose: To delete a BaseballPlayer from MyList.
// Big-O runtime cost: Big-O(N)
//***********************************************************************************************
void MyList::Delete(string name)
{
	MyNode *lastloc, *currentloc = root;//Creating a temporary Location to check and edit MyList.
	bool found = false;												 //The Name is not on MyList.
	lastloc = root;	  //Assigning Actual Location to a Temporary one to see if name is on MyList.

	while(lastloc != NULL) 
	{						   //Comparing Baseball Player(s) Name till last Node(NULL) is found.
		if(lastloc->data.Getname() == name)
			found = true;							   //Returning true if the name is on MyList.
		
		lastloc=lastloc->next;			  //Moving from actual Location to Next Location or Node.				
	}

	if(found==true)			   //Accessing Method to find and delete a player if found on MyList.
	{
			if(currentloc->data.Getname() == name)//Comparing name with the first name on MyList.
			{
				lastloc = currentloc;					//prevous location equal actual location.
				root = root->next;				  //Moving from actual location to next location.
			}
			else
			{
				while(currentloc->next->data.Getname()!= name) 
				{						    //Comparing name with the rest of the names on MyList.
					lastloc = currentloc;				//previous location equal actual location.
					currentloc = currentloc->next;         //Moving from current to next location.
				}

			lastloc = currentloc->next;		//Saving actual location(name) into previous location.
			currentloc->next = currentloc->next->next;	  //Moving  from current to next location.
			}
			delete lastloc;			 //Deleting previous location(name) and releasing back memory.
			length--;							    //Decreasing size of the unsorted linked list.
										  
										  //Title for a the New My List after deleting an Element.
													cout<<"\n\n  NEW MYLIST CLASS PROPERTIES \n ";
								  cout<<" AFTER DELETING THE BASEBALL PLAYER(S) " << name <<"\n ";
		cout<<" ----------------------------------------------------------------------------\n " ;
	}

	else if(found == false)
	{						   //Warning Message for a Baseball Player Name that is not in MyList.
					  cout<<" SORRY, THE BASEBALL PLAYER "<< name <<" IS NOT ON MyList RECORD\n ";
																	  cout<<" PLEASE, TRY AGAIN!";				
													  //returning to main once it is found or not.
	}
}





//********************************************************************************************
// Method: ShowToFile(ostream&  p)
//
// Purpose1: To prints the values of all elements on the console.
// Purpose2: To Display all member variables to a given output file stream.
// Big-O runtime cost: Big-O(N)
//********************************************************************************************
void MyList::ShowToFile(ostream&  cout)
{
																 cout<<fixed<<setprecision(3);
	MyNode *temp;											  //Creating a temporary Location.
	temp = root;							//Assigning Actual Location to Temporary Location.
	int i = 0;													  //Counting Baseball Players.
						 
	cout<<"\n\n\n ";			//Title for my List(team) that contains Baseball Players data.
				 cout<<" MYLIST CLASS PROPERTIES" <<setw(54)<<right<< "(BASEBALL LEAGUE) \n" ;
	cout<<"  ----------------------------------------------------------------------------\n ";
	
				  //Title for my Baseball Player that is contained in a BaseballPlayers class.
	cout<<setw(49)<<"\t BASEBALL LEAGUE DATA \t\n ";

	while( temp != NULL)   //Displaying Baseball Player(s) data till last Node(NULL) is found.
	{
	    cout<<"\n  "<< length-i <<")";    //Displaying Player(s) Unsorted possition on Mylist.		
		temp->data.show(cout);							    //Displaying Baseball Player Data.
		temp = temp->next;			   //Moving from actual Location to Next Location or Node.
		i++;						  //Increasing Baseball Player(s) Position withing MyList.
	}
}





