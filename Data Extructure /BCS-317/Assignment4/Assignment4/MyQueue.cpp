// File: MyQuequeccp
//
// Purpose: To write methods or functions that will be called from main. 
// Purpose: To assign, edit and obtain parameter values within its class and struct
//
// Written By: Piter Garcia 
//*********************************************************************************
#include "MyQueue.h"



//*************************************************************************
// Method: MyQueue()
//
// Purpose: Default Constructor to Initialize MyQueque class member variables
// Big-O runtime cost: Big-O(1)
//*************************************************************************
MyQueue::MyQueue()
{
	front= NULL;
	rear = NULL;								   
}
//creats an empty linked list



//**************************************************************
// Method: ~MyList()
//
// Purpose: Constructor to release dynamically allocated memory.
// Big-O runtime cost: Big-O( )
//**************************************************************
MyQueue::~MyQueue()
{
	Clear();    //Calling clear function to release back memory.
}
//performs the necessary cleanup.




//********************************************************************************
// Method: Clear()
//
// Purpose: To clear and release dynamically allocated memory MyNode struct
// Big-O runtime cost: Big-O(N)
//********************************************************************************
void MyQueue::Clear()
{

		MyNode *temp;
											 //temporary variable to hold location.
		while(front!= NULL)
		{
			temp = front;								 //holding actual location.
			front = front->next;				 //location equal to next location.
			delete temp;				   //releasing back actual location memory.
		}
		rear=NULL;
													   //Setting List Size to Zero.
					//Notifying on the console window that the list has been empty.
		cout<<" -----------------------------------------------------------------";
															cout<<"-----------\n ";
						 cout<<"\n  YOUR ENTIRE LINKED LIST HAS BEEN CLEARED! \n ";
		cout<<" -----------------------------------------------------------------";
															cout<<"-----------\n ";
	
	length=0;
	//Clears the queue and releases dynamically allocated memory.
}


//*******************************************************************
// Method: Add(BaseballPlayer b)
//
// Purpose:	Adds a baseball player to the end of the queue.
// Big-O runtime cost: Big-O(1)
//*******************************************************************
void MyQueue::Enqueue(BaseballPlayer newitem)
{
		if (IsFull())  
		{
			throw QueueFull();
			cout<<"\n Your MyQueue List is Full \n";
		}
		
		else 
		{ 
			MyNode* temp;
			temp = new MyNode;

			temp->data = newitem;
			temp->next = NULL;

			if (rear == NULL) 
				front = temp;
			else
				rear->next = temp;

			rear = temp;
			length++;
		}
}




//***************************************************************************************************
// Method: Delete(string name)
//
// Purpose: To save the top baseball player on my Queue List. 
// Purpose: To delete a BaseballPlayer from MyList.
// Big-O runtime cost: Big-O(1)
//***************************************************************************************************
void MyQueue::Dequeue(BaseballPlayer& b)
{
	
		if (IsEmpty())   
		{
		throw QueueEmpty();
		cout<<"\n Your MyQueue List is Empty \n";
		} 
		
		else 
		{ 														  cout<<"\n\n  NEW MYQUEQUE CLASS PROPERTIES\n ";
			cout<<" AFTER DELETING THE FIRST BASEBALL PLAYER ( " <<front->data.Getname() <<" ) FROM THE LIST\n ";
					   cout<<" ----------------------------------------------------------------------------\n " ;	
		
			MyNode* temp;
		
			temp = front;
			b= front->data;		
			front = front->next;
		
			if (front == NULL)
				rear = NULL;

			delete temp;
			length--;
		}
}
//Removes the first element from the queue. 
//The parameter b contains the removed element when Dequeue ends.




//********************************************************************************************
// Method: MyQueue::Show()
//
// Purpose1: Shows all the elements on the queue on standard output (cout).
// Big-O runtime cost: Big-O(N)
//********************************************************************************************
void MyQueue::Show()
{
	if (IsEmpty())   
	{
		throw QueueEmpty();
		cout<<"\n Your MyQueue List is Empty \n";
	} 
		
	else 
	{ 																 cout<<fixed<<setprecision(3);
		int i = 0;													  //Counting Baseball Players.
						 
		cout<<"\n\n\n ";			//Title for my List(team) that contains Baseball Players data.
					cout<<" MYQUEQUE CLASS PROPERTIES" <<setw(53)<<right<< "(BASEBALL LEAGUE) \n";
		cout<<"  ----------------------------------------------------------------------------\n ";
	
				  //Title for my Baseball Player that is contained in a BaseballPlayers class.
		cout<<setw(49)<<"\t BASEBALL LEAGUE DATA \t\n ";
		MyNode *temp = front;
		
		while( temp != NULL)	//Displaying Baseball Player(s) data till last Node(NULL) is found.
		{
			cout<<"\n  "<< i+1 <<")";          //Displaying Player(s) Unsorted possition on Mylist.		
			temp->data.show(cout);							     //Displaying Baseball Player Data.
			temp = temp->next;			    //Moving from actual Location to Next Location or Node.
			i++;						   //Increasing Baseball Player(s) Position withing MyList.
		}

		cout<<" \n  Your Actual Size is "<<length;
								//Prints the Maximum size of your list along with your actual size.
	}
}
//Prints the values of all elements of the queue on the console.





//********************************************************************************************
// Method: ShowToFile(ostream&  p)
//
// Purpose1: To prints the values of all elements on the console.
// Purpose2: To Display all member variables to a given output file stream.
// Big-O runtime cost: Big-O(N)
//********************************************************************************************
void MyQueue::ShowToFile(ostream&  cout)
{

	if (IsEmpty())   
	{
		throw QueueEmpty();
		cout<<"\n Your MyQueue List is Empty \n";
	} 
		
	else 
	{ 																 cout<<fixed<<setprecision(3);
		int i = 0;													  //Counting Baseball Players.
						 
		cout<<"\n\n\n ";			//Title for my List(team) that contains Baseball Players data.
					cout<<" MYQUEQUE CLASS PROPERTIES" <<setw(53)<<right<< "(BASEBALL LEAGUE) \n";
		cout<<"  ----------------------------------------------------------------------------\n ";
	
				  //Title for my Baseball Player that is contained in a BaseballPlayers class.
		cout<<setw(49)<<"\t BASEBALL LEAGUE DATA \t\n ";
		MyNode *temp = front;
		
		while( temp != NULL)	//Displaying Baseball Player(s) data till last Node(NULL) is found.
		{
			cout<<"\n  "<< i+1 <<")";          //Displaying Player(s) Unsorted possition on Mylist.		
			temp->data.show(cout);							     //Displaying Baseball Player Data.
			temp = temp->next;			    //Moving from actual Location to Next Location or Node.
			i++;						   //Increasing Baseball Player(s) Position withing MyList.
		}

		cout<<" \n  Your Actual Size is "<<length;
								//Prints the Maximum size of your list along with your actual size.
	}

}
//Prints the values of all elements of the queue on the console too.




//**********************************************************
// Method: MyQueue::IsFull()
//
// Purpose: Verifies whether MyQueue is full or not
// Big-O runtime cost: Big-O(1)
//**********************************************************
bool MyQueue::IsFull()
{
		MyNode *location;
		try 
		{
			location = new MyNode;
			delete location;
			return false;
		} 
		catch (bad_alloc exception)
		{ 
			return true; 
		}
}

//**********************************************************
// Method: MyQueue::IsEmpty()
//
// Purpose: Verifies whether MyQueue is Empty or not
// Big-O runtime cost: Big-O(1)
//**********************************************************
bool MyQueue::IsEmpty()
{
	return(front==NULL && rear==NULL);
}









