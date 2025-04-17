#include<iostream>
using namespace std;

class slink
{
 struct  node
 {
  int info;
  node *link;
 }*start;
 public:
  void linklist();
  void create(int data);
  void add(int data);
  void after(int data,int loc);
  void del(int data);
                        void count();
                        void search(int data);
  void display();


};

void  slink::  linklist()
{
 start=NULL;
}
void slink::create(int data)
{
 node *r,*tmp;
 if(start==NULL)
 {
  tmp=new node;
  tmp->info=data;
  tmp->link=NULL;
  start=tmp;
 }
 else
 {
  tmp=start;
  while(tmp->link!=NULL)
   tmp=tmp->link;
  r=new node;
  r->info=data;
  r->link=NULL;
  tmp->link=r;
}
}
void slink::add(int data)
{
 node *tmp;
 tmp=new node;
 tmp->info=data;
 tmp->link=start;
 start=tmp;
}
void slink::after(int data,int  loc)
{
 node *tmp,*q;
 int i;
 q=start;
 for(i=0;i<loc-1;i++)
 {
  q=q->link;
  if(q==NULL)
  {
   cout<<"there are less than"<<loc<<"elements";
   return;
  }
 }
 tmp=new node;
 tmp->link=q->link;
 tmp->info=data;
 q->link=tmp;
}
void slink::del(int data)
{
 node *tmp,*q;
 if(start->info==data)
 {
  tmp=start;
  start=start->link;
  delete(tmp);
  return;
 }
 q=start;
 while(q->link!=NULL)
 {
  if(q->link->info==data)
  {
   tmp=q->link;
   q->link=tmp->link;
   delete tmp;
   return;
  }
  q=q->link;
 }
 if(q->link->info==data)
 {
  tmp=q->link;
  delete tmp;
  q->link=NULL;
  return;
 }
    cout<<"element "<<data<<"not found";
}
void slink::count()
{
struct node *q=start;
int cnt=0;
while(q!=NULL)
{
q=q->link;
cnt++;
}
cout<<"Number of elements"<<cnt;
}
void slink::search(int data)
{
struct node *ptr=start;
int pos=1;
while(ptr!=NULL)
{
if(ptr->info==data)
{
cout<<"element found at postion"<<pos;
return;
}
ptr=ptr->link;
pos++;
}
if(ptr==NULL)
{
cout<<"element not found";
}
}
void slink::display()
{
node *q=start;
if(start==NULL)
{
cout<<"list is empty";
return;
}
cout<<"list is:";
while(q!=NULL)
{
cout<<""<<q->info;
q=q->link;
}
}
int main()
{
int ch,n,m,pos,i;
 slink l;
 l.linklist();
 while(1)
 {
  cout<<"\n1.create\n";
  cout<<"2.add\n";
  cout<<"3.after\n";
   cout<<"4.del\n";
                         cout<<"5.count\n";
              cout<<"6.search\n";
                         cout<<"7.display\n";
  cout<<"8.exit\n";
  cout<<"\n enter your choice";
  cin>>ch;
  switch(ch)
  {
   case 1:
    cout<<"how many nodes created";
    cin>>n;
    for(i=0;i<n;i++)
    {
     cout<<"enter the element:";
     cin>>m;
     l.create(m);
    }
    break;
   case 2:
    cout<<"enter the element:";
    cin>>m;
    l.add(m);
    break;
   case 3:
    cout<<"enter the element:";
    cin>>m;
    cout<<"enter the element of position:";
    cin>>pos;
    l.after(m,pos);
    break;
   case 4:
    cout<<"enter the element deletion";
    cin>>m;
    l.del(m);
    break;

                                      case 5:
                                                 l.count();
                                                 break;
                case 6:
                                    cout<<"Enter the element to be search";
                                               cin>>m;
                                               l.search(m);
              break;
               case 7:
    l.display();
    break;
    case 8:

    exit(0);
    break;
   default:
    cout<<"incorrect choice";
        }

 }
return 0;
}
