#include<iostream.h>
#include<conio.h>
void main()
{
int a[10], top=-1, item, i ,n=10;
char ans;
clrscr();
cout<<"Push";
do
{
	cout<<"\nEnter item to be pushed";
	cin>>item;
	if(top==n-1)
		{
			 cout<<"\nOVERFLOW";
			 getch();
			 break;
		 }
		else
		{
			 ++top;
			 a[top]=item;
		}
		cout<<"\nDo you want to insert more items[y/n] ?";
		cin>>ans;
}while(ans=='y'||ans=='Y');
cout<<"\nThe stack elements are \n";
for(i=top; i>=0; i--)
			cout<<a[i]<<endl;
cout<<"Pop";
cout<<"\nDo you want to pop [y/n] ?";
cin>>ans;
while(ans=='y'||ans=='Y')
{
cout<<"\nPoping elements from stack\n";
	if(top==-1)
	{                cout<<"\nUnderflow";
			 getch();
			 break;
	}
	else
	{
			cout<<endl<<a[top];
			 --top;
	{
	cout<<"\nThe stack elements are \n";
	for(i=top; i>=0;i--)
	 cout<<a[i]<<endl;
	cout<<"\nDo you want to pop again [y/n] ?";
	 cin>>ans;
}
getch();
}
}
}

