
#include"FacebookPost.h"

using namespace std;

string wallpost::get_name()
{
	
	return postername;
}
string wallpost::get_comment()
{
	
	return comment;
}

void wallpost::set_name(string user)
{
	cin>>user;
	postername=user;
}

void wallpost::set_comment(string com)
{
cin>>com;
comment=com;
}

void wallpost::add(string add[], int& index)
{
cout<<"\n Do You Like or Dislike it?: \n ";
cin>>addlike[index];
index++;
}

wallpost::wallpost()
	{
	postername=" Piter \n ";
	comment=" I Love Programming. Don't You? \n ";
	}
void wallpost::comments(int i)
{
	switch(i)
	{
		case 1:
				cout<<"\n User: Piter \n ";
				cout<<"Comment: I Think You Kind of Like my Program.  Don't You? \n";
				break;
		case 2:
				cout<<"\n User:  Piter \n ";
				cout<<"Comment: Well, Nice Day to Play on FaceBook. Isn't it? \n";
				break;
		case 3:
				cout<<"\n User: Piter \n ";
				cout<<"Comment: I'm so Exausted! I'm sorry but I am almost Leaving....\n Or Should I stay? \n";
				break;
		case 4:
				cout<<"\n User: Piter \n ";
				cout<<"Comment: Whatever, I'm Out of this!!!. LOL bye bye!!! \n";
				break;
		default:
				cout<<" Sorry!!!\n This User does not have any more comments available... \n Try later!!! \n\n";	
	}
}