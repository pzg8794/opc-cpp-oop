//#include "stdafx.h"
#include "Lab11.h"

using namespace std;

int main()
{
	bool found;
	int retrieveditem=20;
	SortedList p;

	cout<<"Adding an Element \n";
	p.InsertItem( 10);  // Add an item in sorted order
	p.InsertItem( 20);  // Add an item in sorted order
	p.InsertItem( 30);  // Add an item in sorted order
	p.InsertItem( 40);  // Add an item in sorted order
	p.Show();
	cout<<"The Length of Your Linked List is "<<p.GetLength()<<endl;
	if(p.IsFull()==false)
		cout<<"Your Linked List is not Full \n";
	else
		cout<<"Your Linked List is Full \n";



	cout<<"\n\n\n";


	
	p.DeleteItem(30);
	p.Show();
	cout<<"The Length of Your Linked List is "<<p.GetLength()<<endl;
	if(p.IsFull()==false)
		cout<<"Your Linked List is not Full \n";
	else
		cout<<"Your Linked List is Full \n";



	cout<<"\n\n\n";



	p.MakeEmpty();
	p.Show();
	cout<<"The Length of Your Linked List is "<<p.GetLength()<<endl;
	if(p.IsFull()==false)
		cout<<"Your Linked List is not Full \n";
	else
		cout<<"Your Linked List is Full \n";



	cout<<"\n\n\n";


	
	p.RetrieveItem(retrieveditem,found);
	if(found==false)
		{cout<<"The Number "<<retrieveditem<<" has been Found \n";
		cout<<"And It is back in Your Linked List \n";}
	else
		cout<<"The Number "<<retrieveditem<<" was not Found \n";
	
	p.Show();

	system("pause");
	return 0;
}
