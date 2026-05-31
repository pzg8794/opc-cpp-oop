#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

     struct  studentType
              { 
                 string    studentFName;  
                 string    studentLName;  
                    int       testScore;  
                   char           grade;
               };

  void  getData  (ifstream & inData, studentType  student[ ], int& size );
  void  calcGrade (studentType  student[ ], int size );   
  int  highScore (const  studentType  sList[ ], int size );   
  void  printOut (ofstream & outData, const  studentType  student[ ], int size ); 
  void AuthorAndTitle(ifstream&, ofstream&);
  void ClassAverage(ofstream & outData, float);

  int main ()
  {
	int size=0;
	ifstream inData;							  // Declaring variable for our input data.
							   //Assigning the file name for the program to read the input.
	inData.open("LabNo11.txt"); 	

	ofstream outData;
	// Assigning the file name for the program to read the outputoutData.
	outData.open("LabNo11_output.txt");

	// Declearing an output file name.

		if (!inData)											//testing for input file.
	{
		outData<<" Cannot open the input file.\n";
		outData<<" Program Terminated!!!\n";
		return 1;
	}

	studentType	student[100];

	AuthorAndTitle(inData, outData);
	
	getData(inData,student,size);
	
	printOut(outData, student, size);
  }

   void  getData  (ifstream & inData, studentType  student[ ], int& size )
   {
	 
	   int highscore;
	
	 while(!inData.eof())
	{

	inData>>student[size].studentFName>>student[size].studentLName>>student[size].testScore;
	calcGrade(student, size);
	size++;		
	}

	
	highscore= highScore( student, size);
	
   }

  void  calcGrade (studentType student[ ], int i ) 
  {
	
	  if( student[i].testScore <100 && student[i].testScore > 89)
		{student[i].grade='A';}

		else if( student[i].testScore  < 90 && student[i].testScore  > 79)
		{student[i].grade='B';}

		else if( student[i].testScore< 80 && student[i].testScore > 69)
		{student[i].grade='C';}

		else if( student[i].testScore  < 70 && student[i].testScore  > 59)
		{student[i].grade='D';}

		else if( student[i].testScore< 60)
		{student[i].grade='F';}
	  
  }

   int  highScore (const  studentType  student[ ], int size ) 
   {
	   int i, highscore=0;
	   

	  	for (i=1; i<=size; i++)
		{
		 if( student[i].testScore > student[highscore].testScore)
			 highscore=i;
		}
		
	return highscore;
   }

  void  printOut (ofstream & outData, const  studentType student[], int size )
  {
	int i=0,x;
	float TAverage=0;
	
															    // Setting Total Data Table.
	outData<<setw(7)<<left<<"__________________________________________________________";
	outData<<"_________________________________________________________\n\n";


	outData<<setw(73)<<right<<"STUDENT NAMES AND DATA TABLE";
	outData<<"\n";
	outData<<setw(7)<<left<<"__________________________________________________________";
	outData<<"_________________________________________________________\n";

	for(i=0;i<size;i++)
	{
		if(i==0 || i==4 || i==8 || i==12 || i==16 || i==20)
		outData<<setw(18)<<left<<"\n|NAMES: "<<setw(7)<<left<<student[i].studentFName<<" "<<setw(13)<<left<<student[i].studentLName<<" |  ";
		else
		outData<<setw(7)<<left<<student[i].studentFName<<" "<<setw(13)<<left<<student[i].studentLName<<" |  ";
 
		if(i==3 || i==7 || i==11 || i==15 || i==19)
		{
			outData<<setw(18)<<left<<"\n|Value Grade: ";
			for(x=i-3;x<=i;x++)
			{
			outData<<setw(22)<<right<<student[x].testScore<<"|  ";
			}
  
			outData<<setw(18)<<left<<"\n|Letter Grade: ";
			for(x=i-3;x<=i;x++)
			{				
				if (student[x].testScore%10 >= 5)   
				outData<<setw(21)<<right<<student[x].grade<<"+"<<"|  ";
				else
				outData<<setw(22)<<right<<student[x].grade<<"|  ";
			}	

		outData<<setw(7)<<left<<"\n__________________________________________________________";
		outData<<"_________________________________________________________";
		}
		
	TAverage+=student[i].testScore;
	}	
	TAverage/=i;

	
					      // Displaying Total Average and Students in the class.
	outData<<setw(7)<<left<<"\nTOTAL AMOUNT OF STUDENTS "<< setw(44)<<right<<"VALUE GRADE AVERAGE"<<setw(46)<<right<<" LETTER GRADE AVERAGE"<<"\n"; 
	outData<<setw(24)<<left<<i<<setw(45)<<right<<TAverage;ClassAverage(outData, TAverage);

	outData<<"\n\n\n";

	outData<<setw(34)<<right<<" "<<setw(5)<<left<<"____________________________________________________\n";
	outData<<setw(78)<<right<<"STUDENTS WITH THE HIGHEST GRADES \n";
	outData<<setw(34)<<right<<" "<<setw(5)<<left<<"____________________________________________________\n";


	 outData<<setw(34)<<right<<" "<<setw(18)<<left<<"STUDENT FULL NAME"<<" | "<<setw(5)<<right<<" Value Grade"<<" |  "<<setw(5)<<right<<" Letter Grade"<<" |  \n";
	for(i=0;i<size;i++)
	{
		if (student[i].testScore >= 95)  
		{
		outData<<setw(34)<<right<<" "<<setw(5)<<left<<"____________________________________________________\n";
		outData<<setw(34)<<right<<" "<<setw(7)<<left<<student[i].studentFName<<" "<<setw(10)<<left<<student[i].studentLName<<" |  ";
		outData<<setw(11)<<right<<student[i].testScore<<" |"<<setw(14)<<right<<student[i].grade<<"+"<<" |  \n";	
		}
		
	}		
	outData<<setw(34)<<right<<" "<<setw(5)<<left<<"____________________________________________________\n";
	
  }

  void AuthorAndTitle(ifstream& inData, ofstream& outData)
  {
  	outData<<"\n\n";
	outData<<"Lab Assignment # 11 " <<setw(96)<<right<< " By  Piter Garcia\n" ;
	outData<<"-------------------" <<setw(96)<<right<< "----------------" ;
	outData<<"\n\n\n";
	outData<<right<<setw(87)<< " PROGRAM ASSIGNMENT USING ARRAYS IN STRUCTURE DATA \n";
	outData<<setw(87)<<right<< " =================================================\n\n";
	outData<<"\n";
  }
   void ClassAverage(ofstream & outData, float TAverage )
  {
		if( TAverage <=100 && TAverage >= 95)
		outData<<setw(46)<<right<<"A+";
		else if( TAverage <95 && TAverage >89)
		outData<<setw(46)<<right<<"A";

		if( TAverage < 90 && TAverage >=85)
		outData<<setw(46)<<right<<"B+";
		else if ( TAverage < 85 && TAverage >79)
		outData<<setw(46)<<right<<"B";

		if( TAverage < 80 && TAverage >=75)
		outData<<setw(46)<<right<<"C+";
		else if( TAverage < 75 && TAverage  >69)
		outData<<setw(46)<<right<<"C";

		if( TAverage  < 70 && TAverage  >=65)
		outData<<setw(46)<<right<<"D+";
		else if( TAverage < 75 && TAverage >59)
		outData<<setw(46)<<right<<"D";

		if( TAverage < 60)
		outData<<setw(46)<<right<<"F";
   }