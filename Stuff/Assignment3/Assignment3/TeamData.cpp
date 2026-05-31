//**************************************************************************
// File: TeamData.ccp
//
// Purpose: To call the functions of the classes BaseballPlayer and Mylist.
//
// Written By: Piter Garcia 
//**************************************************************************

#include "MyList.h"
int main()
{
	ofstream DATA;													//Declearing a ofstream variable.
	DATA.open("Assignment3.txt");		  //Creating and Opening a file to save baseball player data.

	
	//***********************************************************************************************
	// Method: Assigning values for BaseballPlayer class members
	//
	// Purpose: To prove functions are working properly and display
	//***********************************************************************************************

	BaseballPlayer p("Darwing",8,16,20);							  //First BaseballPlayer Instance.
	p.AuthorName(cout);						  //Calling function to output header file on the console.
	p.AuthorName(DATA);						    //Calling function to save header file on the console.
	cout<<setw(50)<<"\t CONTRUSTOR PROPERTIES\n ";
													    DATA<<setw(50)<<"\t CONTRUSTOR PROPERTIES\n ";
	p.show(cout);			//Overloading function to output BaseballPlayer parameters on the console.
	p.show(DATA);			  //Calling function to save BaseballPlayer parameters in Assignment3.txt.
	cout<<setw(56)<<"\t TESTING SET/GET METHODS\n ";						  
													 DATA<<setw(51)<<"\t TESTING SET/GET METHODS\n  ";
	p.setname("Peterzon");			  //Assigning a baseball player name to test BaseballPlayer class.
	p.setab(20);			 //Assigning a baseball player at bat number to test BaseballPlayer class.
	p.sethits(7);			   //Assigning a baseball player hits number to test BaseballPlayer class.
	p.sethr(4);			  //Assigning a baseball player home runs number to test BaseballPlayer class.

	p.show(cout);			//Overloading function to output BaseballPlayer parameters on the console.
	p.show(DATA);			  //Calling function to save BaseballPlayer parameters in Assignment3.txt.



	MyList z;												    //First MyList Instance.		
	MyList();	   //Calling constructor to allocate and intialize(NULL) dynamic memory.
	int LENGTH=0;						 //Variable to keep track of the size of MyList.
	BaseballPlayer Peter("Peter",8,64,40), Zac("Zac",8,128,80),  Juan("Juan",8,256,90); 
												  //Three more BaseballPlayer instances.
	


	//***********************************************************************
	// Method: Adding data BaseballPlayer Type to MyList class
	//
	// Purpose: To prove functions work properly and display
	//***********************************************************************
	z.Add(p);			
	z.Add(Peter);	
	z.Add(Zac);
	z.Add(Juan);
		   //Adding Baseball Players Darwing, Peter, Juan, and Jhon to MyList.
	z.ShowToFile(cout);		
			//Overloading function to output MyList parameters on the console.
	LENGTH=z.Length();					  //Calling to get the size of MyList.
	cout<<" The Length of Your Unsorted Linked List is "<<LENGTH<<"\n\n ";
						   //Outputing Size of the List on the Console Window.
	z.ShowToFile(DATA);
			//Calling function to output MyList parameters on Assignment3.txt.
	DATA<<" The Length of Your Unsorted Linked List is "<<LENGTH<<"\n\n ";
								 //Saving Size of the List on Assignment3.txt.





	//****************************************************************************************
	// Method: Deleting a dataBaseballPlayer Type to MyList class
	//
	// Purpose: To prove functions work properly and display 
	//****************************************************************************************
	DATA<<"\n\n  NEW MYLIST CLASS PROPERTIES" <<     setw(50)<<right<< "(BASEBALL LEAGUE)\n ";
	DATA<<" AFTER DELETING THE BASEBALL PLAYER \n ";
	DATA<<" ----------------------------------------------------------------------------\n " ;
								    //Title for New MyList After Deleting a member from MyList.
	string name;				    //Declearning a variable for the baseball player to delete.

	for(int x=0;x<2;x++)	   //Loop to avoid much coding and test delete method in two cases.
	{
		if(x==0)
			name="Zac";							 //First, deleting a baseball player on MyList.
		else
			{
				name="Junior";		//Second, deleting a baseball player that is not on MyList.
					         cout<<"\n\t\t TESTING DELETING A NAME THAT IS NOT ON MyList\n\n ";						  
				         DATA<<"\n\t\t\t\t TESTING DELETING A NAME THAT IS NOT ON MyList\n\n ";
			}

		z.Delete(name);						//Deleting the Baseball Player Darwing from MyList.
		LENGTH=z.Length();								   //Calling to get the size of MyList.				   
		if(LENGTH==z.Length())
		{
		//Saving Warning Msg for none found Baseball Player Name in MyList on Assignment3.txt.
				 DATA<<" SORRY, THE BASEBALL PLAYER(S) "<<name<<" IS NOT ON MyList RECORD\n ";
																  DATA<<" PLEASE, TRY AGAIN!";																  
		}
		z.ShowToFile(cout);		  //Overloading to output modifications on the Console Window.
			        cout<<" The Length of Your Unsorted Linked List is "<<z.Length()<<"\n\n ";
									 //Outputing the size of the MyList on the Console Window.
		z.ShowToFile(DATA);		   //Calling function to save modifcations in Assignment3.txt.
				    DATA<<" The Length of Your Unsorted Linked List is "<<z.Length()<<"\n\n ";
											   //Saving size of the MyList in Assignment3.txt.
	}


	
	

	//*************************************************************************
	// Method: Clearing all data BaseballPlayer Type from MyList class
	//
	// Purpose: To prove functions work properly and display
	//*************************************************************************
	z.Clear();
	DATA<<" -----------------------------------------------------------------";
														DATA<<"-----------\n ";
			DATA<<"\n  YOUR ENTIRE UNSORTED LINKED LIST HAS BEEN CLEARED! \n ";
	DATA<<" -----------------------------------------------------------------";
														DATA<<"-----------\n ";
				       //Saving Empty List Warning Message in Assignment3.txt.
	z.ShowToFile(cout);
	 cout<<" The Length of Your Unsorted Linked List is "<<z.Length()<<"\n\n ";
	z.ShowToFile(DATA);
	    //Calling function to save the baseball player data in Assignment3.txt.
	 DATA<<" The Length of Your Unsorted Linked List is "<<z.Length()<<"\n\n ";


	system("pause ");  // Pausing console window to be able to see output data.
	return 0;
}



