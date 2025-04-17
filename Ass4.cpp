/* menu driven program for searching*/
#include <iostream>
#include<cstdlib>
using namespace std;
class linear
{
int arr[10],i,num,l,pos,n,search,first,last,middle;
public:
void l_search();
void b_search();
};
void linear::l_search()
{
cout<<"enter array size:";
cin>>n;
cout<<"enter array element:";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
int c=0;
cout<<"enter number to be search:";
cin>>num;
for(i=0;i<n;i++)
{
if(arr[i]==num)
{
c=1;
pos=i+1;
break;
}
}
if(c==0)
{
cout<<"number not found";
}
else
{
    cout<<num<<"found at position"<<pos;
}
}

void linear::b_search()
{
cout<<"enter array size:";
cin>>n;
cout<<"enter array element:";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
int flag=0;
cout<<"enter number to be search:";
cin>>search;
first=0;
last=n-1;
while (first<=last)
{
middle=(first+last)/2;
if(arr[middle]==search)
{
cout<<search<<"found at location"<<middle+1<<"\n";
flag=1;
break;
}
if(arr[middle]<search)
{
first=middle+1;
}
else
{
last=middle-1;
}
}
if(flag==0)
{
cout<<"value not found"<<"\n";
}
}
int main()
{
linear l;
int ch;
while(1)
{
cout<<"\n\t*************OUTPUT IS*********";
cout<<"\n\n\tSerching******";
cout<<"\n\n\t1 Linear Serach";
cout<<"\n\n\t2 Binary Search";
cout<<"\n\n\t3 Exit";
cout<<"\n\n\t select your choice=";
cin>>ch;
switch(ch)
{
case 1:
l.l_search();
break;
case 2:
l.b_search();
break;
case 3:
exit(0);
break;
default:
cout<<"Enter correct choice";
}
}
return 0;
}
