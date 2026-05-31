
#include "MarksClass.h"

void MAA::TotalBill(ofstream& outData, MAA MAA)
{
	outData<<"\n\n\n";
	outData<< " Account Management " <<setw(61)<<right<< " By  Piter Garcia\n " ;
	outData<< "------------------"  << setw(60)<<right<< "----------------" ;
	outData<<"\n\n\n";
									
	outData<<right<<setw(61)<< " Bills and Account Management Program \n" <<setw(61)<<right<< " ====================================\n\n";
	outData<<"\n\n";	

	outData<<" Name: " <<setw(47)<<left<< MAA.FN<<setw(5)<<right<<"Date:"; MAA.date(outData, MAA.month); outData<<" "<<MAA.day<<MAA.T<<MAA.H<<", "<<MAA.year;
	outData<<"\n ------------------------------------------------------------------------------- \n";
	outData<<"\n Gross Amount: ................."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.GA  <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TGA;

	outData<<"\n ------------------------------------------------------------------------------- \n";
	
	MAA.TSA=MAA.FS;
	outData<<"\n Food Shopping Amount Spent: ."<<setw(19)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.FS <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA;
	MAA.TSA= MAA.TSA+MAA.CG;
	outData<<"\n Car Gas Amount Spent: ......."<<setw(19)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CG <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA; 
	
	MAA.TSA= MAA.TSA+MAA.AR;
	outData<<"\n Apartment's Rent Bill: ......"<<setw(19)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.AR <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA; 
	MAA.TSA= MAA.TSA+MAA.HIB;
	outData<<"\n Health Insurance Bill: ......"<<setw(19)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.HIB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA; 
	MAA.TSA= MAA.TSA+MAA.CIB;
	outData<<"\n Car Insurance Bill: ........."<<setw(19)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CIB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA; 
	
	//Mark's Checking Account
	MAA.TSA=MAA.TSA+MAA.MB;
	outData<<"\n Cell Phone Bill: .............."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.MB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA;
	MAA.TSA=MAA.TSA+MAA.HPB;
	outData<<"\n Home Phone Bill: .............."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.HPB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA;
	MAA.TSA=MAA.TSA+MAA.CB;
	outData<<"\n Cable Bill: ..................."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CB <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA; 
	MAA.TSA=MAA.TSA+MAA.GEB;	
	outData<<"\n Gass Electric Bill: ..........."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.GEB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA;
	MAA.TSA=MAA.TSA+MAA.MC;	
	outData<<"\n Mom's Cable Bill: ............."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.MC <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA; 
	MAA.TSA=MAA.TSA+MAA.GB;	
	outData<<"\n Both Gym Bills: ..............."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.GB <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA; 
	MAA.TSA=MAA.TSA+MAA.CPB;	
	outData<<"\n Chiropractor Bill for "<<MAA.n<<" visits:"<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<<MAA.CPB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA; 
	MAA.TSA=MAA.TSA+MAA.HC;	
	outData<<"\n HairCut Payment: .............."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.HC <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA; 
	MAA.TSA=MAA.TSA+MAA.CLB;	
	outData<<"\n Cleaning Leady Bill: .........."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CLB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA; 
	MAA.TSA=MAA.TSA+MAA.TAB;	
	outData<<"\n Triple A R-S Assistance Bill: ."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.TAB <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TSA; 				
	
	outData<<"\n ------------------------------------------------------------------------------- \n";	
	outData<<"\n Total" <<setw(43)<<right<<" $ "<<setw(9)<< MAA.TSA-MAA.GA <<setw(15)<<right<<" $ "<<setw(7)<< MAA.TSA;
	outData<<"\n ------------------------------------------------------------------------------- \n";	

	outData<<"\n\n ";
}

void MAA::KeethPayments(ofstream& outData, MAA MAA)
{	
	double TSA;
	//TSA= Total Spent Amount.

	outData<<"\n ------------------------------------------------------------------------------- \n";
	outData<<" TYPE OF SPENDS FOR KEETH TO PAY  "<<setw(24)<<right<<" SPENT AMOUNT"<<setw(22)<<right<<" TOTAL SPENT AMOUNT";
	outData<<"\n ------------------------------------------------------------------------------- \n";
	
	TSA=MAA.FS;
	outData<<"\n Food Shopping Amount Spent: ."<<setw(19)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.FS <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< TSA;
	TSA= TSA+MAA.CG;
	outData<<"\n Car Gas Amount Spent: ......."<<setw(19)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CG <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< TSA; 
	TSA= TSA+MAA.AR;
	outData<<"\n Apartment's Rent Bill: ......"<<setw(19)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.AR <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< TSA; 
	TSA= TSA+MAA.HIB;
	outData<<"\n Health Insurance Bill: ......"<<setw(19)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.HIB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< TSA; 
	TSA= TSA+MAA.CIB;
	outData<<"\n Car Insurance Bill: ........."<<setw(19)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CIB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< TSA; 
	
	outData<<"\n\n The Total Amount of "<< MAA.FN <<" spendings being paid by Keith is: "<< TSA; 
	outData<<"\n ------------------------------------------------------------------------------- \n";
	outData<<"\n\n ";
}

