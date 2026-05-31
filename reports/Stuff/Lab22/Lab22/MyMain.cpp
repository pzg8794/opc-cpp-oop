#include "BinarySearch.h"

int main ()
{
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
	   b.add(20);
	   b.add(10);
	   b.add(30);
	   b.add(50);
	   b.add(25);
	   b.add(15);
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

	
	  cout<< b.Find(100);
	  cout<<endl;

	  b.DELETE(25);
	  b.inorder();
         
	  system("pause");
	  return 0;
	}