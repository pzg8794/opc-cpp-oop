//Assignment No.3(3): main project file.
//EET 110, 8:30am-10:45
//Prof. Issapour
//Garcia, Piter


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    //Title
		cout<<"\n Assingment#3";
		cout<<"\n The Volume of a Room";
	//Author
		cout<<"\n Made by Piter Garcia";
 
    double V, H, L, W;

	//H= 8;
		cout<<"\n please enter the value for High (H) in ft";
		cin>>H;

	//L=12;
		cout<<"\n please enter the value for Length(L) in ft";
		cin>>L;

	//W=11;
		cout<<"\n please enter the value for  width(W) in ft";
		cin>>W;

	V= H*L*W;
		cout<<"the value for Volume(V) is " <<V<<" cubic ft\n";
	return 0;
}