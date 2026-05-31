#include "BinarySearch.h"

int main ()
{
	ofstream DATA, DATA1, A5;									     //Declearing a ofstream variable.
	DATA.open("BaseballPlayers5.txt");	   //Creating and Opening a file to save baseball player data.
	DATA1.open("BinarySearchTree.txt");
	A5.open("Assignment5.txt");


	
	//************************************************************************************************
	// Method: Assigning values for BaseballPlayer class members
	//
	// Purpose: To prove functions are working properly and display
	//************************************************************************************************

	BaseballPlayer p("Darwing",8,16,20);							  //First BaseballPlayer Instance.
	p.AuthorName(cout);						  //Calling function to output header file on the console.
	p.AuthorName(DATA);						         //Calling function to save header data in a file. 
	p.AuthorName(A5);						         //Calling function to save header data in a file. 
	cout<<setw(50)<<"\t CONTRUSTOR PROPERTIES\n ";

													    DATA<<setw(50)<<"\t CONTRUSTOR PROPERTIES\n ";
														  A5<<setw(50)<<"\t CONTRUSTOR PROPERTIES\n ";
	p.show();				//Overloading function to output BaseballPlayer parameters on the console.
	p.show(DATA);		 //Calling function to save BaseballPlayer parameters in BaseballPlayers5.txt.
	p.show(A5);									   //Calling function to save data in assignment5.txt. 
	cout<<setw(56)<<"\t TESTING SET/GET METHODS\n ";						

													 DATA<<setw(54)<<"\t TESTING SET/GET METHODS\n  ";
													   A5<<setw(54)<<"\t TESTING SET/GET METHODS\n  ";
	p.setname("Peterzon");			  //Assigning a baseball player name to test BaseballPlayer class.
	p.setab(20);			 //Assigning a baseball player at bat number to test BaseballPlayer class.
	p.sethits(7);			   //Assigning a baseball player hits number to test BaseballPlayer class.
	p.sethr(4);			  //Assigning a baseball player home runs number to test BaseballPlayer class.


	p.show();				//Overloading function to output BaseballPlayer parameters on the console.
	p.show(DATA);			  //Calling function to save BaseballPlayer parameters in Assignment3.txt.
	p.show(A5);								       //Calling function to save data in assignment4.txt. 
	//MyBinarySearchTree Z;
	BaseballPlayer Peter("Peter",8,64,40), Zac("Zac",8,128,80),  Juan("Juan",8,256,90); 
												 //Three more BaseballPlayer instances.
	BaseballPlayer Peter1("Mark",4,32,20), Zac1("Luis",4,64,40),  Juan1("Adner",4,128,45); 
												 //Three more BaseballPlayer instances.
	

	//*********************************************************
	// Method: Insert(BaseballPlayer)
	//
	// Purpose: inserting baseball players in the binary tree.
	//*********************************************************
	   MyBinarySearchTree b;
	   string name;
       cout<<endl<<endl;
       cout<<setw(58)<<" Binary Search Tree Operations "<<endl;
       cout<<setw(58)<<" ----------------------------- "<<endl;
	   cout<<setw(50)<<"\t  Insertion/Creation \n\n"<<endl;
	   b.insert(Peter);
	   b.insert(Zac);
	   b.insert(Juan);
	   b.insert(Peter1);
	   b.insert(Zac1);
	   b.insert(Juan1);
       cout<<endl;


	//****************************************************************
	// Method: inoder()
	//
	// Purpose: Printing baseball player names from the binary tree in
	// left, middle and right.
	// Order Traversal on the console 
	//****************************************************************
                    cout<<setw(50)<<"\t  In-Order Traversal "<<endl;
                    cout<<setw(50)<<"\t  -------------------"<<endl;
     b.inorder();
     cout<<" \n\n\n\n";        




	//****************************************************************
	// Method: preorder()
	//
	// Purpose: Printing baseball player names from the binary tree in 
	// middle, left, right.
	// Pre - Order Traversal on the console
	//****************************************************************
    cout<<endl;
                   cout<<setw(50)<<"\t  Pre-Order Traversal "<<endl;
                    cout<<setw(50)<<"\t  -------------------"<<endl;
    b.preorder();
    cout<<" \n\n\n\n";


	//****************************************************************
	// Method: postorder()
	//
	// Purpose: Printing baseball player names from the binary tree in 
	// Post - Order Traversal on the console
	// Left, right, and middle.
	//****************************************************************
	cout<<endl;
                 cout<<setw(50)<<"\t  Post-Order Traversal "<<endl;
                  cout<<setw(50)<<"\t  --------------------"<<endl;
    b.postorder();
	cout<<" \n\n\n\n";
      


	//******************************************************************
	// Method: InorderAllData()
	//
	// Purpose: Printing all member variables in the binary tree 
	// in Order Traversal on the console and two different output files.
	//******************************************************************
	cout<<endl;
	cout<<setw(50)<<"\t In-Order All Data Traversal "<<endl;
	DATA1<<setw(50)<<"\t In-Order All Data Traversal "<<endl;
	A5<<setw(50)<<"\t In-Order All Data Traversal "<<endl;
	b.InorderAllData();
	b.InorderAllData(DATA1);
	b.InorderAllData(A5);
	cout<<" \n\n\n\n";



	//**************************************************************************
	// Method: GetAvg("name");
	//
	// Purpose: Obtaining a baseball player bat average.
	//**************************************************************************
	cout<<endl;
	double x;
	name="Adner";
	x=b.GetAvg(name);

	if(x == -1)
		{ 
			 cout<<" The Baseball Player "<< name <<" is not on the List \n";
			DATA1<<" The Baseball Player "<< name <<" is not on the List \n";
		       A5<<" The Baseball Player "<< name <<" is not on the List \n";
		}
	else	
		{
			cout<<" The Average of the Baseball Player "<< name <<" is "<<x<<endl;
		   DATA1<<" The Average of the Baseball Player "<< name <<" is "<<x<<endl;
			  A5<<" The Average of the Baseball Player "<< name <<" is "<<x<<endl;
		}

	  cout<<endl;
         
	  system("pause");
	  return 0;
	}