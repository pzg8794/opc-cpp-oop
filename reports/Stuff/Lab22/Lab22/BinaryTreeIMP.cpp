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
void MyBinarySearchTree::add(int b)
{
	  if(IsFull())
		cout<<" Sorry but Your Binary Tree is Empty";
	  else
		{
			add(root,b);
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


bool MyBinarySearchTree::Find(int data)
{
			return (Find(root, data));
}


//********************************************
// Method:IsEmpty() const
//
// Purpose: To check if binary tree is empty.
// Big-O runtime cost: Big-O(1)
//********************************************
bool MyBinarySearchTree::IsEmpty() const
{
	return (root == NULL);
}


void  MyBinarySearchTree::find(int data)
{
			return (find(root, data));
}

void MyBinarySearchTree:: DELETE(int data)
{

	DELETE(root, data);

}
