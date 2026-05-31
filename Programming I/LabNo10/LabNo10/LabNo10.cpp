/*
Name : Piter Garcia
Subje: BCS-120
Date : Oct 29, 2010
Discription : This program will first read from an input file the grades and ID number of students.
Then, it will print out number of number of exams, grade, and average obtained by each student.
Finally, it will print the total number of student graded in the process along with a total average of their grades.
*/
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main()
{
	int SID, Total, Exam, i, SN=0, TNo=0, j;
	double TAverage=0, Average;
	//Student ID, Total of Exam, i=*, Number of Students, Total Number of Exams, 
	// Total Average of the Class.	
	//*i is used to calculate the number of exams and students.

	ifstream inData;						// Declaring variable for our input data.
	inData.open("LabNo10_input.txt");		// Assigning the file name for the program to read the input.	
	
if (!inData)								// Checking if is reading the input file.
{
	cout<<" Cannot open theinput file.\n";
	cout<<" Program Terminated!!!\n";
	return 1;
} 

	cout<< setprecision(2)<< fixed;				// Author and Type of Lab.
	cout<<"\n\n";
	cout<< "  Lab Assignment # 10 " <<setw(58)<<right<< " By  Piter Garcia\n " ;
	cout<< " -------------------" <<setw(57)<<right<< "----------------" ;
	cout<<"\n\n\n";
	cout<<right<<setw(63)<< " While Statement Program using Nested Loops \n" <<setw(66)<<right<< " =================================================\n\n";
	cout<<"\n\n\n\n";
											// Data Title.
	cout<<right<<setw(58)<< " Student Grades and Average Table \n" <<setw(60)<<right<< " --------------------------------------\n";
											// Variables Table
		cout<<setw(70)<<right<<" __________________________________________________________ \n\n";
		cout<<setw(23)<<" Exams "<<setw(18)<<" Grades "<< setw(26)<<" Number of Students "<<"\n";
		cout<<setw(70)<<right<<" __________________________________________________________ \n\n";
		
	inData>>SID;
	while(SID!=-999)						// Assigning a number to stop the loop.
{
		  TNo=0;
		  SN+=1;
		  Total=0;
		  cout<<setw(58)<<SN<<" Student "<<endl; //Displaying the amount of students.
	 	  for (j=4; j>=1;j--)
      {
		  inData>>Exam;
		  
		  i= Exam/Exam;
		  TNo+=i;
		  
		  cout<<setw(21)<<" Exam No. "<< TNo <<" "<< setw(17)<< Exam <<"\n"; //Displaying the number of exams.
		  Total+= Exam;
	  }	 
		  		 
	  	 Average= Total/4.;						// Calculating Average for each Student.

												// Setting Total Data Table
		 cout<<setw(70)<<right<<" __________________________________________________________ \n\n";
		 cout<<setw(23)<<" Student ID No "<< setw(18)<<" Total Grade "<< setw(27)<<" Average "<<"\n"; 
		 cout<<setw(16)<<"R00"<< SID <<" "<< setw(17)<< Total <<" "<< setw(25)<< Average <<"\n"; 
		 cout<<setw(71)<<right<<" __________________________________________________________ \n\n\n";
		 inData>>SID;  
		 TAverage+=Average;
}
												// Displaying Total Average and Amount of Students.
	 cout<<setw(24)<<" Total Students "<< setw(45)<<" Total Average "<<"\n\n"; 
	 cout<<setw(23)<<SN<< setw(44)<<TAverage/SN<<"\n";
	 cout<<"\n\n";

return 0;
}