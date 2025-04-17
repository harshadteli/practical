/* menu driven sorting program for sorting*/
#include <iostream>
#include<cstdlib>
using namespace std;
class sort
{
int arr[50],n,i,j,pos,temp;
public:
void getdata();
void b_sort();
void i_sort();
void s_sort();
void q_sort(int [10],int,int);
void Sort();
void display();
};
void sort::getdata()
{
cout<<"\n\t******* OUTPUT IS********"<<endl;
cout<<"\n\tenter the array size";
cin>>n;
cout<<"\n\tenter array element";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
}
void sort::b_sort()
{
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
}
void sort::i_sort()
{
for(i=1;i<n;i++)
{
temp=arr[i];
j=i-1;
while((temp<arr[j])&&(j>=0))
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=temp;
}
}
void sort::s_sort()
{
for(i=0;i<n-1;i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(arr[pos]>arr[j])
pos=j;
}
if(pos!=i)
{
temp=arr[i];
arr[i]=arr[pos];
arr[pos]=temp;
}
}
}
void sort::Sort()
{
q_sort(arr,0,n-1);
}
void sort:: q_sort(int arr[10],int first,int last)
{
int pivot;
if(first < last)
{
pivot = first;
i = first;
j = last;
while(i < j)
{
while(arr[i] <= arr[pivot] && i < last)
i++;
while(arr[j] > arr[pivot])
j--;
if(i <j)
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
temp = arr[pivot];
arr[pivot] = arr[j];
arr[j] = temp;
q_sort(arr,first,j-1);
q_sort(arr,j+1,last);
}
}
void sort::display()
{
cout<<"\n\tarray after sorting :\n";
for(i=0;i<n;i++)
{
cout<<"\t"<<arr[i]<<"" ;
}
}
int main()
{
sort s;
int ch;
while(1)
{
cout<<"\n\t*************OUTPUT IS*********";
cout<<"\n\n\t1 Bubble Sort";
cout<<"\n\n\t2 Insertion Sort";
cout<<"\n\n\t3 Selection Sort";
cout<<"\n\n\t4 Quick Sort";
cout<<"\n\n\t5 Exit";
cout<<"\n\n\t select your choice=";
cin>>ch;
switch(ch)
{
case 1:
s.getdata();
cout<<"\tbubble sort";
s.b_sort();
s.display();
break;
case 2:
s.getdata();
s.i_sort();
s.display();
break;
case 3:
    s.getdata();
s.s_sort();
s.display();
break;
case 4:
    s.getdata();
s.Sort();
s.display();
break;
case 5:
    exit(0);
break;
default:
cout<<"Enter correct choice";
}
}
return 0;
}
