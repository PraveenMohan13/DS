class node
{
  public:
  int data;
  node* next;
  node *pre;
  node(int d)
  {
    data=d;
    next=nullptr;
    pre=nullptr;
  }
};
class ll
{
  public:
  node* head=nullptr;
  node* temp=nullptr;
  void ins(int d)
  {
    node* nn=new node(d);
    if(head==nullptr)
    {
      head=nn;
      temp=nn;
    }
    else
    {
      temp->next=nn;
      nn->pre=temp;
      temp=temp->next;
    }
  }
  void dis()
  {
    temp=head;
    while(temp!=nullptr)
    {
      cout<<temp->data;
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