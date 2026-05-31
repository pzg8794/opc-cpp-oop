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
				 int		n[2];
				 int		i;

				 double FS[2];
				 double MB[2];
				 double HPB[2];
				 double CB[2];
				 double GEB[2];
				 double CG[2];
				 double MC[2];
				 double AR[2];
				 double GA[2];
				 double TGA[2];
				 double HIB[2];
				 double CIB[2];
				 double GB[2];
				 double GB1[2];
				 double GB2[2];
				 double CPB[2];
				 double HC[2];
				 double CLB[2];
				 double TAB[2];
				 double TSA[2];
				 double diff[100];
				 double Tdiff[100];
              
void date(ofstream& outData, int month);
void TotalBill(ofstream& outData, MAA MAA);
void KeethPayments( ofstream& outData, MAA MAA);
void AmericanExpGreenCard(ofstream& outData, MAA MAA);
void MarksChecking(ofstream& outData, MAA MAA);
 };