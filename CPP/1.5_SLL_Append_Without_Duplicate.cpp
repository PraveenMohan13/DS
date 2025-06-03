#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

class node
{
  public:
  int data;
  node* next;
  node(int d)
  {
    data=d;
    next=nullptr;
  }
};
class ll
{
  node* head=nullptr;
  node* temp=nullptr;
  public:
  void ins(int data)
    {
      node *nn=new node(data);
      if(head==nullptr)
      {
        head=nn;
        temp=nn;
      }
      else
      {
        node *t=head;
        while(t!=nullptr)
        {
          if(t->data==nn->data)
         	return;
            t=t->next;
        }
          temp->next=nn;
          temp=nn;
        }
      }
  void dis()
  {
    temp=head;
    while(temp!=nullptr)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
  }
};
int main()
{
  ll l;
  int n;
  while(cin>>n)
  {
    l.ins(n);
  }
  l.dis();
}
//-------------------------------------
#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

class node
{
  public:
  int data;
  node* next;
  node(int d)
  {
    data=d;
    next=nullptr;
  }
};
class ll
{
  node* head=nullptr;
  node* temp=nullptr;
  public:
  void ins(int data)
    {
      node *nn=new node(data);
      if(head==nullptr)
      {
        head=nn;
        temp=nn;
      }
      else
      {
          temp->next=nn;
          temp=nn;
      }
    }
  void rem()
    {
        node *p1;
        node *p2;
        temp=head;
        while(temp!=nullptr)
        {
            p1=temp;
            p2=temp->next;
            while(p2!=nullptr)
            {
                if(temp->data==p2->data)
                {
                    p1->next=p2->next;
                    p2->next=nullptr;
                    p2=p1->next;
                }
                else
                {
                    p1=p1->next;
                    p2=p2->next;
                }  
            }
            temp=temp->next;
        }
    }
  void dis()
  {
    temp=head;
    while(temp!=nullptr)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
  }
};
int main()
{
  ll l;
  int n;
  while(cin>>n)
  {
    l.ins(n);
  }
  l.rem();
  l.dis();
}