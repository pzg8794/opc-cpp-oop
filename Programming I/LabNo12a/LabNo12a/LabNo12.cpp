 /*
Name : Piter Garcia
Subje: BCS-120
Date : Nov 23, 2010
Discription: This program will read a name, full name or any word(s) or character(s) input by the user.
It wiil find the number of characters it has along with its vowels and constants and print them out.
*/
 #include <iostream>
 #include <iomanip>
 #include <string>

using namespace std;
void name_and_title();
bool isVowel(char);
int main()
{
int vowels=0, consonants=0, characters,j=0;
char val; // Holds each character to be tested
string name;



name_and_title();//calling header function to display name and title
cin.get(val);

cout<<"\n\n";	
 while(val!='\n') //looping untill user hit enter.
 {	
	  //reading every character input by user.
	if (val==' ')//checking for spaces in the input data.
		j++;

	if (isVowel(val)==true) //testing if it is a vowel or not.
	{
	vowels++;
	}

	else
	{
	consonants++;
	}
	name+=val;
	cin.get(val);
  }

 consonants-=j;
 characters = vowels + consonants; //finding characters.

 //displaying output.


 		cout<<"\n\n\n";				//Table data a complete description of any characters.

		cout<<setw(68)<<right<<" DESCRIPTION OF THE NAME(S) OR WORD(S) ENTERED  \n\n";
		cout<<setw(81)<<right<<"---------------------------------------------------------------------------- \n\n";
		cout<<setw(80)<<right<<" Complete Input Name(s) or Word(s)\n\n";
		cout<<setw(80)<<right<<"---------------------------------------------------------------------------- \n";
		cout<<setw(78)<<name<<endl;
		cout<<setw(81)<<right<<"---------------------------------------------------------------------------- \n\n";
		cout<<setw(41)<<right<<"Characteristics Classification \n\n";
		cout<<setw(80)<<right<<"---------------------------------------------------------------------------- \n";
		cout<<setw(14)<<right<<" Consonant(s)"<<"  "<<"Vowel(s)"<<"  "<<"Character(s)\n";
		cout<<setw(80)<<right<<"---------------------------------------------------------------------------- \n";
		cout<<setw(14)<<consonants<<setw(10)<<vowels<<setw(14)<<characters<<endl;
		cout<<setw(80)<<right<<"---------------------------------------------------------------------------- \n";


		cout <<"\n\n  ";

 return 0;
}

void name_and_title() //name and title head function
{
								// Author and Type of Lab.
	cout<<"\n\n";
	cout<< "  Lab Assignment # 12 " <<setw(58)<<right<< " By  Piter Garcia\n " ;
	cout<< " -------------------" <<setw(57)<<right<< "----------------" ;
	cout<<"\n\n\n";
	cout<<right<<setw(66)<< " NAME(S) AND WORD(S) CHARACTERS FINDER PROGRAM \n" <<setw(67)<<right<< " ================================================\n\n";
	cout<<"\n\n\n\n";

	cout << "  Please enter any Word(s) or Name(s) for a Complete Description: \n  ";
}
 bool isVowel(char val) //function to check if it is a vowel or a constant.
{
	int i=0;

switch(val)
{
case 'a':case 'A':
case 'e':case 'E':
case 'i':case 'I':
case 'o':case 'O':
case 'u':case 'U':
i++;
	break;
default:
	i=0;
}
	
if (i==1)
return true; //returning a vowel
else
return false; // returning a constant.

}