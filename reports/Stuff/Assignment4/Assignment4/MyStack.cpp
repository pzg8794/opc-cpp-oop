// File: MyStack.ccp
//
// Purpose: To write methods or functions that will be called from main. 
// Purpose: To assign, edit and obtain parameter values within its class.
//
// Written By: Piter Garcia 
//*********************************************************************************
#include "MyQueue.h"




//*************************************************************************
// Method: MyStack()
//
// Purpose: Default Constructor to Initialize MyStack class member variables
// Big-O runtime cost: Big-O(1)
//*************************************************************************
MyStack::MyStack()
{	
	top=-1;

}//Creates an empty stack.



//*************************************************************************
// Method: Clear()
//
// Purpose: To clear or Empty the array player.
// Big-O runtime cost: Big-O(1)
//*************************************************************************
void MyStack::Clear()
{
	top=-1;
}
//Clears the stack.



//*******************************************************************
// Method: Push(BaseballPlayer b)
//
// Purpose: To add a BaseballPlayer in the array Player[100]. 
// Big-O runtime cost: Big-O(1)
//*******************************************************************
void MyStack::Push(BaseballPlayer b)
{ 	
	if (IsFull())
	{	
		cout<<" \n  Your List is Full \n ";
		return;
	}
	else
	{
		top++;
		player[top]=b;
	}

}
//Adds a baseball player to the top of the your array based list.



//****************************************************************************************************
// Method: Pop()
// 
// Purpose: To delete a BaseballPlayer from your array based list player[100].
// Big-O runtime cost: Big-O(1)
//****************************************************************************************************
void MyStack::Pop()
{
	int i=0;

	if (IsEmpty()) 
	{
		cout<<" \n  Your List is Empty \n ";
		return;
	}

	else
	{
												   //Title for a the New My List after deleting an Element.
															cout<<"\n\n  NEW MYSTACK CLASS PROPERTIES \n ";
		cout<<" AFTER DELETING FIRST BASEBALL PLAYER ( "<< player[top].Getname() <<" ) FROM THE LIST  \n ";
				 cout<<" ----------------------------------------------------------------------------\n " ;	

		top--;
	}
}
//Removes the top element of the stack.




//*******************************************************************
// Method: IsEmpty() 
//
// Purpose: Checking if MyStack is empty or not. 
// Big-O runtime cost: Big-O(1)
//*******************************************************************
bool MyStack::IsEmpty() const
{ 
	return ( top == -1); 
}




//*******************************************************************
// Method: IsFull() 
//
// Purpose: Checking if MyStack is full or not. 
// Big-O runtime cost: Big-O(1)
//*******************************************************************
bool MyStack::IsFull() const
{ 
	return ( top == length); 
}




//*******************************************************************
// Method: Top(BaseballPlayer& b)
//
// Purpose: Checking if MyStack is empty or not. 
// Purpose: Copying the first element of MyStack. 
// Big-O runtime cost: Big-O(1)
//*******************************************************************
void MyStack::Top(BaseballPlayer& b)
{
	if (IsEmpty()) 
	{
		cout<<" \n  Your List is Empty \n ";
		return;
	}
	else
	{
		b=player[top];
	}
}
//Puts the top element of the stack in b. 
//The parameter b contains a copy of the top element when Top ends.




//********************************************************************************************
// Method: Show()
//
// Purpose1: To prints the values of all elements on the console.
// Big-O runtime cost: Big-O(N)
//********************************************************************************************
void  MyStack::Show()
{ 
	if (IsEmpty()) 
	{
		cout<<" \n  Your List is Empty \n ";
		return;
	}
	else
	{
		int i=top,x=0;
																	  cout<<fixed<<setprecision(3);
		cout<<"\n\n\n ";			 //Title for my List(team) that contains Baseball Players data.
					 cout<<" MYSTACK CLASS PROPERTIES" <<setw(54)<<right<< "(BASEBALL LEAGUE) \n" ;
		cout<< "  ----------------------------------------------------------------------------\n ";
	
						   //Title for my Baseball Player that is contained in a BaseballPlayers class.
		cout<<setw(49)<<"\t BASEBALL LEAGUE DATA \t\n ";
		while(i!=-1)
		{
				
			cout<<"\n  "<< x++ <<")";    //Displaying Player(s) Unsorted possition on Mylist.
			player[i].show(cout);
			i--;	
		}
		if (IsFull()) 
		{
			cout<<" \n  Your List is Full \n ";
			return;
		}
		else
		{
			cout<<" \n  Your List is not Full \n ";
			cout<<"\n  The Maximun Size of Your List is "<<STACK_ARRAY_SIZE<<"\n  Your Actual Size is ";
			cout<<top+1<<endl;
									//Prints the Maximum size of your list along with your actual size.
		}
	}
} 






//********************************************************************************************
// Method: ShowToFile(ostream&  p)
//
// Purpose1: To prints the values of all elements on the console.
// Purpose2: To Display all member variables to a given output file stream.
// Big-O runtime cost: Big-O(N)
//********************************************************************************************
void  MyStack::ShowToFile(ostream&  cout)
{ 
	if (IsEmpty()) 
	{
		cout<<" \n  Your List is Empty \n ";
		return;
	}
	else
	{
		int i=top,x=1;
																		  cout<<fixed<<setprecision(3);
			cout<<"\n\n\n ";			 //Title for my List(team) that contains Baseball Players data.
						 cout<<" MYSTACK CLASS PROPERTIES" <<setw(54)<<right<< "(BASEBALL LEAGUE) \n" ;
			cout<< "  ----------------------------------------------------------------------------\n ";
	
						   //Title for my Baseball Player that is contained in a BaseballPlayers class.
		cout<<setw(49)<<"\t BASEBALL LEAGUE DATA \t\n ";
		while(i!=-1)
		{
				
				cout<<"\n  "<< x++ <<")";    //Displaying Player(s) Unsorted possition on Mylist.
				player[i].show(cout);
				i--;	
		}
		if (IsFull()) 
		{
			cout<<" \n  Your List is Full \n ";
			return;
		}
		else
		{
			cout<<" \n  Your List is not Full \n ";
			cout<<"\n  The Maximun Size of Your List is "<<STACK_ARRAY_SIZE<<"\n  Your Actual Size is ";
			cout<<top+1<<endl;
									//Prints the Maximum size of your list along with your actual size.
		}
	}
}
