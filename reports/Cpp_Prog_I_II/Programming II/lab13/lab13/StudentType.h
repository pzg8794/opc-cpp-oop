#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

     class SMT
	 {
	 public:

     void  GetData  (ifstream& inData, SMT  SMT, int size );
	 void  Display  (ofstream& outData, SMT  SMT, int size );

	 public:
	 int	  ItemNumber[100];  
     int       ItemValue[100];
	 int         ItemQty[100];
	 int       ItemPgQty[100];
	 int	 GroupNumber[100];
	 int			   option;
	 string	    ItemType[100];
	 string  Description[100];
	 };

	  
