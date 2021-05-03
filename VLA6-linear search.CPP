#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a[10],n,s,f=0;
cout<<"Enter the number of arrays\n";
cin>>n;
cout<<"Enter the elements for array\n";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Enter the element to be searched\n";
cin>>s;
for(i=0;i<n;i++)
{if(a[i]==s)
{f=1;
cout<<"\nElement found at index "<<i<<" and positon "<<i+1;
break;
}}
if(f==0)
cout<<"Element not found";
getch();
}