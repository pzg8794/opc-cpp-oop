/*
Name : Piter Garcia
Subje: BCS-120
Date : Nov 17, 2010
Discription : This program will allow any user to play the game of craps.
Also, it will allow him to play as many times he wants to and leave any time as soon as he finishes the round.
The money won will be accumulated, the lost will substracted from the accumulated money.
On the other hand, if you lose you lose everything you bet and if win your bet money doubles.
Finally, you will be able to double your money and bet as much as you want of the money won
Note: Minimum to bet is $1 dollar. */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
//sum= sum of dies
int sum, sum2, round=0,  key=1, bet_number, die1,die2;
double Money_bet,Total_Money2,Total_Money=0;

int main()
{
													//Name and Title
	cout<<"\n\n";			
	cout<<left<<setw(22)<< " Extra Credit #1 " <<setw(58)<<right<< " By  Piter Garcia\n " ;
	cout<<left<<setw(20)<< "________________ " <<setw(59)<<right<< " _________________ " ;
	cout<<"\n\n";
	cout<<right<<setw(61)<< " Creating a Craps Game with C++ Functions \n" <<setw(65)<<right<< " ================================================\n\n";
	cout<<"\n\n\n\n";

	setprecision(2);
		srand (time (NULL));						// activating random numbers for dies

													//Starting Game
		cout<<right<<setw(56)<< " << Welcome to the Craps Game >>\n ";
		cout<<setw(59)<<right<<" -----------------------------------\n\n ";
		
		Total_Money2=Total_Money=1000;
		cout<<"You have a fund of $"<<Total_Money2<<" dollars \n Do you want to play ? \n If so enter any number, otherwise enter 0\n ";
		cin>>Money_bet;	// key variable to exit or play again

	if(Money_bet!=0)								//Testing if you are playing or not
	{
		cout<<" Please enter below the Money you wish to bet \n ";
		cin>> Money_bet;
	

		if(Money_bet>Total_Money || Money_bet<1)	//Testing you do not exceed your funds
		{	
			while(key!=0)
			{	
				if(Money_bet<1)						//Testing for minimum to bet
					{	
						cout<<"\n\n Please enter another amount \n In this Casino a $1 dollar is the minimum you can bet \n ";
						cin>>Money_bet;

						if(Money_bet>1 && Money_bet<Total_Money)
								key=0;
						else if(Money_bet>1 && Money_bet>Total_Money)
							{
								cout<<"\n\n  Sorry! You do not have enough funds to bet $"<< Money_bet <<" dollars \n ";
								cout<<" You have $"<<Total_Money<<" dollars in funds to play \n ";
								cout<<" Please enter an amount that do not exceed your funds \n  ";
								cin>> Money_bet;
						
								if(Money_bet<=Total_Money)
								key=0;
							}
					}
				else if (Money_bet>Total_Money)
					{
						cout<<"\n\n  Sorry! You do not have enough funds to bet $"<< Money_bet <<" dollars \n ";
						cout<<" You have $1000 dollars in funds to play \n ";
						cout<<" Please enter an amount that do not exceed your funds \n  ";
						cin>> Money_bet;
					
						if(Money_bet<=Total_Money)
						key=0;	
					}

			}	
		}		
	}
		
		cout<<"\n\n";									//Main Loop

		while(Money_bet!=0)   //You will be playing untill you have no money.
	{						  //Hint: I also use this function to allow you
							  //to leave the game at anytime.
		Total_Money-=Money_bet;
	
		round++;
		cout<<"\n Round "<< round <<endl; 
		cout<<" Please enter the number to which you are betting \n ";
		cin>> bet_number;
		cout<<" Press any number to throw the dies \n ";
		cin>>sum;
		cout<<"\n Dies Rolling... \n ";//random sum of 2 dies
		die1= (rand () % 6)+ 1; 
		die2= (rand () % 6)+ 1;
		cout<<"\n Die#1 \t Die#2 \n ";
		cout<<setw(5)<<die1<<setw(8)<<die2<<"\n";
		sum=die1+die2;
		cout<<"\n You have got a "<<sum<<" \n\n ";

		
			
			if(sum==7 || sum==11)				// winning loop
			{
				cout<<"You have won Round "<< round<<" ! \n";
				
				cout<<" Now you have  won $"<<Money_bet<<" dollars \n\n";
				Money_bet*= 2;
			}

			else if(sum==2 || sum==3 || sum==12) //lossing loop
			{		
				cout<<"You have Lost Round "<< round <<" !\n";
				cout<<" Therefore you have lost $"<<Money_bet<<" dollars \n\n";
				Money_bet= 0;
			}
			else								 // points loop
			{
				cout<<"Round "<< round<<endl;
				cout<<" You Have "<<sum<<" Points \n You still can win! \n ";	
				cout<<"\n Press any number to throw the dies \n ";
				cin>>sum2;
				cout<<"\n Dies Rolling... \n ";//random sum of 2 dies
				die1= (rand () % 6)+ 1; 
				die2= (rand () % 6)+ 1;
				cout<<"\n Die#1 \t Die#2 \n ";
				cout<<setw(5)<<die1<<setw(8)<<die2<<"\n";
				sum2=die1+die2;
				cout<<"\n You have got a "<<sum2<<" \n\n ";
			
				while(sum2!=0)	
				{// Starting repeated loop untill winning or losing the round

					if (sum2!=7 && sum2!=sum)// Testing if it is a winning or losing sum 
					{
						cout<<"Round "<< round<<endl;
						cout<<" You Have "<<sum<<" Points \n\n Still can win! \n";	
						cout<<" Press any number to throw the dies \n ";
						cin>>sum2;
						cout<<"\n Dies Rolling... \n ";//random sum of 2 dies
						die1= (rand () % 6)+ 1; 
						die2= (rand () % 6)+ 1;
						cout<<"\n Die#1 \t Die#2 \n ";
						cout<<setw(5)<<die1<<setw(8)<<die2<<"\n";
						sum2=die1+die2;
						cout<<"\n You have got a "<<sum2<<" \n\n ";
					}
					else if(sum2==sum)// Winning Loop
					{
						cout<<"You have won Round "<< round <<" !\n";
						
						cout<<" Now you have won $"<<Money_bet<<" dollars \n\n";
						Money_bet*= 2;
						sum2=0;
					}
					else if (sum2==7)//Losing Loop
					{
						cout<<"You have Lost Round "<< round <<" !\n";
						cout<<" Therefore you have lost $"<<Money_bet<<" dollars \n\n";
						Money_bet= 0;
						sum2=0;
					}	
				}// Ending repeted loop 
			}				
																	 
			Total_Money+=Money_bet;
			
			if(Total_Money<1)					// Loop to keep playing After loosing funds
			 {
				cout<<"\n\n The Round "<<round<<" is Over! "<<endl;// End of the Round
				cout<<" You have lost a fund of $"<<Total_Money2<<" dollars \n Do you want to refill your funds to keep playing ? \n If so enter any number, otherwise enter 0\n ";
				cin>>Money_bet;	// key variable to exit or play again

				if(Money_bet!=0)// Loop to refill funds
				{
				cout<<"\n\n Please enter the amount you want to refill your funds with \n ";
				cin>>Total_Money;
				Total_Money2=Total_Money;
				}
			 }
			else if (Total_Money!=0)								// Loop to keep playing After without loosing funds
			 {
				cout<<"\n\n The Round "<<round<<" is Over! "<<endl; //End of the Round
				cout<<" You have $"<< Total_Money <<" dollars left to Play \n Do you want to keep playing ? \n If so enter any number, otherwise enter 0\n ";
				cin>>Money_bet;	// key variable to play again
			 }

			if (Money_bet>0)					// Testing to play again until Money_bet = 0	
			
			// Starting a new game after first round
			 {
				cout<<"\n\n  Welcome to the Craps Game Once Again \n "; 
				cout<<" You have $"<< Total_Money <<" dollars in funds to play \n ";
				cout<<" Please enter below the Money you wish to bet \n  ";
				cin>>Money_bet;

				if	(Total_Money<Money_bet || Money_bet<1)		//Checking bet money does not exceed money in funds
				{
					key=1;
					while(key!=0) 
					//Repeated loop until the money you bet does not exceed your funds
					{	if (Money_bet<1) //Minimum amount to bet
						{	cout<<"\n\n Please enter another amount \n In this Casino a $1 dollar is the minimum you can bet \n ";
							cin>>Money_bet;

							if(Money_bet>1 && Money_bet<Total_Money)
								key=0;
							else if(Money_bet>1 && Money_bet>Total_Money)
							{
								cout<<"\n\n  Sorry! You do not have enough funds to bet $"<< Money_bet <<" dollars \n ";
								cout<<" You have $"<<Total_Money<<" dollars in funds to play \n ";
								cout<<" Please enter an amount that do not exceed your funds \n  ";
								cin>> Money_bet;
						
								if(Money_bet<=Total_Money)
								key=0;
							}
						}
						else if (Money_bet>Total_Money)
						{
							cout<<"\n\n  Sorry! You do not have enough funds to bet $"<< Money_bet <<" dollars \n ";
							cout<<" You have $"<<Total_Money<<" dollars in funds to play \n ";
							cout<<" Please enter an amount that do not exceed your funds \n  ";
							cin>> Money_bet;
						
							if(Money_bet<=Total_Money)
							key=0;
						}
					} // Ending repeated loop
				 }//Ending new game test loop

			  }	
	} //End of Main Loop
			
														//END  OF THE GAME
																		
		if ( Total_Money>0 && Money_bet<=0 && round>0)	
		{
			if(Total_Money<Total_Money2)// Ending Game for winners
			{
				cout<<"\n\n Sorry You have lost part of your funds! \n\n You have played a total of "<< round <<" rounds \n";
				cout<<" You have won $0 dollars and your remaining funds are $" << Total_Money <<" dollars \n\n";
				cout<<" Better luck nex time \n\n Thanks for Playing \n\n";
			}
			else// Ending Game for those who lose part of their funds
			{
				cout<<"\n\n Congratulations ! \n\n You have played a total of "<< round <<" rounds \n";
				cout<<" You have kept your funds of $" << Total_Money2 <<" dollars \n";
				cout<<" You also have won a total of $" << Total_Money - Total_Money2 <<" dollars \n";
				cout<<" Therefore, you are leaving with a total amount of $"<< Total_Money <<" dollars \n\n Thanks for Playing \n\n";
			}
		}
		else if( Total_Money<=0 && Money_bet<=0 || round<=0)// Ending Game for losers and those who decide to not play
			if(round<=0)// Testing if you want to start playing the first round or not
			{
				cout<<" You have played a total of "<< round <<" rounds \n";
				cout<<" Therefore you have not won or lost anything \n";
				cout<<" We hope to see you around soon \n\n Have a nice day! \n\n ";
			}
			else //Ending Game for losers 
			{
				cout<<"\n\n Sorry ! \n\n You have played a total of "<< round <<" rounds \n";
				cout<<" and You have lost everything \n Good Luck for the next time! \n\n Thanks  for Playing \n\n ";
			}

	return 0;
}	