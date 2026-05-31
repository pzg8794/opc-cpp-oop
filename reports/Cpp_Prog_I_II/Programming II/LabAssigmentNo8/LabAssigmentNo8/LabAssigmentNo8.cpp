/*
Name : Piter Garcia
Subje: BCS-230
Date : March 09, 2011
Discription : This program will read an input file and calculate the Lowest and 
Highest temperature in that input file along with the average of both Low and
Hig temperatures.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;
//void getData(int[][2], int&, int&, ifstream&, ofstream&);
//int IndexHighTemp();
//int IndexLowTemp();
//float AverageHigh();
//float AverageLow();

int main()
{	
	ifstream inData;						 // Declaring variable for our input data.
						  //Assigning the file name for the program to read the input.
	inData.open("AssignmentNo8_inputfile.txt"); 	
												    // Declearing an output file name.

	ofstream outData;
				 // Assigning the file name for the program to read the outputoutData.
	outData.open("AssignmentNo8_output.txt");

	if (!inData)											 //testing for input file.
	{
		cout<<" Cannot open theinput file.\n";
		cout<<" Program Terminated!!!\n";
		return 1;
	}

	outData<<"\n\n";												// Title and Name.

	outData<< "  Lab Assignment # 08 " <<setw(54)<<right<< " By  Piter Garcia\n " ;
	outData<< " -------------------" <<setw(53)<<right<< "----------------" ;
	
	outData<<"\n\n";
	outData<<"\n\n";
	outData<<right<<setw(59)<< " Promgra Using Second Dimension Arrays \n";
	outData<<setw(61)<<right<< " =======================================\n\n ";
													   //declearing grade's variables.
	int Temperatures[12][2], High, Low, i=0, x=0;
	float Average1=0, Average2=0;
	string Month[12][2];	    

												  //For Loops to Read from the Input File.
	 for (i=0; i<=2;i++)								 // For Loop to ready by rows.
	{   
		for (x=0; x<12;x++)							  // For loop to ready by collums.
		{ if(i==0)
		   inData>>Month[x][i];
		  else
		   inData>>Temperatures[x][i];
		}
	} 

	 outData<<fixed<<setprecision(2)<<endl;	    //Fixing answer to two point decimals.
	
  														 //Displaying table of grades.
	 outData<<right<<"  -----------------------------------------";
	 outData<<"-------------------------------\n";
	 outData<<right<<setw(57)<< " MONTHS AND TEMPERATURES DATA TABLE \n";
	 outData<<right<<"  ------------------------------------------";
	 outData<<"------------------------------\n";	
	 outData<<"\n"; 
											//For Loops to output from the Input File.
	  for (i=0; i<=2;i++)								 // For Loop to ready by rows.
	  {   
		if(i==0)
		outData<<"\n"<<setw(12)<<"Month: ";
	    else if(i==1)
		outData<<"\n"<<setw(13)<<right<<"High:  ";
		else if (i==2)
		outData<<"\n"<<setw(13)<<right<<"Low:  ";

		for (x=0; x<12;x++)							  // For Loop to ready by collums.
		{  
			if(i==0)
			outData<<Month[x][i]<<"  ";
			else 
			outData<<setw(2)<<right<<Temperatures[x][i]<<"   ";
		}
	  }
	 outData<<"\n";

 


		 //Setting a value for High to find the Highest temp. in the temperatures row.
	High= Temperatures[0][1];
	for (i=1; i<2;i++)
	{   
		for (x=0; x<12;x++)				  // For Loop to find the Highest Temperature.
		{
		if (High<Temperatures[x][i])	
		High=Temperatures[x][i];
		}
	 } 	 
							 // For Loop to find the average of the High Temperatures.
	for (i=1; i<2;i++)
	{   
		for (x=0; x<12;x++)	
		{
		Average1+=Temperatures[x][i];
		
  		}
		Average1/=x;
	}  

		 //Setting a value for High to find the Highest temp. in the temperatures row.
	 Low= Temperatures[0][2];
	 for (i=2;i<3;i++)
	 { 
		if (Low>Temperatures[x][i])			   // For Loop to find the Lowest Temperature.
		{
		Low=Temperatures[x][i];
		}
	 }

	for (i=2; i<3;i++)					  // For Loop to find the Average Temperature.
	{   
		for (x=0; x<12;x++)	
		{
		Average2+=Temperatures[x][i];
		}
		Average2/=x;
	}	
     outData<<"\n\n";

	 outData<<right<<"  -----------------------------------------";
	 outData<<"-------------------------------\n";
	 outData<<right<<setw(55)<< " TEMPERATURES AND AVERAGE TABLE \n";
	 outData<<right<<"  ------------------------------------------";
	 outData<<"------------------------------\n";	
	 outData<<right<<setw(33)<<" High Temperature : ";
	 outData<<setw(31)<<" Low Temperature : "<<"\n"; 
	 outData<<right<<setw(24)<<" Highest = "<<High;
	 outData<<setw(30)<<" Lowest  = "<<Low<<"\n"; 
	 outData<<right<<setw(24)<<" Verage  = "<<Average1;
	 outData<<setw(27)<<" Average = "<<Average2<<"\n"; 
	 outData<<right<<"  ------------------------------------------";
	 outData<<"------------------------------\n";

	 outData<<"\n\n";

return 0;
}

