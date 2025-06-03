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
      head->pre=temp;
      nn->next=head;
    }
    else
    {
      temp->next=nn;
      nn->pre=temp;
      head->pre=temp;
      nn->next=head;
      temp=temp->next;
    }
  }
  void dis()
  {
    cout<<head->data<<" ";
    temp=head->next;
    while(temp!=head)
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