/*
Name : Piter Garcia
Subjet: BCS-230
Assingment No.: 4
Date : February 2nd, 2011
Discription : This program will ask the user its name along with the paint gallons, 
price per gallon, and rooms along with its dimensions. Then, it will print out a 
detailed information of each room spends along with a total summary of all the rooms.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


int NumRooms ();
int NumGals (float);
float PaintPrice ();
float WallArea ();
float LaborHrs (float);


// Declreaing these variables globally to access them from the other functions.
int i, Number_of_Rooms,r=0;						
float Paint_Price, width, length;

using namespace std;

int main ()
{

	// Declearing an output file name.
	ofstream outData;

	// Assigning the file name for the program to read the outputoutData.
	outData.open("AssignmentNo4_output.txt");	

	outData<<"\n\n";		

										// Title and Name
	outData<<"Assignment Program #4 " <<setw(58)<<right<< " By  Piter Garcia\n\n " ;
	outData<<"\n";
	outData<<right<<setw(55)<< " Paint Job Estimator Program \n";
	outData<<setw(56)<<right<< " -----------------------------\n\n";

	
	float Area, Labor_Price, Total_Paint_Price=0, Total_Labor_Price=0;
	float Total_Wall_Area=0, Labor_Hours, Number_of_Gals;
	string Fullname;

	cout<<"\n Please enter the Worker's Name \n ";
	getline(cin, Fullname);

	cout<<"\n Please Mr./Miss "<< Fullname;
	cout<<" enter the Number of Rooms you will work on \n ";
	cin>> Number_of_Rooms;

	cout<<"\n Please enter the price of paint per galon \n ";
	cin>> Paint_Price;

	// Calling function to get the number of rooms.
	i= Number_of_Rooms;


	outData<<"\n\n";




									// Title for inputs of each 
	outData<<right<<setw(58)<< " PAINT JOB INPUTS FROM EVERY ROOM \n";
	outData<<setw(60)<<right<< "==================================\n\n ";

		// For loop to work the amount spend in each room.
		for(r=i;r>=1;r--)
		{ 	
			cout<<"\n Please enter the width of the room followed by its length \n ";
			cin>> width >> length;

			//Calling function for the Area of each rooms.
			Area = WallArea ();		

			// Setting Output Numbers to 2 points decimal
			outData<<setprecision(2)<<fixed;	

									//Pain Job Detailed inputs Information of each room.
			outData<<"-----------------------------------------------------------------";
			outData<<"----------- \n\n";
			outData<<setw(51)<<right<<" SPECIFICATIONS OF ROOM ("<< r <<") \n\n ";
			outData<<"-----------------------------------------------------------------";
			outData<<"----------- \n\n";

			outData<<" Width"<<right<<setw(15)<< "Length"<<setw(15)<<"Area";
			outData<<setw(21)<<"No. of Gals"<<setw(23)<<right<<"Paint Price \n ";
			
			//Adding areas of each room.	
			Total_Wall_Area += Area;	

			//Calling function to find the number of gallons used for each room.
			Number_of_Gals = (Area/160);		

			outData<<setw(5)<<right<< width <<right<<setw(15)<< length;
			outData<<setw(15)<< Area <<setw(21)<< Number_of_Gals;

			//Total amount of pain price used in each room.
			outData<<setw(20)<<right<< Paint_Price*Number_of_Gals;
			outData<<" \n\n ";
		}

	outData<<"-------------------------------------------------------------------";
	outData<<"--------- \n";

	// Calling Function to find the total of Gallons used for all the rooms.
	Number_of_Gals = NumGals( Total_Wall_Area );

	// Calling Functiong to find the total amount of hours worked in all the rooms.
	Labor_Hours= LaborHrs(Total_Wall_Area );

	Labor_Price=28.00;

	// Total amount for paint price used in all the rooms.
	Total_Paint_Price= Paint_Price*Number_of_Gals;

	// Total amount for labor price in all the rooms.
	Total_Labor_Price= 28*Labor_Hours;

	outData<<setprecision(2)<<fixed; // Setting Output Numbers to 2 points decimal.
														
	outData<<"\n\n\n\n\n\n\n ";
	outData<<"\n\n\n\n\n\n\n ";
	outData<<"\n\n\n\n\n\n\n ";

							//Pain Job Detailed Summary of all rooms.
	outData<<right<<setw(54)<< " PAINT JOB DETAILED SUMMARY \n";
	outData<<setw(57)<<right<< "============================\n\n ";
	outData<<"Worker Name: "<<setw(63)<<right<<Fullname<<"\n\n ";
	outData<<"-------------------------------------------------------------------";
	outData<<"--------- \n\n ";
	outData<<setw(44)<<right<<" SPECIFICATIONS OF ("<< i <<") ROOM(S)  \n\n ";
	outData<<"-------------------------------------------------------------------";
	outData<<"--------- \n\n";
		
	outData<<setw(39)<<right<<" Materials and Time Spent ";
	outData<<setw(34)<<right<<" Cost of Materials and Time \n\n";
	outData<<setw(25)<<right<<" Gallons of Paint Required: ";
	outData<< setw(5)<< right<< Number_of_Gals <<" gals";
	outData<<setw(34)<<right<<" Price of Paint per Gallon: $";
	outData<< setw(5)<< Paint_Price <<"\n";
	outData<<setw(25)<<right<<" Hours of Labor Required:  ";
	outData<< setw(6)<< right<<    Labor_Hours <<"  hrs";
	outData<<setw(34)<<right<<"Price of Labor per Hours : $";
	outData<< setw(5)<< Labor_Price <<"\n";
	outData<<setw(71)<<right<<" Total Paint Cost: $";
	outData<< setw(5)<<right<<Total_Paint_Price <<" \n";
	outData<<setw(71)<<right<<" Total Labor Cost: $";
	outData<< setw(5)<<right<<Total_Labor_Price <<"\n\n ";
	outData<<"-------------------------------------------------------------------";
	outData<<"--------- \n\n";
	outData<<" Total Job Cost: $";
	outData<< Total_Paint_Price + Total_Labor_Price <<" \n\n ";
	outData<<"-------------------------------------------------------------------";
	outData<<"--------- \n\n";

return 0;
}

//Functiong to find the Area of a room.
float WallArea ()
{
	float Area;
	
	Area= (2*8)*(width + length);
	return Area;
}

// Function to find the amount of Gals spent.
int NumGals( float Total_Wall_Area )	
{
	int Num;
	float x, NumGals= (Total_Wall_Area/160);
	
	Num= NumGals;
	x= NumGals - Num;

	// Rounding the amount of gals for the total amount.
	if (x>=0.5){ Num+=1; }				
	return Num;
}

// Function to find the amount of hours per Gals spent.
float LaborHrs(float Total_Wall_Area)	
{
	float Labor_Hours;

	Labor_Hours= (Total_Wall_Area/160)*3;		
	return Labor_Hours;
}