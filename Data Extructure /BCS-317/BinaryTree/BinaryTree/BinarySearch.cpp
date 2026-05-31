#include "BinarySearch.h"


//*********************************************************************************
// Method: BaseballPlayer()
//
// Purpose: Default Constructor to Initialize root of the three.
// Big-O runtime cost: Big-O(1)
//*********************************************************************************
MyBinarySearchTree::MyBinarySearchTree()
 {
    root = NULL;
 }





//**************************************************************
// Method: ~BinarySearchTree()
//
// Purpose: Constructor to release dynamically allocated memory.
// Big-O runtime cost: Big-O(N)
//**************************************************************
  MyBinarySearchTree::~MyBinarySearchTree()
  {
	  if(IsEmpty())
		cout<<" Sorry but Your Binary Tree is Empty";
	  else
		{
			Clear();
		}
  }




//*******************************************************************
// Method: insert(BaseballPlayer b)
//
// Purpose:	Adds a baseball player to the binary tree.
// Big-O runtime cost: Big-O(Log2(N))
//*******************************************************************
void MyBinarySearchTree::insert(BaseballPlayer b)
{
	  if(IsFull())
		cout<<" Sorry but Your Binary Tree is Empty";
	  else
		{
			insert(root,b);
		}
}





//*********************************************************************************
// Method:inorder()
//
// Purpose: To Display all member names on the console  in order.
// Big-O runtime cost: Big-O(N)
//*********************************************************************************
void MyBinarySearchTree::inorder()
{
	  if(IsEmpty())
		cout<<" Sorry but Your Binary Tree is Empty";
	  else
		{
			inorder(root);
	    }
}




//*********************************************************************************
// Method:preorder()
//
// Purpose:  To Display all member names on the console  in pre order.
// Big-O runtime cost: Big-O(N)
//*********************************************************************************
void MyBinarySearchTree::preorder()
{
	if(IsEmpty())
		cout<<" Sorry but Your Binary Tree is Empty";
	else
		{
			preorder(root);
		}
}





//*********************************************************************************
// Method:postorder()
//
// Purpose: To Display all player names on the console  in post order.
// Big-O runtime cost: Big-O(N)
//*********************************************************************************
void MyBinarySearchTree::postorder()
{
	if(IsEmpty())
		cout<<" Sorry but Your Binary Tree is Empty";
	else
		{
			postorder(root);
		}
}






//*************************************************************************
// Method: InorderAllData()
//
// Purpose: To Display all member variables on the console  in order.
// Big-O runtime cost: Big-O(N)
//*************************************************************************

void MyBinarySearchTree::InorderAllData()
{
	if(IsEmpty())
		cout<<" Sorry but Your Binary Tree is Empty";
	else
		{
			InorderAllData(root);
		}

}





//*************************************************************************
// Method: InorderAllData(ostream&  o)
//
// Purpose: To Display all member variables on the console.
// Purpose: To Display all member variables to a given output file stream.
// Big-O runtime cost: Big-O(N)
//*************************************************************************
void MyBinarySearchTree::InorderAllData(ostream&  o)
{
	  if(IsEmpty())
		cout<<" Sorry but Your Binary Tree is Empty";
	  else
		{
			InorderAllData(root, o);
		}
}




//*************************************************************
// Method: GetAvg()
//
// Purpose: To obtain the batter's average of a baseball player
// Big-O runtime cost: Big-O(Log2(N))
//*************************************************************
double MyBinarySearchTree::GetAvg(string name)
{
	  if(IsEmpty())
		{
			cout<<" Sorry but Your Binary Tree is Empty";
			return -1;
	    }
	
	  else
		  return GetAvg(root, name);
}





//********************************************************************************
// Method: Clear()
//
// Purpose: To clear and release dynamically allocated memory MyNode struct
// Big-O runtime cost: Big-O(N)
//********************************************************************************
void MyBinarySearchTree::Clear()
{
	if(IsEmpty())
		cout<<" Sorry but Your Binary Tree is Empty";
	else
		{
			Clear(root);
			root=NULL;
		}
}