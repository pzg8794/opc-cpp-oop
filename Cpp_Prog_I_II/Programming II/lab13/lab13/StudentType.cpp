#include "StudentType.h"

int main()
{
SMT SMT;
int size=0;

	ifstream inData;		   // Declaring variable for our input data.
	inData.open("Resistors.txt");
	SMT.GetData (inData, SMT, size );

	//Declearing an output file name.
	ofstream outData;
	//Assigning the file name for the program to read the outputoutData.
	outData.open("DataBase.txt");
	SMT.Display(outData, SMT, size );

return 0;
}