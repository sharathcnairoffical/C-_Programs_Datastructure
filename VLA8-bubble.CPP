#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a[25],n,t;
cout<<"Enter the limit of the array\n";
cin>>n;
cout<<"\nEnter "<<n<<" numbers\n";
for(int i=0;i<n;i++)
{cin>>a[i];
}
for(i=0;i<n;i++)
{for(int j=0;j<n-i-1;j++)
{if(a[j]>a[j+1])
{t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}}}
cout<<"\nSorted array is ";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
getch();
}