/*
Name : Piter Garcia
Subje: BCS-120
Date : Dic 2, 2010
Discription : This program will read information for the angles of different type of triangles written in the input file.
It will read each information according to its data and print out the value of each angles along with the characteristics  
of the triangle, such as: status, type, and kind.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

ofstream outData;
	// Declaring variable for our output data.
ifstream inData;
	// Declaring variable for our input data.

int validity(int&, int&, int&);// making this funtion able to modify the formal arguments.
void clasification(int&, int&, int&);// making this funtion able to modify the formal arguments.
void right_triangle(int&, int&, int&);// making this funtion able to modify the formal arguments.

int main()
{
	int Angle1, Angle2, Angle3, i=0, Angle; //i stands for the number of triangles calculated.
	outData.open("AssignmentNo8_output.txt"); // Assigning the file name for the program to read the output
	inData.open("AssignmentNo8_input.txt"); // Assigning the file name for the program to read the input.	
								
									//Assignment Number and Name.
		outData<<"\n\n";
		outData<< " Assignment # 8 " <<setw(60)<<right<< " By  Piter Garcia\n " ;
		outData<< "----------------" <<setw(57)<<right<< "------------------" ;
		outData<<"\n\n\n";
									//title.
		outData<<right<<setw(54)<< " TRIANGLE SPECIFICATION PROGRAM \n" <<setw(55)<<right<< " ================================\n\n";
		outData<<"\n";

	if (!inData)					//testing for input file.
	{
		outData<<" Cannot open theinput file.\n";
		outData<<" Program Terminated!!!\n";
		return 1;
	}
		
	
	i++;
	outData<<"-------------------------------------------------------------------------- \n";
	while (!inData.eof())	// Assign to reach all the data written in the file.
	{	
		
		inData>>Angle1>>Angle2>>Angle3;
		
		outData<<"\n";				//Table data for the angle of a triangle.

		outData<<setw(50)<<right<<" SPECIFICATIONS OF TRIANGLE ("<<i++<<") \n\n";
		outData<<"-------------------------------------------------------------------------- \n\n";
		outData<<setw(25)<<right<<" The Value of its Angles "<<setw(52)<<right<<" Characteristics based on its Angles \n\n";
	
		outData<<setw(10)<<" Angle1"<<setw(7)<<"Angle2"<<setw(7)<<"Angle3"<<setw(21)<<"Status"<<setw(15)<<"Type"<<setw(16)<<"Kind \n";
		outData<<setw(10)<<Angle1<<setw(7)<<Angle2<<setw(7)<<Angle3;


		if (validity(Angle1, Angle2, Angle3)==1) //calling function to test if angles form a valid triangle or not
		{		
			outData<<setw(21)<<right<<"Valid";
			clasification(Angle1, Angle2, Angle3);
		}
	
		else 
		{
		outData<<setw(21)<<right<<"Invalid";
		outData<<setw(16)<<right<<" ----- ";
		outData<<setw(14)<<right<<" ----- ";
		}
		
		outData<<"\n\n-------------------------------------------------------------------------- \n";	
	}
	
	return 0;
}

int validity(int& Angle1, int& Angle2, int& Angle3)//checking if it is a valid triangle or not.
{
	int Angle=Angle1+Angle2+Angle3,i=0;
		
	if (Angle==180 && Angle1>0 && Angle2>0 && Angle3>0)
	i++;
	else
	i=0;
	return (i);
}

void clasification(int& Angle1, int& Angle2, int& Angle3)// Function to check the type of the triangle.
{
	if (Angle1==Angle2 && Angle1==Angle3 && Angle2==Angle3)
	{	
		outData<<setw(15)<<right<<"Equiangular";
		outData<<setw(15)<<right<<" Acute ";// kind of triangle, this triangle has all angles equal therefore, it must be < 90.

	}
	else if (Angle1!=Angle2 && Angle1!=Angle3 && Angle2!=Angle3)
	{
		outData<<setw(15)<<right<<"Scalene";
		right_triangle(Angle1, Angle2, Angle3); //calling fucntion to find out what kind it is.
	}
	else 
	{
		outData<<setw(15)<<right<<"Isosceles";
		right_triangle(Angle1, Angle2, Angle3); // making this funtion able to modify the formal arguments.
	}

}

void right_triangle(int& Angle1, int& Angle2, int& Angle3)//function to check what kind of triangle it is.
{
	if (Angle1>90 || Angle2>90 || Angle3>90)
	{
		outData<<setw(14)<<right<<"Obtuse";
	}
	else if (Angle1==90 || Angle2==90 || Angle3==90)
	{
		outData<<setw(14)<<right<<"Right";
	}
	else if (Angle1<90 && Angle2<90 && Angle3<90)
	{
		outData<<setw(14)<<right<<"Acute";
	}
}