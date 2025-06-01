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
  node* h=nullptr;
  node* t=nullptr;
  public:
  void ins(int d)
  {
    node *nn=new node(d);
    if(h==nullptr)
    {
      h=nn;
      t=nn;
    }
    else
    {
      t->next=nn;
      t=nn;
    }
  }
  void dis()
  {
    t=h;
    while(t!=nullptr)
    {
      cout<<t->data;
      t=t->next;
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