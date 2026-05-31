//==========================================================================
//	Author				: CYTRON TECHNOLOGIES SDN BHD
//	Project				: SK40C sample code for USB bootloader
//	Project description	: Blink LED1 and LED2 like police car
//
//==========================================================================

//	include
//==========================================================================
#include"p18f4550.h" 

//	configuration bit
//==========================================================================
//  Configuration bits has been configured in bootloader firmware.

//	define
//==========================================================================
#define	LED1	LATBbits.LATB6
#define	LED2	LATBbits.LATB7

#define	SW1		PORTBbits.RB0
#define	SW2		PORTBbits.RB1

#define	XTAL_FREQ	20MHZ	/* Crystal frequency in MHz */

#define	MHZ	*1000L			/* number of kHz in a MHz */
#define	KHZ	*1				/* number of kHz in a kHz */

#if	XTAL_FREQ >= 12MHZ
	#define	DelayUs(x)	{ unsigned char _dcnt; \
				  _dcnt = (x)*((XTAL_FREQ)/(12MHZ)); \
				  while(--_dcnt != 0) \
					  continue; }
#else
	#define	DelayUs(x)	{ unsigned char _dcnt; \
				  _dcnt = (x)/((12MHZ)/(XTAL_FREQ))|1; \
				  while(--_dcnt != 0) \
					  continue; }
#endif

//	function prototype
//==========================================================================
void init(void);
void DelayMs(unsigned char);

//	global variable
//==========================================================================

//	main function
//==========================================================================
void main(void) 
{
	unsigned char i;

	init();			// initialise PIC
	LED1 = 0;		// off LED1
	LED2 = 0;		// off LED2
	
	while(1)
	{		
		for(i=8; i>0 ; i--)		// looping for 8 times (4 times blink)
		{
			LED1 ^= 1;			// toggle LED1
			DelayMs(110);		// delay 110ms
		}		
		DelayMs(800);			// delay 800ms
		
		for(i=8; i>0 ; i--)		// looping for 8 times (4 times blink)
		{
			LED2 ^= 1;			// toggle LED2
			DelayMs(110);		// delay 110ms
		}
		DelayMs(800);			// delay 800ms
		
		while( !SW1 || !SW2 );	// Stop blinking if either SW1 or SW2 is being pressed
	}	
}


//	functions
//==========================================================================
void init(void)	// initialise function
{
	//tris
	TRISBbits.TRISB0=1;		//configure PORTB I/O direction 
	TRISBbits.TRISB1=1;		//configure PORTB I/O direction
	TRISBbits.TRISB6=0;		//configure PORTB I/O direction
	TRISBbits.TRISB7=0;		//configure PORTB I/O direction
}

void DelayMs(unsigned char cnt)	// delay function (mili second)
{
	#if	XTAL_FREQ <= 2MHZ
		do {
			DelayUs(996);
		} while(--cnt);
	#endif
	
	#if    XTAL_FREQ > 2MHZ	
		unsigned char	i;
		do {
			i = 4;
			do {
				DelayUs(250);
			} while(--i);
		} while(--cnt);
	#endif
}
