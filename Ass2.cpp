#include<iostream>
using namespace std;
#define MAX 5
class queue
{
int front,rear;
int data[MAX];
public:
void insert(int);
void dele();
void display();
int ISFULL();
int ISEMPTY();
queue()
{
front=-1;
rear=-1;
}
};
int queue::ISFULL()
{
if(rear==MAX-1)
{
return(1);
}
else
{
return(0);
}
}
int queue::ISEMPTY()
{
if(front==-1||front>rear)
{
return(1);
}
else
{
return(0);
}
}
void queue::insert(int n)
{
if(front==-1)
front=0;
rear=rear+1;
data[rear]=n;
cout<<"\n "<<n<<"is inserted to queue";
}
void queue::dele()
{
int temp;
temp=data[front];
front=front+1;
cout<<"\n element"<<temp<<"is deleted";
}
void queue::display()
{
int i;
for(i=front;i<=rear;i++)
{
cout<<"\n"<<data[i];
}
}
int main()
{
int n,ch;
queue q;
while(1)
{
cout<<"\n queue menu\n";
cout<<"\n1.insert";
cout<<"\n2.delete";
cout<<"\n3.display";
cout<<"\n4.exit";
cout<<"\n enter your choice:\n";
cin>>ch;
switch(ch)
{
case 1:
if(q.ISFULL())
{
cout<<"\n queue is full";
}
else
{
cout<<"\n enter no.to insert";
cin>>n;
q.insert(n);
}
break;
case 2:
if(q.ISEMPTY())
{
cout<<"\n queue is full";
}
else
{
q.dele();
}
break;
case 3:
if(q.ISEMPTY())
{
cout<<"\n queue is empty";
}
else
{
q.display();
}
break;
case 4:
exit(0);
break;
default:
cout<<"\n wrong choice entered";
}
}
return 0;
}
