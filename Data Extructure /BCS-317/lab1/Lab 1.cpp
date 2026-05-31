// Lab 1.cpp : Defines the entry point for the console application.
// Veerpal Kaur
//

#include "WallPost.h"


int _tmain(int argc, _TCHAR* argv[])
{

	WallPost wp;
	wp.set_name("Veera");

	cout << "WallPost name is: " << wp.get_name() << endl;

	return 0;
}

