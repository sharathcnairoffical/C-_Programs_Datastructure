#include<iostream.h>
#include<conio.h>
struct node
{
	int info;
	node *link;
}*front, *rear, *ptr, *t1;
void main()
{
char ans;
front=rear=NULL;
clrscr();
do
{
	ptr=new node;
	cout<<"\nEnter an element to insert into Q";
	cin>>ptr->info;
ptr->link=NULL;
if(rear==NULL)
		front=rear=ptr;
	else
	{
		rear->link=ptr;
		rear=ptr;
	}
cout<<"\nDo you want to insert another element into Q [y/n] ?";
cin>>ans;
}while(ans=='y'||ans=='Y');
cout<<"\nThe QUEUE is : \n";
for(ptr=front;ptr!=NULL;ptr=ptr->link)
	cout<<ptr->info<<"..";
cout<<"\nDo you want to delete from QUEUE [y/n] ?";
cin>>ans;
while(ans=='y'||ans=='Y')
{
if(front==NULL)
{
	cout<<"\nQueue is empty";
	getch();
	break;
}
cout<<"\nElement being deleted is "<<front->info;
t1=front;
delete t1;
if(front==rear)
	front=rear=NULL;
else
	front=front->link;
cout<<"\nQueue after deletion is \n";
for(ptr=front;ptr!=NULL;ptr=ptr->link)
	cout<<ptr->info<<"..";
cout<<"\nDo you want to delete again [y/n] ?";
cin>>ans;
}
getch();
}





       
