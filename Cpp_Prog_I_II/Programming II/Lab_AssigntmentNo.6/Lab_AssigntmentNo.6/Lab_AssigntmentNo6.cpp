/*
Name : Piter Garcia
Lab Assigntment No.: 6
Subje: BCS-230
Date : February 11, 2010
Discription : This program will first read from an input file the names and votes of
candidates. Second, it will save their information in two different types of arrays;
one is for the candidates names and the other for their amount of votes accumulated.
Third, it will work the votes percent of each candidate followed by the amount of votes. 
Finally it will neatly print two arrays and three more different colums with the amout, 
percent and total amount of the votes.
*/



#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void TitleandAuthor(ifstream&, ofstream&);

int sumVotes ( int[], int);
int winnerIndez ( int[], int);

int main()
{
	int  i=0, r, x, votes[50], Sum_of_Votes, winner;
	float total;
	string name[50];
	ifstream inData;						// Declaring variable for our input data.
						 //Assigning the file name for the program to read the input.
	inData.open("Lab_AssigntmentNo.6_Input.txt"); 	
												   // Declearing an output file name.

	ofstream outData;
				// Assigning the file name for the program to read the outputoutData.
	outData.open("AssignmentNo6_output.txt");

	TitleandAuthor(inData, outData);

	if (!inData)											//testing for input file.
	{
		outData<<" Cannot open theinput file.\n";
		outData<<" Program Terminated!!!\n";
		return 1;
	}
	while(!inData.eof())  // Using the while statement to read the file till the end.
	{
	inData>>name[i];					 // Saving the Candidates Names in the array.
	inData>>votes[i];					 // Saving the Candidates Votes in the array. 
	

	i++;	 // Recording position to assign it to each name and vote in their array.
	}

	i-=1;															   // Correcting.
	
	total=sumVotes(votes, i); 
	outData<<setprecision(2)<<fixed;

	for (r=0;r<=i;r++)					 //Printing names and votes arrays in colums.
	{
		Sum_of_Votes=sumVotes(votes, r);				    // Total amount of votes.
		
		outData<<"  ";
		outData<<setw(15)<<left<<name[r]<<setw(19)<<right<<votes[r]<<setw(24);
		outData<<right<<Sum_of_Votes<<setw(17)<<right<<(votes[r]/total)*100.0<<"%"<<endl;
			
		outData<<"  ";
        outData<<setw(15)<<left<<"___________________________________________";
		outData<<"_________________________________\n"<<endl;
	}

					   //Looking for the maximum amount of votes in the votes array.
	winner= winnerIndez ( votes, i);
						
		   //Checking for the possition where the maximum amount of votes is located. 
		for (r=i;r>=0;r--) 
		{
			 if (votes[r]== winner)
			 x=r;	//Saving possition in order to find the name in the names array. 
		}

														  //Final results statement.
	outData<<"  ";
	outData<<setw(15)<<left<<"Final Results: "<<endl;
	outData<<"  ";
	outData<<setw(15)<<left<<"-------------- "<<endl;
	outData<<"  ";
	outData<<setw(15)<<left<<"As a final result, the Candidate "<<name[x];
	outData<<setw(15)<<right<<" became the winner with a total amount\n  of ";
	outData<<(votes[x]/total)*100.0<<"% of the votes "<<endl;           outData<<"\n\n";

														   //Winner Candidate Table.
	outData<<"  ";
    outData<<setw(15)<<left<<"______________________________________________";
	outData<<"______________________________\n"<<endl;
	outData<<right<<setw(60)<<" Winner Candidate Data and Votes Table \n";
	outData<<"  ";
    outData<<setw(15)<<left<<"______________________________________________";
	outData<<"______________________________\n"<<endl;
	outData<<"  ";
	outData<<setw(15)<<left<<"Candidate Name "<<setw(37)<<right;
	outData<<" Total Votes Amount "<<setw(25)<<right<<" % of Total "<<endl;
	outData<<"  ";
	outData<<setw(15)<<left<<"-------------- "<<setw(37)<<right;
	outData<<" ------------------ "<<setw(25)<<right<<" ---------- "<<endl;
	outData<<"  ";
	outData<<setw(15)<<left<<name[x]<<setw(36)<<right<<votes[x]<<setw(24);
	outData<<right<< (votes[x]/total)*100.0 <<"%"<<endl;
}

int sumVotes ( int votes[], int i)    // Function to add votes from the votes array.
{
	int r, Total_votes=0;
	
	for (r=0;r<=i;r++)
	Total_votes +=votes[r];
	
	return Total_votes;
}

int winnerIndez ( int votes[], int i)   // Function to find winner from names array. 
{
	int r, winner;

	for (r=0;r<=i;r++)
	{
			 winner=votes[i];  

	   if (votes[i]>votes[r])
			  winner=votes[i];
	
	 else 
			votes[i]=votes[r];
	 }
	  
return winner;
}

void TitleandAuthor(ifstream& inData, ofstream& outData)
{
										  // Assignment Number and Author's Name.
	outData<<"\n\n";
	outData<< "  Lab Assignment # 06 " <<setw(58)<<right<< " By  Piter Garcia\n " ;
	outData<< " -------------------" <<setw(57)<<right<< "----------------" ;
	outData<<"\n\n\n";
	outData<<right<<setw(70);
	outData<< " Program Assignment using Parameter Functions with Arrays \n";
	outData<<setw(71)<<right;
	outData<< " ==========================================================\n\n";
	outData<<"\n\n\n\n";


										  // Candidates Names and Votes Table Data.
	outData<<"  ";
    outData<<setw(15)<<left<<"________________________________________________";
	outData<<"____________________________\n"<<endl;
	outData<<right<<setw(54)<< " Candidates and Votes Table \n";
	outData<<"  ";
    outData<<setw(15)<<left<<"________________________________________________";
	outData<<"____________________________\n"<<endl;
	outData<<"  ";
	outData<<setw(15)<<left<<"Candidates Names "<<setw(18)<<right<<" Votes Amount ";
	outData<<setw(24)<<right<<" Total Votes Amount "<<setw(18)<<right<<" % of Total ";
	outData<<"\n  ";
	outData<<setw(15)<<left<<"---------------- "<<setw(18)<<right<<" ------------ ";
	outData<<setw(24)<<right<<" ------------------ "<<setw(18)<<right<<" ---------- "<<endl;
	
}