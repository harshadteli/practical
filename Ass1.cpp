#include<iostream>
using namespace std;
#define MAX 25
class stack
{
int a[MAX];
int top;
public:
stack()
{
top=-1;
}
void push(int);
int pop();
int isEmpty();
int isFull();
void disp();
};
void stack::push(int i)
{
top=top+1;
a[top]=i;
}
int stack::isFull()
{
if(top==MAX-1)
return 1;
else
return 0;
}
int stack::isEmpty()
{
if(top==-1)
return 1;
else
return 0;
}
int stack::pop()
{
int data=a[top];
top--;
return data;
}
void stack::disp()
{
if(isEmpty())
{
cout<<"\n stack is empty";
}
else
{
cout<<"\n Elements in stack are:";
for(int i=top;i>=0;i--)
cout<<"\t"<<a[i];
}
}
int  main()
{
int ch,x,i;
stack s;
while(1)
{
cout<<"\n";
cout<<"\n1.push";
cout<<"\n2.pop";
cout<<"\n3.display";
cout<<"\n4.exit";
cout<<"\nEnter your choice";
cin>>ch;
switch(ch)
{
case 1:
if(s.isFull())
{
cout<<"\nStack is full";
}
else
{
}
break;
case 2:
cout<<"\nEnter data to push";
cin>>x;
s.push(x);
if(s.isEmpty())
{
cout<<"\nStack is Empty";
}
else
{
}
break;
case 3:
x=s.pop();
cout<<"\nPopped element is"<<x;
s.disp();
break;
case 4:
exit(0);
default:
cout<<"incorrect choice";
}
}
return 0;
}
