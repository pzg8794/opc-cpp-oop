/*
Name : Piter Garcia
Subje: BCS-230
Lab Assignment  No.8
Date : March 20, 2011
Discription : This program will ask for the size of an array along with the 
index you wish to delete. Then, it will out put the original array along with
its size, the final array along with its size, the index element deleted.
array,
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void removeAt(ofstream&, int list[], int ARRAY_SIZE, int removeIndex);
void NameAndTitle(ofstream&);


int main ()
{

ofstream outData;

// Assigning the file name for the program to read the outputoutData.
outData.open("AssignmentNo9_output.txt");


int index, removeIndex, ARRAY_SIZE;
int list [12] = {4, 23, 65, 34, 82, 37,  12, 17, 24, 36, 82, 51};

//Inputing the size of the Array.
cout<<" Please enter the size of the list: \n ";
cin>>ARRAY_SIZE; 

//Displaying the original elements of the Array List.
cout<< "\n READING ELEMENTS OF THE LIST FROM AN INPUT DATA: "<<setw(52)<<setfill('.')<<"\n\n THE LIST ELEMENTS ARE:";

	for(index = 0; index < ARRAY_SIZE; index++)
	{   
	cout <<"  "<< list[index];    
	}  

cout<<"\n\n";

//Inputing the index to be deleted.
cout<<" Please enter the index you wish to delete: \n ";
cin>>removeIndex; 

// Checking for Out of Range Index.
while (removeIndex > 11)
{
cout<<" The Index You Have Inputs Out of Range \n";
cout<<" Please enter a Correct Index to Proceed \n ";
removeIndex--;
cin>>removeIndex;
}
cout<<"\n\n ";

//Displaying Name and Titlte.
NameAndTitle(outData); 

//Displaying the original elements of the Array List.
outData<< " ORIGIAL ELEMENTS OF THE LIST: "<<setw(40)<<setfill('.');
//Displaying the size of Array List.
outData<<" THE SIZE OF THE LIST IS "<<ARRAY_SIZE<<endl;
	for(index = 0; index < 12; index++)
	{   
	outData <<"  "<< list[index];    
	}  

outData<<"\n\n";

removeAt(outData, list, ARRAY_SIZE, removeIndex);

return  0;

}

//Function to remove the Index Value.
void removeAt(ofstream& outData, int list[], int ARRAY_SIZE, int removeIndex) 
{
int index;
//Displaying the elements of the List After deleting one Index Value.
outData << "  ELEMENTS OF THE LIST\n  AFTER DELETING THE LIST INDEX";
outData<< removeIndex<<setw(40)<<setfill('.');
//Displaying the size of Array List.
outData<<" THE SIZE OF THE LIST IS "<<ARRAY_SIZE-1<<endl;

	for(index = 0; index < ARRAY_SIZE; index++)
	{   
	if(list[index] != list[removeIndex])
	outData<< "  " << list[index] ;    
	}  

outData<<"\n\n";
outData <<"  "<<setw(70)<<setfill('.');

//Displaying the element deleted from the Array List.
outData<< "  THE ELEMENT REMOVED FROM THE LIST IS " << list[removeIndex]<< endl;  
}

void NameAndTitle( ofstream& outData)
{

	outData<<"\n\n";												// Title and Name.

	outData<< "  Lab Assignment # 09 " <<setw(54)<<right<< " By  Piter Garcia\n " ;
	outData<< " -------------------" <<setw(53)<<right<< "----------------" ;
	
	outData<<"\n\n";
	outData<<"\n\n";
	outData<<right<<setw(59)<< "  Deleting an Index Value from an Array  \n";
	outData<<setw(61)<<right<< " =======================================\n\n ";

}