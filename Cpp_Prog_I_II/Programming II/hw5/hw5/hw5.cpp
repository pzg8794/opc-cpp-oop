/*
Name : Piter Garcia
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

void AuthorName(ifstream&, ofstream&);					  //Author name and Title function.

char calc_grade(float);												  //Assigned Functions.
void calcAvg(ifstream&, ofstream&, float&);

float plus(float);

int main()
{	
	float Average;
	ifstream inData;							  // Declaring variable for our input data.
							   //Assigning the file name for the program to read the input.
	inData.open("Assigment5_input.txt"); 	
	// Declearing an output file name.
	ofstream outData;
	// Assigning the file name for the program to read the outputoutData.
	outData.open("AssignmentNo5_output.txt");

	AuthorName(inData, outData);

	calcAvg(inData, outData, Average);

return 0;
}

void calcAvg(ifstream& inData, ofstream& outData, float& Average)
{
	int n,i=0;							 //declearing grade's variables for students grades.
	float  grade, grade1,grade2,grade3,grade4,grade5;
						     // Declearing Lowest Grade variable for total student averages.
	float LowestGrade, TotalGrade, TAverage=0, x;		
	char test, Lowest, Avg, TAvg;						     //declearing grade's variables.
	
	string student_name;
	cout<< setprecision(2)<< fixed;	
	
	outData<<right<<setw(58)<< " Student Grades and Average Table \n";
	outData<<setw(60)<<right<< " --------------------------------------\n";
											
																		 // Variables Table.
	outData<<setw(70)<<right<<" __________________________________________________________";
	outData<<" \n\n";
	outData<<setw(23)<<" Exams "<<setw(18)<<" Grades "<< setw(30)<<" Number of Students ";
	outData<<"\n";
	outData<<setw(70)<<right<<" __________________________________________________________";
	outData<<" \n\n";
	
		
	while(!inData.eof())						     // Assigning a number to stop the loop.
	{
		i++;
		inData>>student_name;						    
		
		for (n=1; n<=5; n++)
		{		
		 inData>>grade;
		 if (n==1) {grade1= grade; test=calc_grade(grade1);}
		 else if (n==2) {grade2= grade;}
		 else if (n==3) {grade3= grade;}
		 else if (n==4) {grade4= grade;}
		 else if (n==5) {grade5= grade;}

		 test=calc_grade(grade);

		 x= plus(grade);
		 if( x>=0.5 && grade>=60)
		 {
													       //Displaying the number of exams.
		 outData<<setw(21)<<" Exam No. "<< n <<" "<< setw(16)<< test<<'+';
		 }
		 else 
		 {
			 										       //Displaying the number of exams.
		 outData<<setw(21)<<" Exam No. "<< n <<" "<< setw(16)<< test;
		}

		 //Displaying the amount of students.
		 if (n==1) {outData<<setw(28)<<right<<" Student No."<<setw(2)<<right<<i<<endl;}
		 else { outData<<"\n";}
		}
	  	 			
													   

		LowestGrade= grade1;							    // Setting a low grade variable.
		
									   //Testing to see if any of the other grades is lower.
		if (LowestGrade>grade2)	LowestGrade=grade2;
		if (LowestGrade>grade3)	LowestGrade=grade3;
		if (LowestGrade>grade4)	LowestGrade=grade4;
		if (LowestGrade>grade5)	LowestGrade=grade5;

													  //Total Grade formula for five grades.
		TotalGrade= grade1+grade2+grade3+grade4+grade5; 
		TotalGrade-=LowestGrade;					  //Total Grade formula for four grades.
		Average= TotalGrade/4;							  //Average formula for four grades.

							     //Calling function to assign a vowl to the numerical grade.				
		Avg=calc_grade(Average);
							     //Calling function to assign a vowl to the numerical grade.
		Lowest=calc_grade(LowestGrade);

															    // Setting Total Data Table.
	outData<<setw(70)<<right<<" __________________________________________________________";
	outData<<" \n";
	outData<<setw(26)<<" Student Name: "<< setw(23)<<" Dropped Grade ";
	outData<< setw(22)<<" Average "<<"\n"; 

	x= plus(Lowest);

	if( x>=0.5&& Lowest>=60)
	{outData<<setw(24)<< student_name <<" "<< setw(22)<< Lowest <<"+"<<" "; }
	else 
	{outData<<setw(24)<< student_name <<" "<< setw(23)<< Lowest <<" ";}

	x= plus(Average);

	if( x>=0.5 && Average>=60)
	{outData<< setw(20)<< Avg << '+' <<"\n"; }
	else 
	{outData<< setw(21)<< Avg <<"\n";}

	outData<<setw(70)<<right<<" __________________________________________________________";
	outData<<" \n\n";
	TAverage+=Average;
	}
		
	TAverage/=i;
	TAvg=calc_grade(TAverage);						
		
								      // Displaying Total Average and Students in the class.
	outData<<setw(27)<<" Total Students "<< setw(43)<<" Total Average of the Class"<<"\n"; 

	x= plus(TAverage);
	if( x>=0.5 && TAverage>=60)
	{ 
	outData<<setw(26)<<i<< setw(43)<<TAvg<<'+'<<"\n";
	outData<<"\n\n";
	}

	else 
	{ 
	outData<<setw(26)<<i<< setw(44)<<TAvg<<"\n";
	outData<<"\n\n";
	}

	outData<<"\n\n";
}

char calc_grade(float grade)			  // Function to assign a bowl to a numerical value.
{
	char test;

		 if( grade <100 && grade > 89)
		{test='A';}
	else if( grade < 90 && grade > 79)
		{test='B';}
	else if( grade < 80 && grade > 69)
		{test='C';}
	else if( grade < 70 && grade > 59)
		{test='D';}
	else if( grade < 60)
		{test='F';}


	return test;
}
float plus( float grade)
{
	float x;
	grade/=10;
	int plus;

	plus= grade;
	x= grade - plus;
	
return x;
}
																   //Author name and Title. 
void AuthorName(ifstream& inData, ofstream& outData)
{
	outData<<"\n\n";
	outData<< "  Lab Assignment # 05 " <<setw(58)<<right<< " By  Piter Garcia\n " ;
	outData<< " -------------------" <<setw(57)<<right<< "----------------" ;
	outData<<"\n\n\n";
	outData<<right<<setw(65)<< " Program Assignment using Input and Output Files \n";
	outData<<setw(66)<<right<< " =================================================\n\n";
	outData<<"\n\n\n\n";

}