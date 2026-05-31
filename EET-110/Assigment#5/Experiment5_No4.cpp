/*  Experiment_No_5.cpp : main project file.
		(Voltage drop in a Series Circuit)
EET 110, 8:30am-10:45
Prof. Issapour
Garcia, Piter
Discription: This will capute the voltage drop across each 
resistor in a series circuit consisting of three resistors. */

#include "stdafx.h"
#include <iostream>
using namespace std;

float Ask_For_Voltage();
float Ask_For_Res();
float Zinput(float Vin, float ES, float Rx);
float Zout(float Vnl, float Vl, float Rl);
float Gain_voltage(float Vo, float Vin);
float Gain_voltagedb(float Vin, float Vo):


void main()
{
							//Title:
					cout<<"\n\t\t\t\t Assignment#5";
	    cout<<"\n\t\t\t Voltage Drop in a Series Circuit";
							//Author:
		cout<<"\n\n\t\t\t\t\t\t Made by Piter Garcia\n\n";


float ES, Vin, Vo, Vnl, Zin, Zo, Rx, Rl, Av, AvdB; 
	
	Rx= Ask_For_Res();
	Rl= Ask_For_Res();
    ES= Ask_For_Voltage_Source();
	Vin= Ask_For_Voltage();
	Vo= Ask_For_Voltage();
	Vnl= Ask_For_Voltage();

    Zin= Zinput(Vin,ES,Rx);
	cout<<"\n Zin="<<R1<<"\t Ohms\n ";
	Zo= Zout(Vnl,Vl,Rl);
	cout<<"\n Zout="<<R1<<"\t Ohms\n ";
	Av= Gain_voltage(Vo,Vin);
	cout<<"\n Av="<<R1<<"\t \n ";
	AvdB= Gain_voltagedb(Vin,Vo):
	cout<<"\n AvdB="<<R1<<"\t dB\n ";

	cout << " \n\t" <<"Parameters" << "\t\t" <<"Magnitud" << "\t\t"<<"Units";

}
					//Resistors in the Series Circuit
	
float Ask_For_Res()
{
	float Es;
	cout<<"\n Please enter the value of the voltage source\n";
	cin>>Es;
	return (Es);
}

float Ask_For_Res()
{
	float Vin;
	cout<<"\n Please enter the value of the voltage input\n";
	cin>>Vin;
	return(Vin);
}

float Ask_For_Res()
{
	float Vo;
	cout<<"\n Please enter the value of the voltage output\n";
	cin>>Vo;
	return(Vo);
}

float Ask_For_Res()
{
	float Vnl;
	cout<<"\n Please enter the value of the voltage noload\n";
	cin>>Vo;
	return(Vnl);
}

float Zinput(float Vin, float ES, float Rx)
{	
	float Vin;
	Vin= (Vin /(Es-Vin))*Rx;
	return(Vin);
}

float Zout(float Vnl, float Vl, float Rx)

{	float Zo;
	Zo= (Vl/ (Vnl - Vl)*Rl;
	return(Zo);
}

float Gain_voltage(float Vo, float Vin)
{	
	float Av;
	Av= Vo/Vin;
	return(Av);
}

float Gain_voltagedb(float Vin, float Vo)
{
	float AvdB;
	AvdB= 20*log(Av);
	return (AvdB);
}