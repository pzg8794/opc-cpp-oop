//*********************************************************************************
// File: BinarySearchTree.h
//
// Purpose: 
//
// Written By: Piter Garcia 
//*********************************************************************************

#include "BinarySearch.h"


//***********************************************************
// Method: insert(MyNode*& t, BaseballPlayer b)
//
// Purpose:	Adds a baseball player to the binary tree.
// Big-O runtime cost: Big-O(Log2(N))
//***********************************************************
void MyBinarySearchTree::insert(MyNode*& t, BaseballPlayer b)
{
    if(t == NULL)
	{
		t = new MyNode;
		t->data = b;
		t->left = NULL;
		t->right = NULL;
	}
	else
	{
		if(t->data.Getname() > b.Getname())
			insert(t->left, b);
			
		else 
			insert(t->right, b);		
	}

}

//***************************************************************
// Method:inorder(MyNode* p)
//
// Purpose: To Display all member names on the console  in order.
// Big-O runtime cost: Big-O(N)
//***************************************************************
void MyBinarySearchTree::inorder(MyNode* p)
{
	if(p != NULL)
	{
		if(p->left) 
			inorder(p->left);

		cout<<" "<<setw(10)<<p->data.Getname()<<" ";
        
		if(p->right) 
			inorder(p->right);
	}
}





//********************************************************************
// Method:preorder(MyNode* p)
//
// Purpose:  To Display all member names on the console  in pre order.
// Big-O runtime cost: Big-O(N)
//********************************************************************
void MyBinarySearchTree::preorder(MyNode* p)
{
	if(p != NULL)
	{
		cout<<" "<<setw(10)<<p->data.Getname()<<" ";

		if(p->left) 
			preorder(p->left);
		
		if(p->right) 
			preorder(p->right);
	}
}




//********************************************************************
// Method:postorder(MyNode* p)
//
// Purpose: To Display all player names on the console  in post order.
// Big-O runtime cost: Big-O(N)
//********************************************************************
void MyBinarySearchTree::postorder(MyNode* p)
{
	if(p != NULL)
	{
		if(p->left) 
			postorder(p->left);
       
		if(p->right) 
			postorder(p->right);

		cout<<" "<<setw(10)<<p->data.Getname()<<" ";
	}
}





//*******************************************************************
// Method: InorderAllData(MyNode*p)
//
// Purpose: To Display all member variables on the console  in order.
// Big-O runtime cost: Big-O(N)
//*******************************************************************
void MyBinarySearchTree::InorderAllData(MyNode*p)
{
	if(p != NULL)
	{
		if(p->left) 
			InorderAllData(p->left);

		cout<<" "; p->data.show();
       
		if(p->right) 
			InorderAllData(p->right);
	}
}




//************************************************************************
// Method: InorderAllData(ostream&  o)
//
// Purpose: To Display all member variables on the console.
// Purpose: To Display all member variables to a given output file stream.
// Big-O runtime cost: Big-O(N)
//************************************************************************
void MyBinarySearchTree::InorderAllData(MyNode*p, ostream&  o)
{
	if(p != NULL)
    {
        if(p->left) 
		InorderAllData(p->left, o);

        cout<<" "; p->data.show(o);
        
		if(p->right) 
		InorderAllData(p->right, o);
    }
}





//**************************************************************
// Method: GetAvg()
//
// Purpose: To obtain the batter's average of a baseball player.
// Big-O runtime cost: Big-O(Log2(N))
//**************************************************************
double MyBinarySearchTree::GetAvg(MyNode *&p, string name)
{
	MyNode * ParentPtr;
	ParentPtr = NULL;
	bool found = false;

	while(p != NULL && !found)
    {
		if(name < p->data.Getname()) 
		{
			ParentPtr = p;
			p = p->left;
		}
		else if (name > p->data.Getname())	
		{
			ParentPtr = p;
			p = p->right;
		}
		else
		{
			found = true;
			return (p->data.Avg());
		}
	}

	return -1;
}






//*************************************************************************
// Method: Clear()
//
// Purpose: To clear and release dynamically allocated memory MyNode struct
// Big-O runtime cost: Big-O(N)
//*************************************************************************
void MyBinarySearchTree::Clear(MyNode* temp)
{
	if(temp != NULL)
	{
		Clear(temp->left);
		Clear(temp->right);
		delete temp;
	}
}





//********************************************
// Method:IsFull() const
//
// Purpose: To check if memory is full or not.
// Big-O runtime cost: Big-O(1)
//********************************************
bool MyBinarySearchTree::IsFull() const
{
	MyNode *location;
	try
	{
		location = new MyNode;
		delete location;
		return false;
	}
	catch(std::bad_alloc exception)
	{
		return true;
	}
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