
#include <iostream>
#include <string>

using namespace std;
class wallpost
{

	string addlike[100];
	string addDislike[100];
	string postername;
	string comment;
	int index;

public:
	string get_name();
	string get_comment();
	void set_name(string user);	
	void set_comment(string comment);
	void set_LikeDislike(string);
	
	wallpost()
	{
	set_name(" Piter");
	set_comment(" I am Happy");
	}
};


