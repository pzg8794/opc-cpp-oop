//#include "stdafx.h"
#include "Lab11.h"

void SortedList::InsertItem(int i)	// Add an item in sorted order
{
NodeType *temp, *previous,*current;	

temp=new NodeType();
temp->listdata=i;
length++;

if (root== NULL) //first node in the list 
{
	root = temp;
}

else if (root->listdata<0 && temp->listdata<0) // insert at the head 
{
	temp->next = root;
	root = temp;
}
else 
{
	previous = root;	// trailing pointer							 
	current = root->next; 

while ((current != NULL) && current->listdata>=0 && temp->listdata>=0) 
{
	previous = current;
	current = current->next;
}

temp->next=previous->next;
previous->next=temp;
}

}



void SortedList::DeleteItem(int num)
{
   NodeType *current,*previous;
   current= root;
   if( current->listdata == num )
   {
        root = current->next;
		delete current;

   return;
   }

   previous = current;
   while( current!=NULL )
   {
      if( current->listdata == num )
      {
         previous->next = current->next;
         delete current;
		 length--;

       return;
      }

    previous = current;
    current = current->next;
   }
   cout<<"\n The Number "<<num<<" was not Found.";
}


void SortedList::MakeEmpty()
{

	NodeType *temp;
	while(root != NULL)
	{
		temp=root;
		root=root->next;
		delete temp;
	}
	length=0;

	cout<<"Your Whole Linked List Has Been Emptied! ";
}
	
bool SortedList::IsFull()const 
{
	NodeType *location;
	try
	{
		location=new NodeType;
		delete location;
		return false;
	}
	catch(std::bad_alloc exception)
	{
		
	return true;
	}
}

	
int  SortedList::GetLength()const
{


return length;
}

void SortedList::RetrieveItem(int &i, bool& found)
{

	bool moretosearch;
	NodeType *location;

	location=root;
	found=false;
	moretosearch=(location != NULL);

		while(moretosearch && !found)
		{ 
			if(location->listdata==i)
				{
				found=true;
				i = location->listdata;
				}
			else if(location->listdata>i)
			{
				location=location->next;
				moretosearch=(location != NULL);
			}

		}
InsertItem(i);
}

void SortedList::Show()
{
	NodeType *current = root;
	while(current) 
	{
		cout << current->listdata << " ";
		current = current->next;
	}
	cout << endl;
}


	SortedList::SortedList()
	{
		root=NULL;
		length=0;
	}

	SortedList::~SortedList()
	{
		MakeEmpty();
	}// The destructor should clear the list

	