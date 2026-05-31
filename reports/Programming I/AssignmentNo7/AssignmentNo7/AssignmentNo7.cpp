/*
Name : Piter Garcia
Subje: BCS-120
Date : Nov 22, 2010
Discription : This program will calculate the Lowest Grade.
It will also dropp it and print it along with the student Grades Average:
*/

#include <iostream>
#include <iomanip>

using namespace std;

double getscore(double); //Declearing Functiong to get grades
double findLowest(double, double, double, double, double); // Declearing Function to calculate the loews grade
void calcAverage(double, double, double, double, double); // Declearing Function to calculate the average

int main()
{	
	cout<<"\n\n";											// Title and Name.
	cout<<right<<setw(52)<< " Programming Assignment # 7 \n" <<setw(48)<<right<< " By  Piter Garcia\n\n " ;
	cout<<"\n\n";
	cout<<right<<setw(62)<< " Promgra to Calculate Lowest and Average Grade \n" <<setw(64)<<right<< " ================================================\n\n ";
	
	double LowestTest;										// declearing Lowest grade variable.
	double  grade1,grade2,grade3,grade4,grade5;				//declearing grade's variables.
	
	cout<<"\n\n  Please enter five grades  to calculate its Lowest Grade and its Average \n\n ";
	
	 grade1=getscore(grade1);
	 grade2=getscore(grade2);
	 grade3=getscore(grade3);
	 grade4=getscore(grade4);
	 grade5=getscore(grade5);
	
	 cout<<"\n\n  The Lowest Grade is "<<LowestTest<<"\n  Therefore, this grade will be dropped \n\n ";
	 cout<<"\n\n\n";
									
	 //Displaying table of grades.
	 cout<<right<<"  ------------------------------------------------------------------------\n";
	 cout<<right<<setw(47)<< " Table of Grades \n";
	 cout<<right<<"  ------------------------------------------------------------------------\n";	
	 cout<<"\n  Grade # 1 \t  Grade # 2 \t Grade # 3 \t Grade # 4 \t Grade # 5 \n";
	 cout<<setw(11)<<grade1<<setw(16)<<grade2<<setw(15)<<grade3<<setw(16)<<grade4<<setw(16)<<grade5<<endl;
						
	 calcAverage(grade1, grade2, grade3, grade4, grade5);//Calling Average Function.

return 0;
}

  double getscore(double grade)//Function to get grades.
{  
	int i=1;
 
	cout<<"\n  Please enter a Test Grade  below \n  ";
	cin>> grade; 
	if(grade<0 || grade>100)//Checking if the grade is an invalid grade
	{
		while(i!=0)//Loop to reinput your grade until the grade is a valid grade.
		{
		cout<<"\n  You have entered an invalid value "<<grade<<" is not a right value \n";
		cout<<"\n  Please enter a right grade \n  ";
		cin>> grade;

		if (grade>=0 && grade<=100)
		i=0;
		}
	}
  return(grade);
}
														  //Function to get the Lowest Grade.
  double findLowest(double grade1, double grade2, double grade3, double grade4, double grade5) 
{
  double LowestGrade;	// Declearing Lowest Grade variable.

  LowestGrade= grade1;  // Setting a low grade variable.
						//Testing to see if any of the other grades is lower.
	if (LowestGrade>grade2)	
		LowestGrade=grade2;
	if (LowestGrade>grade3)
		LowestGrade=grade3;
	if (LowestGrade>grade4)
		LowestGrade=grade4;
	if (LowestGrade>grade5)
		LowestGrade=grade5;

  return(LowestGrade);
}

														//Function to Calcualte the Average.
  void calcAverage(double grade1, double grade2, double grade3, double grade4, double grade5)

{								//Declearing Lowest Grade variable again for average function.
	double Average, TotalGrade, LowestGrade; //Declearing the the total grade and total average grade;
	
	TotalGrade= grade1+grade2+grade3+grade4+grade5; //Total Grade formula for five grades.
	LowestGrade= findLowest(grade1, grade2, grade3, grade4, grade5);// Calling Lowest Grade Function again.
	TotalGrade-=LowestGrade; //Total Grade formula for four grades.
	Average= TotalGrade/4.;  //Average formula for four grades.
	
	cout<<"\n  Dropped Grade "<<setw(60)<<" Average of Grades \n";
	cout<<setw(15)<<LowestGrade<<setw(59)<<Average<<"\n\n";
	cout<<"\n\n  ";
}