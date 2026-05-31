//#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
class wallpost
{

	string addlike[100];
	string postername;
	string comment;
	int index;

public:
	string get_name();
	string get_comment();
	void set_name_and_comment(string user, string com);	
	void addlike(string addlike, int index);
};


string wallpost::get_name()
{	
	cout<<" Please Enter your Username";
	cin>>postername;

	return postername;
}
string wallpost::get_comment()
{

	cout<<" Please Enter your Comment";
	cin>>comment;

	return comment;
}

void wallpost::set_name_and_comment(string user, string com)
{
	postername=user;
	comment=com;
}