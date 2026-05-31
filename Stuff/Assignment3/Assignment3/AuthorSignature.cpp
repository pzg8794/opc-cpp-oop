//*********************************************************************************
// File: BaseballPlayer.ccp
//
// Purpose: To write methods or functions that will be called from main. 
// Purpose: To assign, edit and obtain the value of parameters in a class or struct.
//
// Written By: Piter Garcia 
//*********************************************************************************
#include "MyList.h"										 //Class and Struct Library



//**********************************************************************************************
// Method: AuthorName()
//
// Purpose:	Displaying Author's Name and Header of this file.
// Purpose: To be able to identify the name and type of file that was used.
//**********************************************************************************************
void BaseballPlayer::AuthorName(ostream& cout)						  
{
	cout<<"\n\n";							   //Displaying Assignment Number and Author's Name.
				     cout<<"  LAB ASSIGNMENT # 03 " <<setw(58)<<right<< " BY  PITER GARCIA\n " ;
						   cout<<" -------------------" <<setw(57)<<right<< "----------------" ;
	cout<<"\n\n\n";												  //Displaying Assignment Title. 
			   cout<<right<<setw(70)<<" PROGRAM ASSIGNMENT CREATING AN UNSORTED LINKED LIST \n";										
	   cout<<setw(73)<<right<<" ==========================================================\n\n";
	cout<<"\n\n ";							//Baseball Player Data Title to show on the console.
		     cout<<" BASEBALPLAYER CLASS PROPERTIES" <<setw(47)<<right<< "(BASEBALL PLAYER) \n";
	cout<<"  ----------------------------------------------------------------------------\n " ;
}
