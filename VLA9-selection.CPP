#include<iostream.h>
#include<conio.h>
void selsort(int ar[],int size)
{int small,pos,tmp;
for(int i=0;i<size;i++)
{small=ar[i];pos=i;
for(int j=i+1;j<size;j++)
{if (ar[j]<small)
{small=ar[j];
pos=j;
}}
tmp=ar[i];
ar[i]=ar[pos];
ar[pos]=tmp;
}}
void main()
{clrscr();
int ar[50],n;
cout<<"Enter the limit of the array\n";
cin>>n;
cout<<"\nEnter "<<n<<" numbers\n";
for(int i=0;i<n;i++)
cin>>ar[i];
selsort(ar,n);
cout<<"\nSorted array is ";
for(i=0;i<n;i++)
cout<<ar[i]<<" ";
getch();
}
