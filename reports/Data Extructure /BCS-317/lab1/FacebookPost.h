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

	void comments(int);
	void set_name(string user);
	void set_comment(string com);
	void add(string add[100], int& index);

wallpost();

};


