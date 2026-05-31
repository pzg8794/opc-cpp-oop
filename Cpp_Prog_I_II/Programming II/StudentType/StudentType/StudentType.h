#include <iostream>
using namespace std;

     class student
	 {
                 string    studentFName;  
                 string    studentLName;
		            int       testScore;
                   char           grade;
	
	 public:

	void  getData  (ifstream & inData, student  student[ ], int& size );
	void  calcGrade (student  student[ ], int size );   
	int  highScore (const  student  sList[ ], int size );   
	void  printOut (ofstream & outData, const  student  student[ ], int size ); 
	void AuthorAndTitle(ifstream&, ofstream&);
	void ClassAverage(ofstream & outData, float);
	 };
