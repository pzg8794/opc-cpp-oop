//**********************************************************************************************
// Method: AuthorName()
//
// Purpose:	Displaying Author's Name and Header of this file.
// Purpose: To be able to identify the name and type of file that was used.
//**********************************************************************************************
#include "MyQueue.h"


void BaseballPlayer::AuthorName(ostream& cout)						  
{
	cout<<"\n\n";							   //Displaying Assignment Number and Author's Name.
				     cout<<"  LAB ASSIGNMENT # 04 " <<setw(58)<<right<< " BY  PITER GARCIA\n " ;
						   cout<<" -------------------" <<setw(57)<<right<< "----------------" ;
	cout<<"\n\n\n";												  //Displaying Assignment Title. 
			   cout<<right<<setw(70)<<" PROGRAM ASSIGNMENT CREATING AN UNSORTED LINKED LIST \n";										
	   cout<<setw(73)<<right<<" ==========================================================\n\n";
	cout<<"\n\n ";							//Baseball Player Data Title to show on the console.
		     cout<<" BASEBALPLAYER CLASS PROPERTIES" <<setw(48)<<right<< "(BASEBALL PLAYER) \n";
	cout<<"  ----------------------------------------------------------------------------\n " ;
}

/*

//*********************************************************************************
// Method:
//
// Purpose: 
// Big-O runtime cost: Big-O(1)
//*********************************************************************************
void BinarySearchTree::remove(BaseballPlayer b)
{
    //Locate the element
    bool found = false;
    if(isEmpty())
    {
        cout<<" This Tree is empty! "<<endl;
        return;
    }
    
    MyNode* curr;
    MyNode* parent;
    curr = root;
    
    while(curr != NULL)
    {
         if(curr->data.Getname() == b.Getname())
         {
            found = true;
            break;
         }
         else
         {
             parent = curr;
             if(b.Getname()>curr->data.Getname()) curr = curr->right;
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
    if((curr->left == NULL && curr->right != NULL)||(curr->left != NULL && curr->right == NULL))
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
		if(parent->left == curr)
			parent->left = NULL;

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
				curr->data.Getname() = tmp->data.Getname();
				curr->right = tmp->right;
				delete tmp;
           }

        }
		 return;
    }

}*/