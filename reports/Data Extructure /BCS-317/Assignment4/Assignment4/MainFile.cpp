//*********************************************************************************
// File: MainFile.ccp
//
// Purpose: To write methods or functions that will be called from main. 
// Purpose: To assign, edit and obtain the value of parameters in a class or struct.
//
// Written By: Piter Garcia 
//*********************************************************************************
#include "MyQueue.h"

int main()
{
	ofstream DATA, DATA1, DATA2,A4;									//Declearing a ofstream variable.
	DATA.open("BaseballPlayers4.txt");		  //Creating and Opening a file to save baseball player data.
	DATA1.open("MyStack4.txt");
	DATA2.open("MyQueue4.txt");
	A4.open("Assignment4.txt");


	
	//***********************************************************************************************
	// Method: Assigning values for BaseballPlayer class members
	//
	// Purpose: To prove functions are working properly and display
	//***********************************************************************************************

	BaseballPlayer p("Darwing",8,16,20);							  //First BaseballPlayer Instance.
	p.AuthorName(cout);						  //Calling function to output header file on the console.
	p.AuthorName(DATA);						    //Calling function to save header data in a file. 
	p.AuthorName(A4);						    //Calling function to save header data in a file. 
	cout<<setw(50)<<"\t CONTRUSTOR PROPERTIES\n ";
													    DATA<<setw(50)<<"\t CONTRUSTOR PROPERTIES\n ";
														  A4<<setw(50)<<"\t CONTRUSTOR PROPERTIES\n ";
	p.show(cout);			//Overloading function to output BaseballPlayer parameters on the console.
	p.show(DATA);		 //Calling function to save BaseballPlayer parameters in BaseballPlayers4.txt.
	p.show(A4);									   //Calling function to save data in assignment4.txt. 
	cout<<setw(56)<<"\t TESTING SET/GET METHODS\n ";						  
													 DATA<<setw(54)<<"\t TESTING SET/GET METHODS\n  ";
													   A4<<setw(54)<<"\t TESTING SET/GET METHODS\n  ";
	p.setname("Peterzon");			  //Assigning a baseball player name to test BaseballPlayer class.
	p.setab(20);			 //Assigning a baseball player at bat number to test BaseballPlayer class.
	p.sethits(7);			   //Assigning a baseball player hits number to test BaseballPlayer class.
	p.sethr(4);			  //Assigning a baseball player home runs number to test BaseballPlayer class.

	p.show(cout);			//Overloading function to output BaseballPlayer parameters on the console.
	p.show(DATA);			  //Calling function to save BaseballPlayer parameters in Assignment3.txt.
	p.show(A4);								       //Calling function to save data in assignment4.txt. 







	MyStack z;												    //First MyList Instance.		
	  //This automatically Calls constructor to allocate and intialize pointers to NULL.
	int LENGTH=0;						 //Variable to keep track of the size of MyList.
	BaseballPlayer Peter("Peter",8,64,40), Zac("Zac",8,128,80),  Juan("Juan",8,256,90); 
												  //Three more BaseballPlayer instances.
	


	//***********************************************************************
	// Method: Adding data BaseballPlayer Type to MyStack class
	//
	// Purpose: To prove functions work properly and display
	//***********************************************************************
	z.Clear();
	z.Push(p);			
	z.Push(Peter);	
	z.Push(Zac);
	z.Push(Juan);
		   //Adding Baseball Players Darwing, Peter, Juan, and Jhon to MyList.

	z.ShowToFile(cout);	   //Outputing Size of the List on the Console Window.
	z.ShowToFile(DATA1);			//Saving Size of the List on MyStack4.txt.
	z.ShowToFile(A4);	   //Calling function to save data in assignment4.txt. 

	
	z.Pop();				    //Deleting first baseball player from the top.
	z.ShowToFile(cout);	   //Outputing Size of the List on the Console Window.
	z.ShowToFile(DATA1);			//Saving Size of the List on MyStack4.txt.
	z.ShowToFile(A4);	   //Calling function to save data in assignment4.txt. 

	BaseballPlayer top;	   //Saving first baseball player from the top in top.
	z.Top(top);
	cout<<"\n\n  The Top Baseball Player is "<< top.Getname() <<" \n ";
	DATA1<<"\n\n  The Top Baseball Player is "<< top.Getname() <<" \n ";




    //***********************************************************************
	// Method: Adding data BaseballPlayer Type to MyQueueclass
	//
	// Purpose: To prove functions work properly and display
	//***********************************************************************
	MyQueue g;
	MyQueue();
	g.Clear();
	g.Enqueue(p);
    g.Enqueue(Peter);
	g.Enqueue(Zac);
	g.Enqueue(Juan);
	g.ShowToFile(cout);	   //Outputing Size of the List on the Console Window.
	g.ShowToFile(DATA2);	        //Saving Size of the List on MyQueue4.txt.
	g.ShowToFile(A4);	   //Calling function to save data in assignment4.txt.		 

	BaseballPlayer deque;
	g.Dequeue(deque);		//Saving first baseball player in top of the list.
										 //and then deleting it from the list.
	g.ShowToFile(cout);	   //Outputing Size of the List on the Console Window.
	g.ShowToFile(DATA2);	        //Saving Size of the List on MyQueue4.txt.
	g.ShowToFile(A4);	   //Calling function to save data in assignment4.txt.
	cout<<"\n\n  The Baseball Player "<< deque.Getname() <<" Has Been Deleted From The List and Saved In deque \n ";
	DATA2<<"\n\n  The Baseball Player "<< deque.Getname() <<" Has Been Deleted From The List and Saved In deque \n ";



	system("pause ");  // Pausing console window to be able to see output data.
	return 0;
}
