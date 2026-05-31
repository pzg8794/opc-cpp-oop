#include <iostream>
#include <iomanip> 
#include <fstream>
#include <string>

using namespace std;

class  MAA
{
public:
                 string    FN;
				 string		T;
				 string		H;
				
				 int	month;
				 int	  day;
				 int	 year;
				 int		n;
				 int		i;

				 double FS;
				 double MB;
				 double HPB;
				 double CB;
				 double GEB;
				 double CG;
				 double MC;
				 double AR;
				 double GA;
				 double TGA;
				 double HIB;
				 double CIB;
				 double GB;
				 double GB1;
				 double GB2;
				 double CPB;
				 double HC;
				 double CLB;
				 double TAB;
				 double TSA;
              
void date(ofstream& outData, int month);
void TotalBill(ofstream& outData, MAA MAA);
void KeethPayments( ofstream& outData, MAA MAA);
void AmericanExpGreenCard(ofstream& outData, MAA MAA);
void MarksChecking(ofstream& outData, MAA MAA);
 };