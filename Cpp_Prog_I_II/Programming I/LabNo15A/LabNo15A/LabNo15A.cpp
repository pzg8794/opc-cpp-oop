#include <iostream>
#include <iomanip>
using namespace std;

void Array_Multiple(int, double[]);

 int main ()
 {   
	int i,j;
	double Array[5][10];

	for (j=0; j<5;i++)
	{
		for (i=0; i<10;i++)
		
			Array[j][i]=0;
			cout<<setw(5)<<right<<Array[j][i]<<" ";
			
		
	}

	return 0;
 }
