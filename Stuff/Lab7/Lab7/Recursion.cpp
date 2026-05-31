//*********************************************************************************
// File: MainFile.ccp
//
// Purpose: To write methods or functions that will be called from main. 
// Purpose: To assign, edit and obtain the value of parameters in a class or struct.
//
// Written By: Piter Garcia 
//*********************************************************************************
#include "Recursion.h"

int main()
{	

	MyStack z,i;												    //First MyList Instance.		
	  //This automatically Calls constructor to allocate and intialize pointers to NULL.

	int n=0;
	int index=0;
	
	//z.Clear();


			cout << "\n The nth Factorial number(s) is "<<"\n ";
			cout<< z.Factorial(5)<<"\n";
			
			cout << "\n The nth fibonacci number(s) is "<<"\n ";
			cout<<"The Result is "<< z.Fibonacci(5)<<"\n";
				
			cout << "\n The Factorial Power number(s) with base of 2 is "<<"\n ";
			cout<< z.Power(2, 8)<<"\n";

			cout << "\n The Summation "<<"\n ";
			cout<<z.summation(5)<<"\n";

			z.Clear();	
			z.Push(2);
			z.Push(4);
			z.Push(6);
			z.Push(8);
			z.Push(10);

			cout << "\n The Array Summation "<<"\n ";
			cout<<z.ArrayAdd(index,5)<<"\n";


			z.Clear();	
			z.Push(2);
			z.Push(4);
			z.Push(6);
			z.Push(8);
			z.Push(10);
		
			cout << "\n The Array Multiplication "<<"\n ";
			cout<<z.multiple(index,5)<<"\n";

			
		//	cout<< z.Power(2,index-temp--) <<" ";

	//cout << "The Power number(s) are"<<"\n ";


	//z.Push(top);	
	
	
	//z.Show();	   //Outputing Size of the List on the Console Window.
	
	system("pause");

return 0;
}
