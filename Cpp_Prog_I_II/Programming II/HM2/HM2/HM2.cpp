/*
Name : Piter Garcia
Subje: BCS-230
Date : Jan 22, 2010
Discription : This program will calculate the Lowest Grade.
It will also dropp it and print it along with the student Grades Average:
*/

#include <iostream>
#include <iomanip>

using namespace std;

void getValues(int, int, int, int, int); //Declearing Functiong to get grades
int findLowest(int, int, int, int, int); // Declearing Function to calculate the loews grade
void calcAvg(int, int, int, int, int);   // Declearing Function to calculate the average

int main()
{	
	int  grade1,grade2,grade3,grade4,grade5;				//declearing grade's variables.

	cout<<"\n\n";											// Title and Name.
	cout<<right<<setw(52)<< " HomeWork  Assignment # 2 \n" <<setw(48)<<right<< " By  Piter Garcia\n\n " ;
	cout<<"\n\n";
	cout<<right<<setw(62)<< " Promgra to Calculate Lowest and Average Grade \n" <<setw(64)<<right<< " ================================================\n\n ";
	
	cout<<"\n\n  Please enter five grades  to calculate its Lowest Grade and its Average \n\n ";
	
	getValues(grade1,grade2,grade3,grade4,grade5);



return 0;
}

  void getValues(int grade1, int grade2, int grade3, int grade4, int grade5) //Function to get grades.
{  
	int LowestTest;											// declearing Lowest grade variable.
	int i=1, grade;
 
	cout<<"\n  Please enter five Test Grades  below \n  ";
	cin>>grade1>>grade2>>grade3>>grade4>>grade5;
 	
	grade=grade1;
	grade=grade2;
	grade=grade3;
	grade=grade4;
	grade=grade5;

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
 

	 LowestTest=findLowest(grade1, grade2, grade3, grade4, grade5);//Calling Lowest Grade Function.
	//Displaying the Lowest grade.
	 cout<<"\n\n  The Lowest Grade is "<<LowestTest<<"\n  Therefore, this grade will be dropped \n\n ";
	 cout<<"\n\n\n";
									
	 //Displaying table of grades.
	 cout<<right<<"  ------------------------------------------------------------------------\n";
	 cout<<right<<setw(54)<< " TABLE OF GRADES AND AVERAGE \n";
	 cout<<right<<"  ------------------------------------------------------------------------\n";	
	 cout<<"\n  Grade # 1 \t  Grade # 2 \t Grade # 3 \t Grade # 4 \t Grade # 5 \n";
	 cout<<setw(11)<<grade1<<setw(16)<<grade2<<setw(15)<<grade3<<setw(16)<<grade4<<setw(16)<<grade5<<endl;
	 cout<<right<<"  ------------------------------------------------------------------------\n";
						
	 calcAvg(grade1, grade2, grade3, grade4, grade5);//Calling Average Function.
	


   
}
														  //Function to get the Lowest Grade.
  int findLowest(int grade1, int grade2, int grade3, int grade4, int grade5) 
{
  int LowestGrade;	// Declearing Lowest Grade variable.

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
  void calcAvg(int grade1, int grade2, int grade3, int grade4, int grade5)

{								//Declearing Lowest Grade variable again for average function.
	double Average;
	int TotalGrade, LowestGrade; //Declearing the the total grade and total average grade;

	cout<<setprecision(2)<<fixed<<endl;
	
	TotalGrade= grade1+grade2+grade3+grade4+grade5; //Total Grade formula for five grades.
	LowestGrade= findLowest(grade1, grade2, grade3, grade4, grade5);// Calling Lowest Grade Function again.
	TotalGrade-=LowestGrade; //Total Grade formula for four grades.
	Average= TotalGrade/4.;  //Average formula for four grades.
	
	cout<<"\n  Dropped Grade "<<setw(60)<<" Average of Grades \n";
	cout<<setw(15)<<LowestGrade<<setw(59)<<Average<<"\n\n";
	cout<<right<<"  ------------------------------------------------------------------------\n";
	cout<<"\n\n  ";
}