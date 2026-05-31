// Program 7 part A2
// Luis Miguel Duran

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <DECL-32.H>
#include "110.h"

using namespace std;

int main()
{
	char buffer[100],reading[30];
	int relay,lenght,i,dmm;
    
    relay=ibdev(0,16,0,11,1,0);
	lenght = strlen("B9");
	ibwrt(relay,"B9",lenght);
	dmm = ibdev(BDINDEX, PRIMARY_ADDR_OF_DMM, SECONDARY_ADDR_OF_GPIB, TIMEOUT, EOTMODE, EOSMODE);
	    
	for(i=1;i<=6;++i)
	{
		Sleep(1000);
		ibwrt(relay,"A",1);
        itoa(i,buffer,7);
		lenght = strlen(buffer);
		ibwrt(relay,buffer,lenght);	

		ibwrt (dmm, "MEAS:RES?",9L);
		ibrd (dmm,reading,32L);t
		reading [ibcnt]='/0';
		cout<<"\n The measured resistance in the ladder section is:\t"<<reading<<"Omhs \n";

		Sleep(3000);
		ibwrt(relay,"B",1);
		itoa(i,buffer,7);	
		ibwrt(relay,buffer,lenght);
	}

    return 0;}
}
