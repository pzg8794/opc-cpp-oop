//#include "stdafx.h"
#include <iostream>

using namespace std;


class SortedList
{

private:

	int length;				 // # of elements in list
struct NodeType
{

 int listdata;
 NodeType *next;			 // Points to first data item
}*root;
// Other class implementation code


public:
	SortedList();
	~SortedList();			 // The destructor should clear the list

	void InsertItem(int i);  // Add an item in sorted order
	void Show();			 // Prints all items in the list on the screen

	void DeleteItem(int i);
	void MakeEmpty();
	bool IsFull() const;
	int  GetLength() const;
	void RetrieveItem(int &i, bool& found);

};


