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
void MyBinarySearchTree::add(MyNode*& t, int b)
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
		if(t->data > b)
			add(t->left, b);
			
		else 
			add(t->right, b);		
	}

}



bool MyBinarySearchTree::Find(MyNode *p, int b)
{
	bool found = false;	 
	MyNode * ParentPtr;
	ParentPtr = NULL;

	while(p != NULL && !found)
    {
		if(b < p->data) 
		{
			ParentPtr = p;
			p = p->left;
		}
		else if (b > p->data)	
		{
			ParentPtr = p;
			p = p->right;
		}
		else
		{
			found = true;
			return true;
		}
	}

	return false;

}


void MyBinarySearchTree::find(MyNode *&p, int b)
{

	bool found = false;	 
	MyNode * ParentPtr;
	ParentPtr = NULL;

	while(p != NULL && !found)
    {
		if(b < p->data) 
		{
			ParentPtr = p;
			p = p->left;
		}
		else if (b > p->data)	
		{
			ParentPtr = p;
			p = p->right;
		}
		else
		{
			found = true;
		}
	}

	found = false;

}



void MyBinarySearchTree::DELETE(MyNode *curr, int data)
{
	MyNode* parent;

	   //Locate the element
    bool found = false;
    if(IsEmpty())
    {
        cout<<" This Tree is empty! "<<endl;
        return;
    }
    
    while(curr != NULL)
    {
         if(curr->data == data)
         {
            found = true;
            break;
         }
         else
         {
             parent = curr;
             if(data>curr->data) curr = curr->right;
             else curr = curr->left;
         }
    }
    if(!found)
		 {
        cout<<" Data not found! "<<endl;
        return;
    }

   
    // 3 cases :
    // 1. We're removing a leaf node
    // 2. We're removing a node with a single child
    // 3. we're removing a node with 2 children

    // Node with single child
    if((curr->left == NULL && curr->right != NULL)|| (curr->left != NULL && curr->right == NULL))
    {
       if(curr->left == NULL && curr->right != NULL)
       {
           if(parent->left == curr)
           {
             parent->left = curr->right;
             delete curr;
           }
           else
           {
             parent->right = curr->right;
             delete curr;
           }
       }
       else // left child present, no right child
       {
          if(parent->left == curr)
           {
             parent->left = curr->left;
             delete curr;
           }
           else
           {
             parent->right = curr->left;
             delete curr;
           }
       }
     return;
    }

		 //We're looking at a leaf node
		 if( curr->left == NULL && curr->right == NULL)
    {
        if(parent->left == curr) parent->left = NULL;
        else parent->right = NULL;
		 		 delete curr;
		 		 return;
    }


    //Node with 2 children
    // replace node with smallest value in right subtree
    if (curr->left != NULL && curr->right != NULL)
    {
        MyNode* chkr;
        chkr = curr->right;
        if((chkr->left == NULL) && (chkr->right == NULL))
        {
            curr = chkr;
            delete chkr;
            curr->right = NULL;
        }
        else // right child has children
        {
            //if the node's right child has a left child
            // Move all the way down left to locate smallest element

            if((curr->right)->left != NULL)
            {
                MyNode* lcurr;
                MyNode* lcurrp;
                lcurrp = curr->right;
                lcurr = (curr->right)->left;

                while(lcurr->left != NULL)
                {
                   lcurrp = lcurr;
                   lcurr = lcurr->left;
                }

				curr->data = lcurr->data;
                delete lcurr;
                lcurrp->left = NULL;
           }
           else
           {
                MyNode* tmp;
                tmp = curr->right;
                curr->data = tmp->data;
				curr->right = tmp->right;
               delete tmp;
           }

        }
		 return;
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

		cout<<" "<<setw(10)<<p->data<<" ";
        
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
		cout<<" "<<setw(10)<<p->data<<" ";

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

		cout<<" "<<setw(10)<<p->data<<" ";
	}
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