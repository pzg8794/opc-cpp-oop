/*
Name : Piter Garcia
Subje: BCS-230
Date : February 2nd, 2011
Discription : This program will ask the user its name along with the paint gallons, price per gallon, and rooms along with its dimensions.
Then, it will print out a detailed information of each room spends along with a total summary of all the rooms.
*/

#include <iostream>
#include <iomanip>
#include <string>

void TitleandName ();
int NumRooms ();
int NumGals (float);
float PaintPrice ();
float WallArea();
float LaborHrs (float);

float Paint_Price;
int i, Number_of_Rooms;;

using namespace std;

int main ()
{

	
	float Number_of_Gals, Labor_Price, Total_Paint_Price=0, Total_Labor_Price=0, Total_Wall_Area=0, Labor_Hours;
	string Fullname;

	TitleandName();

	cout<<"\n Please enter the Worker's Name \n ";
	getline(cin, Fullname);
	cout<<"\n Please Mr./Miss "<< Fullname <<" enter the Number of Rooms you will work on \n ";
	NumRooms ();								//Calling function to get number of rooms.
		
	Total_Wall_Area = WallArea ();				//Calling function for the total Area of the rooms and a detailed information about each one of them.
	Number_of_Gals = NumGals( Total_Wall_Area );//Calling function for the total number of gals use in the room(s).
	Labor_Hours= LaborHrs(Number_of_Gals);		//Calling function for the total number of hours spent in painting.

	Labor_Price=28.00;
	Total_Paint_Price= Paint_Price*Number_of_Gals; //Total price spent in the gals of paint.
	Total_Labor_Price= 28*Labor_Hours;			   // Total price of worked hours.


			cout<<"\n\n\n ";
			cout<<setprecision(2)<<fixed; // Setting Output Numbers to 2 points decimal.

										  //Pain Job Detailed Summary.

		cout<<right<<setw(53)<< " PAINT JOB DETAILED SUMMARY \n" <<setw(56)<<right<< "============================\n\n ";
		cout<<"Worker Name: "<<setw(61)<<right<<Fullname<<"\n\n ";
		cout<<"---------------------------------------------------------------------------- \n\n ";
		cout<<setw(43)<<right<<" SPECIFICATIONS OF ("<< i <<") ROOM(S)  \n\n ";
		cout<<"---------------------------------------------------------------------------- \n\n";
		
		cout<<setw(39)<<right<<" Materials and Time Spent "<<setw(34)<<right<<" Cost of Materials and Time \n\n";
		cout<<setw(25)<<right<<" Gallons of Paint Required: "<< setw(5)<< right<< Number_of_Gals <<" gals"<<setw(34)<<right<<" Price of Paint per Gallon: $"<< setw(5)<< Paint_Price <<"\n";
		cout<<setw(25)<<right<<" Hours of Labor Required:  " << setw(6)<< right<<    Labor_Hours <<"  hrs"<<setw(34)<<right<<"Price of Labor per Hours : $"<< setw(5)<< Labor_Price <<"\n";
		cout<<setw(71)<<right<<" Total Paint Cost: $"<< setw(5)<<right<<Total_Paint_Price <<" \n";
		cout<<setw(71)<<right<<" Total Labor Cost: $"<< setw(5)<<right<<Total_Labor_Price <<"\n\n ";
		cout<<"---------------------------------------------------------------------------- \n\n";
		cout<<" Total Job Cost: "<< Total_Paint_Price + Total_Labor_Price <<" \n\n ";
		cout<<"---------------------------------------------------------------------------- \n\n";


return 0;
}

void TitleandName()
{

	cout<<"\n\n";			// Title and Name
	cout<<right<<setw(54)<< " Programming Assignment # 4 \n" <<setw(50)<<right<< " By  Piter Garcia\n\n " ;
	cout<<"\n\n";
	cout<<right<<setw(55)<< " Paint Job Estimator Program \n" <<setw(56)<<right<< " =============================\n\n";

}



float WallArea ()
{
	int r=0; // NA stands for Number of Rooms.
	float width, length, Total_Wall_Area=0, Number_of_Gals, Area;

	i= Number_of_Rooms;

	cout<<" Please enter the price of paint per galon \n ";
	cin>> Paint_Price;

	cout<<"\n\n\n ";
	cout<<setprecision(2)<<fixed; // Setting Output Numbers to 2 points decimal


	for(r=i;r>=1;r--)
		{ 	
			cout<<"\n Please enter the width of the room followed by its length \n ";
			cin>> width >> length;
			Area= (2*8)*(width + length);


										  //Pain Job Detailed Information.

			cout<<" ---------------------------------------------------------------------------- \n\n";
			cout<<setw(50)<<right<<" SPECIFICATIONS OF ROOM ("<< r <<") \n\n ";
			cout<<"---------------------------------------------------------------------------- \n\n";

			cout<<" Width"<<right<<setw(15)<< "Length"<<setw(15)<<"Area"<<setw(20)<<"No. of Gals"<<setw(22)<<right<<"Paint Price \n ";
				
			Total_Wall_Area += Area;		  //Adding areas of each room.

			Number_of_Gals = NumGals( Area ); //Calling function to find area.

			cout<<setw(5)<<right << width <<right<<setw(15)<< length <<setw(15)<< Area <<setw(20)<< Number_of_Gals <<setw(19)<<right<< Paint_Price*Number_of_Gals <<" \n ";
		}
			cout<<"---------------------------------------------------------------------------- \n\n";

	return Total_Wall_Area;
}


int NumRooms ()
{
	cin>> Number_of_Rooms;


	return Number_of_Rooms;
}

int NumGals( float Total_Wall_Area )	// Function to find the amount of Gals spent.
{
	int Num;
	float x, NumGals= (Total_Wall_Area/160);
	
	Num= NumGals;
	x= NumGals - Num;

	if (x>=0.5){ Num+=1; }				// Rounding the amount of gals.
	
	return Num;
}

float LaborHrs(float Number_of_Gals)	// Function to find the amount of hours per Gals spent.
{
	float Labor_Hours;
	Labor_Hours= Number_of_Gals*3;		//Finding the amount of Hours per Gals.

	return Labor_Hours;
}
