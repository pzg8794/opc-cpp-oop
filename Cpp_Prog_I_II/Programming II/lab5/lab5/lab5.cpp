/*
Name : Piter Garcia
Lab Assigntment No.: 6
Subje: BCS-230
Date : February 11, 2010
Discription : This program will first read from an input file the names and grades of n
students. Then, it will dropp the student lowest grade and work the average of each one
along with the average of the whole class. Finally it will neatly record the data in a 
output file so it is avelaible to print.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

float sum( float x[], int size); // prototype

//====================================================== main
int main() {
    float a[1000], name[100];     // Declare an array of 1000 floats
    int i, n = 0;         // number of values in a.

	ifstream inData;							  // Declaring variable for our input data.
							   //Assigning the file name for the program to read the input.
	inData.open("Lab_AssigntmentNo.6_Input.txt"); 	
	// Declearing an output file name.

	

	ofstream outData;
	// Assigning the file name for the program to read the outputoutData.
	outData.open("AssignmentNo6_output.txt");

	while(!inData.eof())
	{
	int votes1;
	string name1;

	inData>>name[i];
	inData>>a[i];

	i++;
	}

    outData << "Average = " << sum(a, i) << endl;
    
    return 0;
}


//======================================================= sum
// sum adds the values of the array it is passed.
float sum( float x[],  int size) 
	{
    float total = 0.0;  // the sum is accumulated here
    for (int i=0; i<size; i++) {
        total = total + x[i];  
    }
    return total;
}
