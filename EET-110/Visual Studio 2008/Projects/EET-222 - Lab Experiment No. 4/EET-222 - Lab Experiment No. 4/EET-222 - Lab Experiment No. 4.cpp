/*  Lab Experiment #4 : main project file.
		(Cascaded Amplafier)
EET 223
Prof. Fiorillo
Garcia, Piter
Discription: This program will capute the values for Zinput, Zoutput, 
Av, and AVdB of an Amplifier. */

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <math.h> 
#include <iomanip> 


using namespace std;

void main()

{
	// Imputs
	float ES, Vin, Vo, Vnl; 				

	cout<< "\n EET-222-Laboratory"<<"\t\t\t\t\t     "<<"   Experiment # 4\n";
	cout<< "\n Dr. J. Fiorillo"<<"\t\t\t\t\t  "<<"  Cascaded Amplifier\n";
	cout<< "\n Date: 11/5/2009"<<"\t\t\t\t\t\t"<<"  Piter Garcia\n";
	cout<< "\n -----------------------------------------------------------------------------";
 	
	cout<< "\n     Enter measured values for the following imputs Es, Vin, Vout, Vnoload\n     at the given order.\n";

	//Given Resistance

	float Rx,Rl;
	Rx= Rl = 10000;
	
	cout<<"\n Please enter a value of the Voltage Source.\n  ";
	cin>>ES;
	
	cout<<"\n Please enter a value for the Input Voltage.\n  ";
	cin>>Vin;
	
	cout<<"\n Please enter a value for the Output Voltage.\n  ";
	cin>>Vo;
	
	cout<<"\n Please enter a value for the noload voltage.\n  ";
	cin>>Vnl;
	
	// Outputs Formulas

	float Av;
	Av= Vo/Vin;
			
	float AvdB;
	AvdB= 20*log10(Av);
	
	float Zin;
	Zin= (Vin /(ES-Vin))*Rx;
		
	float Zo;
	Zo= ((Vnl - Vo)/ Vo)*Rl;
		
	// Table Setting

	cout << "\n\n\n\t		Cascaded Amplifier Characteristics";
	cout <<"\n\t	   --------------------------------------------";
	
	cout << setw(22) << "\n\t\t       Parameter" << setw(5) << "\t" << "Magnitude" << setw(5)<< "\t" << "Units";
	cout << setw(22) << "\n\t\t       ---------" << setw(5) << "\t" << "---------" << setw(5)<< "\t" << "-----";

	cout << setw(22) << "\n\t\t\tRl" << setw(5) <<"\t\t"<<setprecision(3)<<setiosflags(ios::fixed)<<Rx<< setw(8)<<"\tohms" << endl;

	cout << setw(22) << "\n\t\t\tRx" << setw(5) <<"\t\t" <<Rl<< setw(3) <<"\t"<< "ohms" << endl;

	cout << setw(22) <<"\n\t\t\tEs" << setw(5) <<"\t\t" << setprecision(3)<<ES<< setw(5) << "\t" << "volts" << endl;

	cout << setw(22) <<"\n\t\t\tVin\t" << setw(5) <<"\t" << setprecision(3) <<Vin<< setw(5) << "\t" << "volts" << endl;

	cout << setw(22) << "\n\t\t\tVout\t" << setw(5) <<"\t" << setprecision(3) <<Vo<< setw(5) << "\t" << "volts" << endl;

	cout << setw(22) << "\n\t\t\tVnoload\t" << setw(5) <<"\t" << setprecision(3) <<Vnl<< setw(5) << "\t" << "volts" << endl;
	
	cout << setw(22) <<"\n\t\t\tAv" << setw(5) <<"\t\t" << setprecision(3) <<Av<< setw(5) << "\t" << "---" << endl;

	cout << setw(22) << "\n\t\t\tAvdb\t" << setw(5) <<"\t" << setprecision(3) <<AvdB<< setw(5) << "\t" << "dB" << endl;

	cout << setw(22) << "\n\t\t\tZin\t" << setw(5) <<"\t" << setprecision(3) <<Zin<< setw(5) << "\t" << "ohms" << endl;

	cout << setw(22) << "\n\t\t\tZout\t" << setw(5) <<"\t" << setprecision(3) <<Zo<< setw(5) << "\t" << "ohms" << endl;
}