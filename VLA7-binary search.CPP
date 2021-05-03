#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a[100],n,s,fnd=0,beg,end,mid;
cout<<"Enter the size of the array\n";
cin>>n;
cout<<"Enter the elements for the array\n";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"\nThe given array is ";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n\nEnter the element to be searched\n";
cin>>s;
beg=0;
end=n-1;
while(beg<=end)
{mid=(beg+end)/2;
if(a[mid]==s)
{cout<<"Element found at position "<<mid+1;
fnd=1;
break;
}
else if(s<a[mid])
end=mid-1;
else if(s>a[mid])
beg=mid+1;
}
if(fnd==0)
cout<<"\n Such an element doesn't exist";
getch();
}
