#include "BillsComparision.h"

void MAA::TotalBill(ofstream& outData, MAA MAA)
{	outData<<"\n\n\n";
	outData<< " Comparing Accounts " <<setw(88)<<right<< " By  Piter Garcia\n " ;
	outData<< "-------------------"  << setw(87)<<right<< "----------------" ;
	outData<<"\n\n\n";
									
	outData<<right<<setw(76)<< " Bills and Account Management Program \n" <<setw(76)<<right<< " ====================================\n\n";
	outData<<"\n\n";	

	outData<<" Name: " <<setw(47)<<left<< MAA.FN<<setw(32)<<right<<"Date:"; MAA.date(outData, MAA.month); outData<<" "<<MAA.day<<MAA.T<<MAA.H<<", "<<MAA.year;
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";
	outData<<"\n Gross Amount: ................."<<setw(44)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.GA[0]  <<setw(15)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.GA[1];
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";
	outData<<" TYPE OF SPENDS FOR THE ENTIRE ACCOUNT "<<setw(16)<<right<<" FIRST AMOUNT"<<setw(21)<<right<<" SECOND AMOUNT"<<setw(12)<<right<<" DIFERENCE"<<setw(19)<<right<<" TOTAL DIFERENCE";
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";
//Keth Payments
	MAA.TSA[0]=MAA.FS[0];				MAA.TSA[1]=MAA.FS[1];				MAA.diff[0]=MAA.FS[0]- MAA.FS[1];	MAA.Tdiff[0]=MAA.diff[0];
	outData<<"\n Food Shopping Amount Spent: ."<<setw(16)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.FS[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.FS[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[0] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[0];
	MAA.TSA[0]= MAA.TSA[0]+MAA.CG[0];	MAA.TSA[1]= MAA.TSA[1]+MAA.CG[1];	MAA.diff[1]=MAA.CG[0]- MAA.CG[1];	MAA.Tdiff[1]=MAA.diff[0]+MAA.diff[1];
	outData<<"\n Car Gas Amount Spent: ......."<<setw(16)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CG[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.CG[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[1] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[1]; 
	MAA.TSA[0]= MAA.TSA[0]+MAA.AR[0];	MAA.TSA[1]= MAA.TSA[1]+MAA.AR[1];	MAA.diff[2]=MAA.AR[0]- MAA.AR[1];	MAA.Tdiff[2]=MAA.diff[0]+MAA.diff[2];
	outData<<"\n Apartment's Rent Bill: ......"<<setw(16)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.AR[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.AR[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[2] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[2]; 
	MAA.TSA[0]= MAA.TSA[0]+MAA.HIB[0];	MAA.TSA[1]= MAA.TSA[1]+MAA.HIB[1];	MAA.diff[3]=MAA.HIB[0]- MAA.HIB[1];	MAA.Tdiff[3]=MAA.diff[0]+MAA.diff[3];
	outData<<"\n Health Insurance Bill: ......"<<setw(16)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.HIB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.HIB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[3] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[3];
	MAA.TSA[0]= MAA.TSA[0]+MAA.CIB[0];	MAA.TSA[1]= MAA.TSA[1]+MAA.CIB[1];	MAA.diff[4]=MAA.CIB[0]- MAA.CIB[1];	MAA.Tdiff[4]=MAA.diff[0]+MAA.diff[4];
	outData<<"\n Car Insurance Bill: ........."<<setw(16)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CIB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.CIB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[4] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[4]; 
//Mark's Checking Account
	MAA.TSA[0]=MAA.TSA[0]+MAA.MB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.MB[1];	MAA.diff[0]=MAA.MB[0]-MAA.MB[1];
	outData<<"\n Cell Phone Bill: .............."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.MB[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.MB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[0] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[0];
	MAA.TSA[0]=MAA.TSA[0]+MAA.HPB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.HPB[1];	MAA.diff[1]=MAA.HPB[0]- MAA.HPB[1];	MAA.Tdiff[0]=MAA.diff[0]+MAA.diff[1];
	outData<<"\n Home Phone Bill: .............."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.HPB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.HPB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[1] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[0];
	MAA.TSA[0]=MAA.TSA[0]+MAA.CB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.CB[1];	MAA.diff[2]=MAA.CB[0]- MAA.CB[1];	MAA.Tdiff[1]=MAA.Tdiff[0]+ MAA.diff[2];
	outData<<"\n Cable Bill: ..................."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.CB[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.CB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[2] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[1]; 
	MAA.TSA[0]=MAA.TSA[0]+MAA.GEB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.GEB[1];	MAA.diff[3]=MAA.GEB[0]- MAA.GEB[1];	MAA.Tdiff[2]=MAA.Tdiff[1]+MAA.diff[3];	
	outData<<"\n Gass Electric Bill: ..........."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.GEB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.GEB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[3] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[2];
	MAA.TSA[0]=MAA.TSA[0]+MAA.MC[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.MC[1];	MAA.diff[4]=MAA.MC[0]- MAA.MC[1];	MAA.Tdiff[3]=MAA.diff[2]+MAA.diff[4];	
	outData<<"\n Mom's Cable Bill: ............."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.MC[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.MC[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[4] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[3]; 
	MAA.TSA[0]=MAA.TSA[0]+MAA.GB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.GB[1];	MAA.diff[5]=MAA.GB[0]- MAA.GB[1];	MAA.Tdiff[4]=MAA.diff[3]+MAA.diff[5];	
	outData<<"\n Both Gym Bills: ..............."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.GB[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.GB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[5] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[4]; 
	MAA.TSA[0]=MAA.TSA[0]+MAA.CPB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.CPB[1];	MAA.diff[6]=MAA.CPB[0]-MAA.CPB[1];	MAA.Tdiff[5]=MAA.diff[4]+MAA.diff[6];	
	outData<<"\n Chiropractor Bill for ("<<MAA.n[0]<<" and "<< MAA.n[1]<<") visits:"<<setw(6)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right << MAA.CPB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.CPB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[6] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[5]; 
	MAA.TSA[0]=MAA.TSA[0]+MAA.HC[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.HC[1];	MAA.diff[7]=MAA.HC[0]- MAA.HC[1];	MAA.Tdiff[6]=MAA.diff[5]+MAA.diff[7];	
	outData<<"\n HairCut Payment: .............."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.HC[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.HC[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[7] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[6]; 
	MAA.TSA[0]=MAA.TSA[0]+MAA.CLB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.CLB[1];	MAA.diff[8]=MAA.CLB[0]- MAA.CLB[1];	MAA.Tdiff[7]=MAA.diff[6]+MAA.diff[8];	
	outData<<"\n Cleaning Leady Bill: .........."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.CLB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.CLB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[8] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[7]; 
	MAA.TSA[0]=MAA.TSA[0]+MAA.TAB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.TAB[1];	MAA.diff[9]=MAA.TAB[0]- MAA.TAB[1];	MAA.Tdiff[8]=MAA.diff[7]+MAA.diff[9];	
	outData<<"\n Triple A R-S Assistance Bill: ."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.TAB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TAB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[9] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[8]; 				

	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";	
	outData<<"\n Totals:" <<setw(38)<<right<<" $ "<<setw(9)<< MAA.TSA[0] <<setw(14)<<right<<" $ "<<setw(7)<< MAA.TSA[1];
	if( MAA.TSA[0] < MAA.TSA[1])
	{outData<<"\n Status:			Negative\n Status Amount:   "<<setw(8)<<right<<MAA.Tdiff[8];}
	if( MAA.TSA[0] > MAA.TSA[1])
	{outData<<"\n Status:			Positive\n Status Amount:   "<<setw(8)<<right<<MAA.Tdiff[8];}
	if( MAA.TSA[0] = MAA.TSA[1])
	{outData<<"\n Status:			Neutral \n Status Amount:   "<<setw(8)<<right<<MAA.Tdiff[8];}
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";	

	outData<<"\n\n ";


	
}

void MAA::KeethPayments(ofstream& outData, MAA MAA)
{	
	double TSA[2];
	//TSA= Total Spent Amount.

	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";
	outData<<" TYPE OF SPENDS FOR KEITH TO PAY  "<<setw(19)<<right<<" FIRST AMOUNT"<<setw(26)<<right<<" SECOND AMOUNT"<<setw(7)<<right<<" DIFERENCE"<<setw(21)<<right<<" TOTAL DIFERENCE";
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";
	
	TSA[0]=MAA.FS[0];					TSA[1]=MAA.FS[1];	MAA.diff[0]=MAA.FS[0]- MAA.FS[1];	MAA.Tdiff[0]=MAA.diff[0];
	outData<<"\n Food Shopping Amount Spent: ."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.FS[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.FS[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[0];
	TSA[0]= TSA[0]+MAA.CG[0];	TSA[1]= TSA[1]+MAA.CG[1];	MAA.diff[1]=MAA.CG[0]- MAA.CG[1];	MAA.Tdiff[1]=MAA.diff[0]+MAA.diff[1];
	outData<<"\n Car Gas Amount Spent: ......."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CG[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.CG[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[1] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[1]; 
	TSA[0]= TSA[0]+MAA.AR[0];	TSA[1]= TSA[1]+MAA.AR[1];	MAA.diff[2]=MAA.AR[0]- MAA.AR[1];	MAA.Tdiff[2]=MAA.diff[0]+MAA.diff[2];
	outData<<"\n Apartment's Rent Bill: ......"<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.AR[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.AR[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[2] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[2]; 
	TSA[0]= TSA[0]+MAA.HIB[0];	TSA[1]= TSA[1]+MAA.HIB[1];	MAA.diff[3]=MAA.HIB[0]- MAA.HIB[1];	MAA.Tdiff[3]=MAA.diff[0]+MAA.diff[3];
	outData<<"\n Health Insurance Bill: ......"<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.HIB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.HIB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[3] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[3];
	TSA[0]= TSA[0]+MAA.CIB[0];	TSA[1]= TSA[1]+MAA.CIB[1];	MAA.diff[4]=MAA.CIB[0]- MAA.CIB[1];	MAA.Tdiff[4]=MAA.diff[0]+MAA.diff[4];
	outData<<"\n Car Insurance Bill: ........."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CIB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.CIB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[4] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[4]; 
	
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";	
	outData<<"\n Total Amount Being Paid By Keith" <<setw(11)<<right<<" $ "<<setw(9)<< TSA[0] <<setw(14)<<right<<" $ "<<setw(7)<< TSA[1];
	if( TSA[0] < TSA[1])
	{outData<<"\n Status:			Negative\n Status Amount:   "<<setw(8)<<right<<MAA.Tdiff[4];}
	if( TSA[0] > TSA[1])
	{outData<<"\n Status:			Positive\n Status Amount:   "<<setw(8)<<right<<MAA.Tdiff[4];}
	if( TSA[0] = TSA[1])
	{outData<<"\n Status:			Neutral \n Status Amount:   "<<setw(8)<<right<<MAA.Tdiff[4];}
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";	

}

void MAA::AmericanExpGreenCard(ofstream& outData, MAA MAA)
{	
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";
	outData<<" SPENDS IN AMERICAN EXP GREEN CARD"<<setw(19)<<right<<" FIRST AMOUNT"<<setw(26)<<right<<" SECOND AMOUNT"<<setw(13)<<right<<" DIFERENCE"<<setw(20)<<right<<" TOTAL DIFERENCE";
	outData<<"\n ------------------------------------------------------------------------------- \n";
	
	MAA.TSA[0]=MAA.FS[0];				MAA.TSA[1]=MAA.FS[1];				MAA.diff[0]=MAA.FS[0]- MAA.FS[1];	MAA.Tdiff[0]=MAA.diff[0];
	outData<<"\n Food Shopping Amount Spent: ."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.FS[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.FS[1]<<setw(6)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[0] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(8)<<setfill(' ')<<right<< MAA.diff[0];
	MAA.TSA[0]= MAA.TSA[0]+MAA.CG[0];	MAA.TSA[1]= MAA.TSA[1]+MAA.CG[1];	MAA.diff[1]=MAA.CG[0]- MAA.CG[1];	MAA.Tdiff[1]=MAA.diff[0]+MAA.diff[1];
	outData<<"\n Car Gas Amount Spent: ......."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right<< MAA.CG[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.CG[1]<<setw(6)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[1] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(8)<<setfill(' ')<<right<< MAA.diff[1]; 
	
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";	
	outData<<"\n Total Charges in American Exp Green Card" <<setw(3)<<right<<" $ "<<setw(9)<< MAA.TSA[0] <<setw(14)<<right<<" $ "<<setw(7)<< MAA.TSA[1];
	if( MAA.TSA[0] < MAA.TSA[1])
	{outData<<"\n Status:			Negative\n Status Amount:   "<<setw(8)<<right<<MAA.Tdiff[1];}
	if( MAA.TSA[0] > MAA.TSA[1])
	{outData<<"\n Status:			Positive\n Status Amount:   "<<setw(8)<<right<<MAA.Tdiff[1];}
	if( MAA.TSA[0] = MAA.TSA[1])
	{outData<<"\n Status:			Neutral \n Status Amount:   "<<setw(8)<<right<<MAA.Tdiff[1];}
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";	

}

void MAA::MarksChecking(ofstream& outData, MAA MAA)
{   
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";
	outData<<" TYPE OF SPENDS TO PAY WITH CHECK  "<<setw(20)<<right<<" FIRST AMOUNT"<<setw(21)<<right<<" SECOND AMOUNT"<<setw(12)<<right<<" DIFERENCE"<<setw(19)<<right<<" TOTAL DIFERENCE";
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";
	
    MAA.TSA[0]=0;	MAA.TSA[1]=0;
    MAA.TSA[0]=MAA.TSA[0]+MAA.MB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.MB[1];	MAA.diff[0]=MAA.MB[0]-MAA.MB[1];
	outData<<"\n Cell Phone Bill: .............."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.MB[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.MB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[0] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[0];
	MAA.TSA[0]=MAA.TSA[0]+MAA.HPB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.HPB[1];	MAA.diff[1]=MAA.HPB[0]- MAA.HPB[1];	MAA.Tdiff[0]=MAA.diff[0]+MAA.diff[1];
	outData<<"\n Home Phone Bill: .............."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.HPB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.HPB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[1] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[0];
	MAA.TSA[0]=MAA.TSA[0]+MAA.CB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.CB[1];	MAA.diff[2]=MAA.CB[0]- MAA.CB[1];	MAA.Tdiff[1]=MAA.Tdiff[0]+ MAA.diff[2];
	outData<<"\n Cable Bill: ..................."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.CB[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.CB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[2] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[1]; 
	MAA.TSA[0]=MAA.TSA[0]+MAA.GEB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.GEB[1];	MAA.diff[3]=MAA.GEB[0]- MAA.GEB[1];	MAA.Tdiff[2]=MAA.Tdiff[1]+MAA.diff[3];	
	outData<<"\n Gass Electric Bill: ..........."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.GEB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.GEB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[3] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[2];
	MAA.TSA[0]=MAA.TSA[0]+MAA.MC[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.MC[1];	MAA.diff[4]=MAA.MC[0]- MAA.MC[1];	MAA.Tdiff[3]=MAA.diff[2]+MAA.diff[4];	
	outData<<"\n Mom's Cable Bill: ............."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.MC[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.MC[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[4] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[3]; 
	MAA.TSA[0]=MAA.TSA[0]+MAA.GB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.GB[1];	MAA.diff[5]=MAA.GB[0]- MAA.GB[1];	MAA.Tdiff[4]=MAA.diff[3]+MAA.diff[5];	
	outData<<"\n Both Gym Bills: ..............."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.GB[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.GB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[5] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[4]; 
	MAA.TSA[0]=MAA.TSA[0]+MAA.CPB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.CPB[1];	MAA.diff[6]=MAA.CPB[0]-MAA.CPB[1];	MAA.Tdiff[5]=MAA.diff[4]+MAA.diff[6];	
	outData<<"\n Chiropractor Bill for ("<<MAA.n[0]<<" and "<< MAA.n[1]<<") visits:"<<setw(6)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right << MAA.CPB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.CPB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[6] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[5]; 
	MAA.TSA[0]=MAA.TSA[0]+MAA.HC[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.HC[1];	MAA.diff[7]=MAA.HC[0]- MAA.HC[1];	MAA.Tdiff[6]=MAA.diff[5]+MAA.diff[7];	
	outData<<"\n HairCut Payment: .............."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.HC[0] <<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.HC[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[7] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[6]; 
	MAA.TSA[0]=MAA.TSA[0]+MAA.CLB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.CLB[1];	MAA.diff[8]=MAA.CLB[0]- MAA.CLB[1];	MAA.Tdiff[7]=MAA.diff[6]+MAA.diff[8];	
	outData<<"\n Cleaning Leady Bill: .........."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.CLB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.CLB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[8] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[7]; 
	MAA.TSA[0]=MAA.TSA[0]+MAA.TAB[0];	MAA.TSA[1]=MAA.TSA[1]+MAA.TAB[1];	MAA.diff[9]=MAA.TAB[0]- MAA.TAB[1];	MAA.Tdiff[8]=MAA.diff[7]+MAA.diff[9];	
	outData<<"\n Triple A R-S Assistance Bill: ."<<setw(14)<<setfill('.')<<right<<" $ "<<setw(9)<<setfill(' ')<<right			<< MAA.TAB[0]<<setw(14)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.TAB[1]<<setw(5)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.diff[9] <<setw(12)<<setfill('.')<<right<<" $ "<<setw(7)<<setfill(' ')<<right<< MAA.Tdiff[8]; 				
	
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";	
	outData<<"\n Total Charges to Mark's Checking Account" <<setw(5)<<right<<" $ "<<setw(9)<< MAA.TSA[0] <<setw(14)<<right<<" $ "<<setw(7)<< MAA.TSA[1];
	if( MAA.TSA[0] < MAA.TSA[1])
	{outData<<"\n Status:			Negative";
	 outData<<"\n Status Amount:   "<<MAA.Tdiff[8];}
	if( MAA.TSA[0] > MAA.TSA[1])
	{outData<<"\n Status:			Positive";
	outData<<"\n Status Amount:   "<<MAA.Tdiff[8];}
	if( MAA.TSA[0] = MAA.TSA[1])
	{outData<<"\n Status:			Neutral";
	outData<<"\n Status Amount:   "<<MAA.Tdiff[8];}
	outData<<"\n ---------------------------------------------------------------------------------------------------------- \n";	
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