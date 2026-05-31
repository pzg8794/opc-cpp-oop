

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

//PROTOTYPES

		
char calc_score(float);												
void calcAvg(ifstream&, ofstream&, float&);

float plus(float);

int main()
{	
	float Avg;
	ifstream inFile;							 
						
	inFile.open("Input5.txt"); 	
	
	ofstream outFile;
	
	outFile.open("Output5.txt");

	calcAvg(inFile, outFile, Avg);

return 0;
}

void calcAvg(ifstream& inFile, ofstream& outFile, float& Avg)
{
	int m,h=0;							
	float  score, score1,score2,score3,score4,score5;
						
	float Lowestscore, Totalscore, Total_Average=0;		
	char grade, lowest, Average, Total_Avg;						  
	
	string student_name;
	outFile<< setprecision(2)<< fixed;	
	
	outFile<<right<<setw(58)<< "  Grades and Average Table \n ";
	
											
																		
	
	outFile<<" \n\n";
	outFile<<setw(23)<<" Exams "<<setw(18)<<" Grades ";
	outFile<<"\n";
	
	outFile<<" \n\n";
	
		
	while(!inFile.eof())						    
	{
		h++;
								    
		
		for (m=1; m<=5; m++)
		{		
		 inFile>>score;
		 if (m==1) {score1= score; grade=calc_score(score1);}
		 else if (m==2) {score2= score;}
		 else if (m==3) {score3= score;}
		 else if (m==4) {score4= score;}
		 else if (m==5) {score5= score;}

		 grade=calc_score(score);
			 										   
		 outFile<<setw(21)<<" test grade "<< setw(16)<< grade;
		
		}
	  	 			
													   

		Lowestscore= score1;							  
		
									 
		if (Lowestscore>score3)	Lowestscore=score3;
		if (Lowestscore>score4)	Lowestscore=score4;
		if (Lowestscore>score5)	Lowestscore=score5;

													 
		Totalscore= score1+score2+score3+score4+score5; 
		Totalscore-=Lowestscore;					
		Avg= Totalscore/4;						

							    				
		Average=calc_score(Average);
							    
		lowest=calc_score(Lowestscore);

															
	
	outFile<<setw(26)<<" Student Name: "<< setw(23)<<" Dropped Grade ";
	outFile<< setw(22)<<" Average = "<<"\n"; 

	outFile<<setw(24)<< student_name <<" "<< setw(23)<< lowest <<" ";

	
	outFile<< setw(21)<< Avg <<"\n";
	}

	outFile<<" \n\n";
	Total_Average+=Avg;
	
		
	Total_Average/=h;
	Total_Avg=calc_score(Total_Average);						
		
								    
	outFile<<setw(27)<<" Total Students "<< setw(43)<<" Total Average of the Class"<<"\n"; 

	
 
	outFile<<setw(26)<<h<< setw(44)<<Total_Avg<<"\n";
	outFile<<"\n\n";
	

	outFile<<"\n\n";
}

char calc_score(float score)			  
{
	char grade;

		 if( score <100 && score > 89)
		{grade='A';}
	else if( score < 90 && score > 79)
		{grade='B';}
	else if( score < 80 && score > 69)
		{grade='C';}
	else if( score < 70 && score > 59)
		{grade='D';}
	else if( score < 60)
		{grade='F';}


	return grade;
}

