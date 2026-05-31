// Diamela Duverge E.
// Resistor Reading
// EET-110
// A 8



#include "stdafx.h"

#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

#include <windows.h>
#include <decl-32.h>

#include "110.h"


int main()
{
     	
     int relay, dmm,i,length;
	 char Buffer[100], reading [30];
     
     relay=ibdev(0,16,0,11,1,0);	//RELAY HP 59306 address
	 dmm = ibdev(BDINDEX, PRIMARY_ADDR_OF_DMM, SECONDARY_ADDR_OF_GPIB, TIMEOUT, EOTMODE, EOSMODE);
	
	printf("\t\tDC Measurements\n\n");
	 for (i =1; i <= 6; ++i)
	 {
	_itoa_s(i,Buffer,7);
   
	ibwrt(relay,"A",1);
	length = strlen("Buffer");
	ibwrt(relay,Buffer,length);
Sleep(2000);
 ibwrt(dmm,"MEAS:DC?",10L);   /* DC Measurements */
 ibrd(dmm,reading,32L);
 reading[ibcnt]='\0';
 
 
 printf("\n Node Measured in volts V%d=%s ",i,reading); 

	Sleep(2000);
  
	ibwrt(relay,"B",1);
	
	ibwrt(relay,Buffer,1);
Sleep(1000);

	 }
	 
return 0;
}