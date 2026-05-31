#include "StudentType.h"

void SMT::GetData(ifstream& inData, SMT  SMT, int size )
{
	int Group=0;
	int ItemNo[]={0}, ItemValue[]={0}, i=0,x=0,l;
	
	string ItemName[]={0};
	while(!inData.eof())
	{
	inData>>SMT.GroupNumber[i];	
	inData>>SMT.Description[i];	
	inData>>SMT.ItemValue[i];	
	inData>>SMT.ItemQty[i];		
	inData>>SMT.ItemPgQty[i];	
	inData>>SMT.ItemNumber[i];	

	x++;
	i++;
	size=i;
	}

	cout<<"   Please Pick one of the Following Options: ";
	cout<<"\n a) ItemNumber	b) ItemName	    c) ItemValue";
	cin>>SMT.option;

switch (SMT.option)
{
case 1:
		cout<<" Please Enter the Item Number";
		cin>>ItemNo[size];
		
		for (l=0;l<=size;l++)
		{

		if (ItemNo[size]==SMT.ItemNumber[l])
		{size=l;}
		}

		break;

case 2:
		cout<<" Please Enter the Item Name";
		cin>>ItemName[size];
		
		for (l=0;l<=size;l++)
		{

		if (ItemName[size]==SMT.Description[l])
		{size=l;}
		}

		break;
case 3:
		cout<<" Please Enter the Item Value";
		cin>>ItemValue[size];
		
		for (l=0;l<=size;l++)
		{

		if (ItemValue[size]==SMT.ItemValue[l])
		{size=l;}
		}

		break;

default:
	cout<<" This is an Incorrect Option Please try again";
}

}
