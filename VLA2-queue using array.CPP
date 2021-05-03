#include<iostream.h>
#include<conio.h>
#include<process.h>
const int n=3;
void main()
{
int a[n],i,item,front,rear;
char ans='y';
front=-1;
rear=-1;
clrscr();
while (ans=='y'||ans=='Y')
{
cout<<"\nEnter an element to INSERT into the Queue ";
cin>>item;
if (rear==n-1)
{                cout<<"\nOVERFLOW";
		 getch();
		 break;
}
else if (rear==-1)
{
	     front=rear=0;
	     a[rear] = item;
}
else
{
	      rear++;
	      a[rear]=item;
}
cout<<"\nDo you want to continue [y/n]  ?";
cin>>ans;
}
//DISPLAYING QUEUE ELEMENTS
cout<<"\nQueue is :"<<endl;
for (i=front;i<=rear; i++)
		    cout<<a[i]<<"..";
cout<<"\nDo you want to delete from queue [y/n] ?";
cin>>ans;
while(ans=='y'||ans=='Y')
{
//DELETE FROM ARRAY QUEUE
if(front==-1)
{
		cout<<"\nUnderflow";//queue empty
		getch();
		break;
}
else
{
		cout<<"\nElement being removed is : "<<a[front];
		if(front==rear)
		front=rear=-1;
       else
			 front++;
}
cout<<"\nQueue after deletion is : "<<endl;
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

