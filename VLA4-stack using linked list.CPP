#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	struct node
	{
		int info;
		node *next;
	}*top, *newptr, *t;
	char ans;
clrscr();
top=NULL;
cout<<"Push";
do
{
	newptr=new node;
	if(newptr==NULL)
	{
		cout<<"\nCannot create new node";
		getch();
		exit(0);
	}
	cout<<"\nEnter node to be inserted";
	cin>>newptr->info;
	newptr->next=NULL;
	cout<<"\nEntered element is "<<newptr->info;
	if(top==NULL)
	{
		top=newptr;
	}
	else
	{
		newptr->next=top;
		top=newptr;
	}
	cout<<"\nDo you want to insert more nodes [y/n] ?";
	cin>>ans;
}while(ans=='y'||ans=='Y');
cout<<"\nThe stack elements are \n";
newptr=top;
while(newptr!=NULL)
{
	cout<<newptr->info<<endl;
	newptr=newptr->next;
}
cout<<"\nDo you want to pop [y/n] ?";
cin>>ans;
while(ans=='y'||ans=='Y')
{
	if(top==NULL)
	{
		cout<<"\nUnderflow";
		break;
	}
	else
	{
		cout<<"\nElement being poped is "<<top->info;
		t=top;
		delete t;
		top=top->next;
	}
	cout<<"\nThe stack elements are \n";
	newptr=top;
	while(newptr!=NULL)
	{
		cout<<newptr->info<<endl;
		newptr=newptr->next;
	}
	cout<<"\nDo you want to pop [y/n] ?";
	cin>>ans;
}
getch();
}


