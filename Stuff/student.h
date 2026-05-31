
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class student
{
	string *m_name;
	double *m_GPA;

public:

	string get_name();
	void set_name(string n);

	double get_GPA();
	void set_GPA(double gpa);


	student(string n, double g)
	{
		m_name= new string;
		m_GPA= new double;
	
		*m_name=n;
		*m_GPA=g;
	}

	~student()
	{

	delete	m_name;
	delete	m_GPA;
	}

};