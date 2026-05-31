#include "stdafx.h"
#include "TrueFalseQ.h"

TrueFalseQ::TrueFalseQ()
{
	nextIndex=0;
	
}

void TrueFalseQ::Set(bool answer)
{
	*correctAnswer=answer;
}




bool TrueFalseQ::Getuseranswer(bool answer)
{
//	*UserAnswer=answer;

return answer;
}
void TrueFalseQ::setuseranswer(bool answer)
{
	//*correctAnswer=answer;
}



bool TrueFalseQ::Getcorrectanswer(bool answer)
{
	*correctAnswer=answer;

return *correctAnswer;
}

void TrueFalseQ::setcorrectanswer(bool correctanswer)
{
	*correctAnswer=correctanswer;
}



string  TrueFalseQ::Get(bool UserAnswer)		
{
	statement=UserAnswer;

return statement;
}

void TrueFalseQ::setstatment(string s)
{
	statement=s;
}



void TrueFalseQ::AddQuestion(TrueFalseQ  q)
{

}