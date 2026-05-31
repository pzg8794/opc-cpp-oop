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

void getValues();
int findLowest(int [], int); // Declearing Function to calculate the loews grade
void calcAvg(int [], int);   // Declearing Function to calculate the average

int main()
{	


	cout<<"\n\n";											// Title and Name.
	cout<<right<<setw(52)<< " HomeWork  Assignment # 7A \n" <<setw(48)<<right<< " By  Piter Garcia\n\n " ;
	cout<<"\n\n";
	cout<<right<<setw(62)<< " Promgra to Calculate Lowest and Average Grade \n" <<setw(64)<<right<< " ================================================\n\n ";
	
	getValues();



return 0;
}

  void getValues() //Function to get grades.
{  
	int i, r, grade[50];			//declearing grade's variables.
									
	int x=1;
	

	cout<<"\n  Please enter the amount of tests you will be working with \n  ";
	cin>>i;

	cout<<"\n  Please type your "<< i <<" test grades now: \n  ";
	i=i-1;

	for (r=0; r<=i; r++)
	{
	
	cin>> grade[r];	

			if(grade[r]<0 || grade[r]>100)//Checking if the grade is an invalid grade
		{
			do//Loop to reinput your grade until the grade is a valid grade.
			{
			cout<<"\n  You have entered an invalid grade, "<<grade[r]<<" is not a right value \n";
			cout<<"\n  Please enter a right grade \n  ";
			cin>> grade[r];

			if (grade[r]<0 || grade[r]>100)
			x=1;
			else 
			x=0;
			}
			while (x!=0);

		}
	}
	  cout<<"\n\n\n";
									
	//Displaying table of grades.
	 cout<<right<<"  ------------------------------------------------------------------------\n";
	 cout<<right<<setw(54)<< " TABLE OF GRADES AND AVERAGE \n";
	 cout<<right<<"  ------------------------------------------------------------------------\n";	
	 cout<<"\n";

	 for (r=0; r<=i;r++)
		{		
		cout<<right<<setw(9)<<"Grade #"<<r+1<<setw(5)<<right;
		}

		cout<<"\n";

	for (r=0; r<=i;r++)
		{		
		cout<<right<<setw(10)<<grade[r]<<setw(5)<<right; 
		}

		cout<<"\n";

	 cout<<right<<"  ------------------------------------------------------------------------\n";
						
	 calcAvg(grade, i);//Calling Average Function. 
}

														  //Function to get the Lowest Grade.
  int findLowest(int grade[], int i) 
{
  int LowestGrade, r;	// Declearing Lowest Grade variable.

	for (r=0; r<=i;r++)
	{

		LowestGrade= grade[i];			// Setting a low grade variable.
										//Testing to see if any of the other grades is lower.
		if (LowestGrade>grade[r])	
		{
		LowestGrade=grade[r];
		grade[i]=grade[r];
		}
			
	}

	 //Displaying the Lowest grade.
	 cout<<"\n\n  The Lowest Grade is "<<LowestGrade<<"\n  Therefore, this grade will be dropped \n\n ";
	 cout<<right<<"  ------------------------------------------------------------------------\n";
	 cout<<"\n";

  return(LowestGrade);
}

														//Function to Calcualte the Average.
  void calcAvg(int grade[], int i)

{								//Declearing Lowest Grade variable again for average function.
	double Average;
	int TotalGrade=0, LowestGrade, r; //Declearing the the total grade and total average grade;

	cout<<setprecision(2)<<fixed<<endl;
	
	for (r=0; r<=i;r++)
	{
		TotalGrade+=grade[r]; //Total Grade formula for five grades.
	}

	LowestGrade= findLowest(grade, i);// Calling Lowest Grade Function again.
	TotalGrade-=LowestGrade; //Total Grade formula for four grades.
	Average= TotalGrade/(i-1);  //Average formula for four grades.
	
	cout<<"\n  Dropped Grade "<<setw(60)<<" Average of Grades \n";
	cout<<setw(15)<<LowestGrade<<setw(59)<<Average<<"\n\n";
	cout<<right<<"  ------------------------------------------------------------------------\n";
	cout<<"\n\n  ";
}