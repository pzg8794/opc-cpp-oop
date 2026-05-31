// File: MyStack.ccp
//
// Purpose: To write methods or functions that will be called from main. 
// Purpose: To assign, edit and obtain parameter values within its class.
//
// Written By: Piter Garcia 
//*********************************************************************************
#include "Recursion.h"




//*************************************************************************
// Method: MyStack()
//
// Purpose: Default Constructor to Initialize MyStack class member variables
// Big-O runtime cost: Big-O(1)
//*************************************************************************
MyStack::MyStack()
{	
	top=-1;

}//Creates an empty stack.



//*************************************************************************
// Method: Clear()
//
// Purpose: To clear or Empty the array player.
// Big-O runtime cost: Big-O(1)
//*************************************************************************
void MyStack::Clear()
{
	top=-1;
}
//Clears the stack.




void MyStack::Push(int b)
{ 	
		top++;
		player[top]=b;

}


int MyStack::Fibonacci(int n)
{
	
	if(n==1||n==0)
	{
			
		return 1;
	}

	else
	{
		return Fibonacci(n-1) + Fibonacci(n-2);
		
	}
	
}

int MyStack::Factorial(int n)
{
	cout<<n<<" ";
	
	if (n == 0 || n == 1)
	{
		
		cout<<"\n The Result is ";	
		return 1;
	
	}

	else
	{
		
		return n*Factorial(n-1) ;
		
	}

}



void MyStack::Pop()
{
	int i=0;

	if (IsEmpty()) 
	{
		cout<<" \n  Your List is Empty \n ";
		return;
	}

	else
	{
												
		top--;
	}
}
//Removes the top element of the stack.




//*******************************************************************
// Method: IsEmpty() 
//
// Purpose: Checking if MyStack is empty or not. 
// Big-O runtime cost: Big-O(1)
//*******************************************************************
bool MyStack::IsEmpty() const
{ 
	return ( top == -1); 
}




//*******************************************************************
// Method: IsFull() 
//
// Purpose: Checking if MyStack is full or not. 
// Big-O runtime cost: Big-O(1)
//*******************************************************************
bool MyStack::IsFull() const
{ 
	return ( top == length); 
}






void MyStack::Top(int& b)
{
	if (IsEmpty()) 
	{
		cout<<" \n  Your List is Empty \n ";
		return;
	}
	else
	{
		b=player[top];
	}
}




void  MyStack::Show()
{ 
	if (IsEmpty()) 
	{
		cout<<" \n  Your List is Empty \n ";
		return;
	}
	else
	{
		int i=top,x=0;

		while(i!=-1)
		{
				
			cout<<"\n  "<< x++ <<")";   

			i--;	
		}

	}
} 


int MyStack::Power(int number, int n)
{
	double total=0;
	cout<<pow(2.0, n)<<" ";
	total=pow(2.0, n);
	
	if(n==1)
	{   
		return number + Power(2.0,0);
	}
	if (n == 0)
	{	
		cout<<"\n The Result is ";
		return 1;
	}

	else
	{
				
		return total + Power(2.0,n-1);
		
	}
	
}

int MyStack::ArrayAdd(int a, int n)
{
	double t=player[top];
	cout<<"\n Array"<<" "<<"Exponent"<<endl;
	cout<<setw(6)<<right<<t<<"   "<<setw(6)<<right<<n<<"\n Result ";
	cout<<pow(t, n)<<" ";
	top--;
	
	if(n == 1)
	{	
		cout<<"\n The Sum is ";
		return t;
	}
	
	

	else
	{
				
		return  pow(t, n)+ArrayAdd(t, n-1);
		
	}

}

int MyStack::summation(int n)
{
	cout<<n<<" ";
	
		
	if(n==1)
	{   
		return n + summation(0);
	}
	if (n == 0)
	{	
		cout<<"\n The Result is ";
		return 0;
	}
	else
	{
				
		return n + summation(n-1);
		
	}
}

int MyStack::multiple( int a, int n)
{	
	double t=player[top];
	cout<<"\n Array"<<" "<<"Number"<<endl;
	cout<<setw(6)<<right<<t<<"   "<<setw(6)<<right<<n<<"\n Result ";
	cout<<t*n<<" ";
	top--;
	
	if(n == 1)
	{	
		cout<<"\n The Sum is ";
		return t;
	}
	
	

	else
	{
				
		return  t*multiple(t, n-1);
		
	}

}