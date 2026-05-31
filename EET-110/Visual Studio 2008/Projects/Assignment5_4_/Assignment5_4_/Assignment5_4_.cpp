// Experiment_5_4.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int Ask_For_Amount_Borrowed();
double Ask_For_Interest();
int Ask_For_Number_of_years();
int Ask_For_Annually_Payments();
double another(double i,int n,int q, int x);
double Monthly_Payment(int P, double c , double i, int q);

void main()
{
	double M, P, i, n, q, x, s, c;
	
	P= Ask_For_Amount_Borrowed();
	i= Ask_For_Interest();
	n= Ask_For_Number_of_years();
	q= Ask_For_Annually_Payments();
   	x= another(i,n,q,x);
	M= Monthly_Payment(P,c,i,q);
	cout<<"\n The Monthly Payment is"<<M<<"US$\n";
}

double another(double i,int n,int q)
{
	double x;
	x= (long double pow(long double(1+(i/q)),long int(-n*q)));
	return(x);
}

int Ask_For_Amount_Borrowed()
{
		int P;
		cout<<"\n Please enter the value for the Amount Borrowed (P)in US$\n";
		cin>> P;
		return(P);
}

double Ask_For_Interest()
{
	double i;
		cout<<"\n Please enter the value for the Interest in decimal\n";
		cin>> i;
		return(i);
}

int Ask_For_Number_of_years()
{
	int n;
	cout<<"\n Please enter the value for the Number of Years\n";
	cin>> n;
	return (n);
}

int Ask_For_Annually_Peyments()
{
	int q;
	cout<<"\n Please enter the value for the Annually Peyment in US$\n";
	cin>> q;
	return (q);
}

double Payment(int P, double x, double i, int q)
{
	double M;
	M=(P*i)/(q*(1-x));
	return (M);
}