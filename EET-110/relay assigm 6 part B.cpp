// relay assigm 6 part B.cpp : main project file.

// RELAY2.cpp : main project file.
// relay2.cpp : main project file.
// Adner Ramos.
// EET-110.

#include "stdafx.h"
/* RELAY ACTUATOR - EXAMPLE #2 */


#include <string.h>
#include <stdio.h>
#include <conio.h>

#include <windows.h>
#include <decl-32.h>



int main()
{
     int relay,length;
	 int i;
	 char x[30];
     
     relay=ibdev(0,16,0,11,1,0);

	 
	 for (;;)
	 {
		 i=0;
		
		for (i=0; i<=6; ++i)

		{
			

			ibwrt (relay, "A", 1);
			itoa (i, x, 6); //used to conver from interger to string.
			ibwrt (relay, x, 1);
			
		}
	 }

	 for (;;)
	 {
		 i=0;
		
		 for (i=0; i<=6; ++i)
		 {
			 
			 ibwrt (relay, "B", 1);
			 itoa (i, x, 7);
			 ibwrt (relay, x, 1);
			 sleep (1000);
		 }

	 }
  
     length = strlen("B9");
     ibwrt(relay,"B9",length);
    
Sleep(2000);
     length = strlen("A1");
     ibwrt(relay,"A1",length);

Sleep(2000);
     length = strlen("A2");
     ibwrt(relay,"A2",length);

Sleep(2000);
     length = strlen("A3");
     ibwrt(relay,"A3",length);

Sleep(2000);  
     length = strlen("A4");
     ibwrt(relay,"A4",length);

Sleep(2000);    
     length = strlen("A5");
     ibwrt(relay,"A5",length);

Sleep(2000);
     length = strlen("A6");
     ibwrt(relay,"A6",length);

Sleep(2000);
     length = strlen("B1");
     ibwrt(relay,"B1",length);

Sleep(2000);
     length = strlen("B2");
     ibwrt(relay,"B2",length);
	 
Sleep(3000);
     length = strlen("B3");
     ibwrt(relay,"A6",length);



   
    return 0;
}
