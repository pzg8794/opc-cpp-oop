#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void getValues();
void calcAvg(int, int, int, int, int);
int findLow(int, int, int, int, int);

int main ()
{

getValues();

return 0;
}

void getValues()
{
	int Grade1, Grade2, Grade3, Grade4, Grade5;

	cout<<" Please enter five grades \n ";
	cin>> Grade1 >> Grade2 >> Grade3 >> Grade4 >> Grade5;

	calcAvg(Grade1, Grade2, Grade3, Grade4, Grade5);
}

void calcAvg( int Grade1, int Grade2, int Grade3, int Grade4, int Grade5)
{
	double  Average;
	int LowGrade;

	LowGrade= findLow(Grade1, Grade2, Grade3, Grade4, Grade5);

	Average= ((Grade1+Grade2+Grade3+Grade4+Grade5)-LowGrade)/4;

	cout<<" The lowest grade is :"<< LowGrade <<endl;
	cout<<" The Average is :"<< Average <<endl;

}

int findLow( int Grade1, int Grade2, int Grade3, int Grade4, int Grade5)
{
	int LowGrade;

	LowGrade= Grade1;

	if (Grade1>Grade2){ LowGrade=Grade2;}
	if (Grade1>Grade3){ LowGrade=Grade3;}
	if (Grade1>Grade4){ LowGrade=Grade4;}
	if (Grade1>Grade5){ LowGrade=Grade5;}

	return(LowGrade);
}