void MAA::AmericanExpGreenCard(ofstream& outData, MAA MAA)
{	
	double TSA;
	//TSA= Total Spent Amount.

	outData<<"\n ------------------------------------------------------------------------------- \n";
	outData<<" SPENDS IN AMERICAN EXP GREEN CARD"<<setw(24)<<right<<" SPENT AMOUNT"<<setw(22)<<right<<" TOTAL SPENT AMOUNT";
	outData<<"\n ------------------------------------------------------------------------------- \n";
	
	TSA=MAA.FS;
	outData<<"\n Food Shopping Amount Spent: ."<<setw(19)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.FS <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< TSA;
	TSA= TSA+MAA.CG;
	outData<<"\n Car Gas Amount Spent: ......."<<setw(19)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CG <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< TSA; 

	outData<<"\n\n The Total of Charges in the American Express Green Card is: "<< TSA; 
	outData<<"\n ------------------------------------------------------------------------------- \n";
    outData<<"\n\n ";
}

void MAA::MarksChecking(ofstream& outData, MAA MAA)
{
	outData<<"\n ------------------------------------------------------------------------------- \n";
	outData<<" TYPE OF SPENDS TO PAY WITH CHECK  "<<setw(23)<<right<<" SPENT AMOUNT"<<setw(22)<<right<<" TOTAL SPENT AMOUNT";
	outData<<"\n ------------------------------------------------------------------------------- \n";
	MAA.TGA=0+MAA.MB;
	outData<<"\n Cell Phone Bill: .............."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.MB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TGA;
	MAA.TGA=MAA.TGA+MAA.HPB;
	outData<<"\n Home Phone Bill: .............."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.HPB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TGA;
	MAA.TGA=MAA.TGA+MAA.CB;
	outData<<"\n Cable Bill: ..................."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CB <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TGA; 
	MAA.TGA=MAA.TGA+MAA.GEB;	
	outData<<"\n Gass Electric Bill: ..........."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.GEB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TGA;
	MAA.TGA=MAA.TGA+MAA.MC;	
	outData<<"\n Mom's Cable Bill: ............."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.MC <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TGA; 
	MAA.TGA=MAA.TGA+MAA.GB;	
	outData<<"\n Both Gym Bills: ..............."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.GB <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TGA; 
	MAA.TGA=MAA.TGA+MAA.CPB;	
	outData<<"\n Chiropractor Bill for "<<MAA.n<<" visits:"<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<<MAA.CPB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TGA; 
	MAA.TGA=MAA.TGA+MAA.HC;	
	outData<<"\n HairCut Payment: .............."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.HC <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TGA; 
	MAA.TGA=MAA.TGA+MAA.CLB;	                                          
	outData<<"\n Cleaning Leady Bill: .........."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CLB<<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TGA; 
	MAA.TGA=MAA.TGA+MAA.TAB;	
	outData<<"\n Triple A R-S Assistance Bill: ."<<setw(17)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.TAB <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TGA; 				
	
	outData<<"\n\n The Total amount charged to Mark's Checking Account is: "<< MAA.TGA; 
	outData<<"\n ------------------------------------------------------------------------------- \n";
    outData<<"\n\n ";
}	

void MAA::date(ofstream& outData, int month)
{
		if (month==1)  { cout<<"Jenuary"<<endl;		outData<<setw(10)<<right<<"Jenuary";  } 
		if (month==2)  { cout<<"February"<<endl;	outData<<setw(10)<<right<<"February"; } 
		if (month==3)  { cout<<"March"<<endl;	    outData<<setw(10)<<right<<"March";    } 
		if (month==4)  { cout<<"April"<<endl;		outData<<setw(10)<<right<<"April";    } 
		if (month==5)  { cout<<"May"<<endl;			outData<<setw(10)<<right<<"May";      } 
		if (month==6)  { cout<<"June"<<endl;	    outData<<setw(10)<<right<<"June";     } 
		if (month==7)  { cout<<"July"<<endl;	    outData<<setw(10)<<right<<"July";	  } 
		if (month==8)  { cout<<"August"<<endl;		outData<<setw(10)<<right<<"August";   } 
		if (month==9)  { cout<<"September"<<endl;	outData<<setw(10)<<right<<"September";} 
		if (month==10) { cout<<"Octuber"<<endl;		outData<<setw(10)<<right<<"Octuber";  } 
		if (month==11) { cout<<"November"<<endl;	outData<<setw(10)<<right<<"November"; } 
		if (month==12) { cout<<"December"<<endl;	outData<<setw(10)<<right<<"December"; } 
}