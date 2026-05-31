//This program displays three rows of numbers
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double num1 = 2897, num2 = 5, num3 = 837, 
		num4 = 34,   num5 = 7, num6 = 1623,
		num7 = 390,  num8 = 3456, num9 = 12;

cout<<fixed<<setprecision(2);
	cout <<"\n num1 = "<<setw(7)<< num1 << "  " <<"num2 = "<<setw(7)<< num2 << "  " <<"num3 = "<<setw(7)<< num3 << endl;
	cout <<" num4 = "<<setw(7)<< num4 << "  " <<"num5 = "<<setw(7)<< num5 << "  " <<"num6 = "<<setw(7)<< num6 << endl;
	cout <<" num7 = "<<setw(7)<< num7 << "  " <<"num8 = "<<setw(7)<< num8 << "  " <<"num9 = "<<setw(7)<< num9 << endl;
    
	

	return 0;
}


