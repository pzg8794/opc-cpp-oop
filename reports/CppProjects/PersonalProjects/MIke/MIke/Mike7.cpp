//Mike Weiss
//Homework #7

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

void getValues (int [ ] , int);


int main()
{
   int score[40];
   int low;
   int average=0;
   int counter;
   int i;

   cout << "Please enter the number of test scores: ";
   cin >> counter;
   getValues(score, counter);

    
	for(i = 0; i < counter; i++)
	{
		average += score[i];
		low = score[counter];
		if (low > score[i])
		score[counter] = score[i]; 
		
	}

   	

  average = (average - score[low]) / (counter-2);


  cout << "The average is: " << average << endl; 




return 0;
}

void getValues(int score [ ], int counter)
{
     
	 int j;
     
	 
	for(j = 0; j < counter; j++)
	{
        cout << "Please enter the test score.";
		cin >> score[j];  
		cout << endl;

   
		while(score[j] <0 || score[j] >100)
		 { 
		 cout << "Invalid test score, please try again." << endl; 
		 cin >> score[j];
		 cout << endl;
		}

	}
}