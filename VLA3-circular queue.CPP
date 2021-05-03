#include<iostream.h>
#include<conio.h>
#include<process.h>
const int n=3;
void main()
{
int a[n], i, item, front, rear;
char ans='y';
front=-1;
rear=-1;
clrscr();
while(ans=='y'||ans=='Y')
{
cout<<"\nEnter an element to INSERT into the queue ";
cin>>item;
if((front==0 && rear==n-1)||(front==rear+1))
{
		     cout<<"\nOverflow";
		     getch();
		     break;
}
else
{
	if(rear==n-1)
	{
		rear=0;
		a[rear]=item;
	}
		else if(rear==-1)
	{
		front=rear=0;
		a[rear]=item;
	}
		else
	{
		rear++;
		a[rear]=item;
	}
}
cout<<"\nDo you want to continue [y/n] ?";
cin>>ans;
}

//DISPLAYING QUEUE ELEMENTS
cout<<"\nQueue is : "<<endl;
for(i=front;i<=rear;i++)
	cout<<a[i]<<"..";
cout<<"\nDo you want to delete from queue [y/n] ?";
cin>>ans;
while(ans=='y'||ans=='Y')
{
//DELETE FROM ARRAY QUEUE (CIRCULAR)
if(front==-1)
{
	cout<<"\nUnderflow";//queue empty
	break;
}
else
{
cout<<"\nElements being removed is: "<<a[front];
if(front==rear)
	front=rear=-1;
	else if(front==n-1)
		front=0;
	else
		front++;
}
cout<<"\nQueue after deletion is :"<<endl;
if(front==-1)
	cout<<" ";
else
for(i=front;i<=rear;i++)
	cout<<a[i]<<"..";
cout<<"\nDo you want to delete again [y/n] ?";
cin>>ans;
}
getch();
}



