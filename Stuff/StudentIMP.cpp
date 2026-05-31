#include "student.h"	


string student::get_name()
{

return *m_name;
}
	
void student::set_name(string n)	
{

	*m_name=n;	
}

double student::get_GPA()
{

return *m_GPA;
}


void student::set_GPA(double gpa)
{
	
	*m_GPA=gpa;
}

