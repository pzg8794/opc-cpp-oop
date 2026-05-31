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

void getValues(int [], int); //Declearing Functiong to get grades

int main()
{	
	int i;				//declearing grade's variables.
	
	cout<<"\n\n";											// Title and Name.
	cout<<right<<setw(52)<< " HomeWork  Assignment # 7 \n" <<setw(48)<<right<< " By  Piter Garcia\n\n " ;
	cout<<"\n\n";
	cout<<right<<setw(62)<< " Promgra to Calculate Lowest and Average Grade \n" <<setw(64)<<right<< " ================================================\n\n ";
	
	cout<<"\n  Please enter the amount of tests you will be working with \n  ";
	cin>>i;

 	int grade[50];
	cout<<"\n  Please type your "<< i <<" test grades now: \n  ";
	
	getValues(grade, i);

return 0;
}

  void getValues(int grade[], int i) //Function to get grades.
{  
	int r,TotalGrade=0,LowestGrade;			//declearing grade's variables.
	double Average;
							//Declearing the the total grade and total average grade;		
	 
	
	int x=1;
	i=i-1;

	for (r=0; r<=i; r++)
	{
	
	cin>> grade[r];	



		if(grade[r]<0 || grade[r]>100)//Checking if the grade is an invalid grade
		{
			while(x!=0)//Loop to reinput your grade until the grade is a valid grade.
			{
			cout<<"\n  You have entered an invalid grade, "<<grade[r]<<" is not a right value \n";
			cout<<"\n  Please enter a right grade \n  ";
			cin>> grade[r];

			if (grade[r]<=100 && grade[r]>=0)
			x=0;
			}
		}

	 TotalGrade+=grade[r];

	}

		 //Displaying table of grades.
	 cout<<right<<"  ------------------------------------------------------------------------\n";
	 cout<<right<<setw(54)<< " TABLE OF GRADES AND AVERAGE \n";
	 cout<<right<<"  ------------------------------------------------------------------------\n";	
	 cout<<"\n";

	 for (r=0; r<=i;r++)
	{		
		cout<<right<<setw(9)<<"Grade #"<<r+1<<"  ";
	}

	 cout<<"\n";

	for (r=0; r<=i;r++)
	{
		
		cout<<right<<setw(10)<<grade[r]<<"  "; 
	}


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
	cout<<"\n\n\n";

	//Displaying the Lowest grade.
	cout<<"  The Lowest Grade is "<<LowestGrade<<"\n  Therefore, this grade will be dropped \n\n ";
	
								
								   //Declearing Lowest Grade variable again for average function.	

	cout<<right<<"  ------------------------------------------------------------------------\n";
	

	TotalGrade=TotalGrade-LowestGrade;	//Total Grade formula for four grades.
	Average= TotalGrade/i;		//Average formula for four grades. 
	cout<<i<<endl;
	
	cout<<setprecision(2)<<fixed<<endl;
	cout<<"\n  Dropped Grade "<<setw(60)<<" Average of Grades \n";
	cout<<setw(15)<<LowestGrade<<setw(59)<<Average<<"\n\n";
	cout<<right<<"  ------------------------------------------------------------------------\n";
	cout<<"\n\n  ";

}