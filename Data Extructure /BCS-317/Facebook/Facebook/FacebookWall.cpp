#include"WallPost.h"


int main()
{
	string i, postername, postercomment; int x=0;
	wallpost poster;

	cout<<postername<<endl;
	cout<<postercomment<<endl;
	cout<<" Like or Dislike (L/D): \n";
	cin>>i;
	poster.set_LikeDislike(i);

	postername= poster.get_name();
	postercomment= poster.get_comment();
	
	poster.set_name(postername);
	poster.set_comment(postercomment);
	return 0;
}

string wallpost::get_name()
{	
	cout<<" Please Enter your Username \n";
	cin>>postername;

	return postername;
}
string wallpost::get_comment()
{	
	string str[1000];
	comment=" ";
	int i=0;
	cout<<" Please Enter your Comment \n";
    do
	{
	comment=str[i];
	cin>>str[i];
	comment+=str[i];
	i++;
	}
	while(comment=="\n");
	return comment;
}

void wallpost::set_name(string user)
{
	cout<<" User Name : "<<user<<endl;
}

void wallpost::set_comment(string comment)
{
	cout<<" Commented : "<<comment<<endl;
}

void wallpost::set_LikeDislike(string i)
{
	index=0;
	if(i=="l" || i=="L")
	{
		addlike[index]=postername;
		index++;
	}
	else if(i=="d" || i=="D")
	{
		addDislike[index]=postername;
		index++;
	}
	

}