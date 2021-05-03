#include<iostream.h>
#include<conio.h>
#include<limits.h>
void inssort(int AR[],int size)
{int tmp,j;
AR[0]=INT_MIN;
for(int i=1;i<=size;i++)
{tmp=AR[i];
j=i-1;
while(tmp<AR[j])
{AR[j+1]=AR[j];
j--;
}
AR[j+1]=tmp;
}}
void main()
{int AR[50],n;
cout<<"Enter the limit of the array\n";
cin>>n;
cout<<"Enter the array elements\n";
for(int i=1;i<=n;i++)
cin>>AR[i];
inssort(AR,n);
cout<<"\nThe sorted array is shown below\n";
for(i=1;i<=n;i++)
cout<<AR[i]<<" ";
cout<<endl;
getch();
}
