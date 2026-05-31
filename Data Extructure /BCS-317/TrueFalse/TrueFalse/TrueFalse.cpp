// TrueFalse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TrueFalseQ.h"


int _tmain(int argc, _TCHAR* argv[])
{
	TrueFalseQ check;
	TrueFalseQ();
	string usweranswer,answer;

	//check.Set(answer);
	
	//cout<<"Please Enter Your Anwe
	check.setstatment("Today is Rainning");
	check.setuseranswer(true);
	check.Getuseranswer(false);

	system("pause");
	return 0;
}

