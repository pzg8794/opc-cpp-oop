/*
Name : Piter Garcia
Subje: BCS-120
Date : Nov 21, 2010
Discription : This program will first read from an input file the grades and ID number of students.
Then, it will print out number of number of exams, grade, and average obtained by each student.
Finally, it will print the total number of student graded in the process along with a total average of their grades.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstring> 

using namespace std; 

void stringout();

int main()
{     
											// Author and Type of Lab.
	cout<<"\n\n";
	cout<< "  Lab Assignment # 12 " <<setw(58)<<right<< " By  Piter Garcia\n " ;
	cout<< " -------------------" <<setw(57)<<right<< "----------------" ;
	cout<<"\n\n\n";
	cout<<right<<setw(63)<< " While Statement Program using Nested Loops \n" <<setw(66)<<right<< " =================================================\n\n";
	cout<<"\n\n\n\n";
											// Data Title.
	cout<<right<<setw(58)<< " Testing for Vowels and Consonants \n" <<setw(60)<<right<< " --------------------------------------\n";
	stringout();      
	return 0;
} 

void stringout()
{    
	  
 int n[256]={0}; // An array to hold the count of all characters entered.  
 int consonants=0,vowels=0,characters=0; // Number of consonants, vowels, words and characters.  
 char user_input[500]; // The input name or word given by the user. 
 
 cout<<"\n Please enter any name or word to find out its vowels or consonants: \n "<<endl;  
   
 cout<<" "; cin.getline(user_input, 500); // Get the user input.  
 cout<<"\n The name or word you have entered is: \n "<<user_input<<endl;  
   
 for(int i=0;user_input[i]!='\0';i++) // Loop through the entire user input.  
 {  
  ++n[user_input[i]]; // Add 1 to the array holding the count of each character.  
   
      //Testing for vowels.
 vowels=n['A']+n['a']+n['E']+n['e']+n['I']+n['i']+n['O']+n['o']+n['U']+n['u'];  

	  //Testing for Consonants.
 consonants=n['B']+n['b']+n['C']+n['c']+n['D']+n['d']+n['F']+n['f']+n['G']+n['g']+n['H']+n['h']+n['J']+n['j']+n['K']+n['k']+n['L']+n['l']+n['M']+n['m']+n['N']+n['n']+n['P']+n['p']+n['Q']+n['q']+n['R']+n['r']+n['S']+n['s']+n['T']+n['t']+n['V']+n['v']+n['W']+n['w']+n['X']+n['x']+n['Y']+n['y']+n['Z']+n['z'];  
	
 characters= vowels+consonants; //Calculating Characters.
 } 
 cout<<"\n This name or word has "<<characters<<" characters, "<<vowels<<" vowels and "<<consonants<<" consonants \n\n "; // data type  
 
}