
#include"FacebookPost.h"

int main()
{
	int x=0,i=0;
	wallpost poster;
	string user, comment;
	string addlike[100]; int index=0;

	wallpost();
	cout<<" The Name of the User is: \n " << poster.get_name()<<endl;
	cout<<" Comment: \n "<<poster.get_comment()<<endl;
	
	do
	{
	if(x==0)
	{
	poster.add(addlike, index);
	cout<<" Please Enter Your Username: \n ";
	poster.set_name(user);
	}
	if(x>0)
	{poster.comments(x);}

	cout<<" Please Enter Your Comment If Any: \n ";
	poster.set_comment(comment);

	cout<<"\n Thanks "<<poster.get_name()<<"! \n Do You Wish to See More comments from this User \n";
	cout<<" Please Enter 0 to Log Out or 1 to Continue\n ";
	cin>>i;
	cout<<endl;
	x++;
	}while(i!=0);

	return 0;
}
