Split a Linked List into Two Halves
Max Score: 5 | Difficulty: easy
Problem:
Write a program to implement a function that splits a linked list into two halves. If the list has an odd number of nodes, the first half should have one more node than the second half.

Input Format:
The first line contains an integer N — the number of elements in the linked list.
The second line contains N space-separated integers — the elements of the linked list.

Output Format:
If the linked list is not empty, print the original linked list in the format:
value1 -> value2 -> ... -> valueN -> NULL
Then, print the two halves of the linked list:
First half: value1 -> value2 -> ... -> valueM -> NULL
Second half: valueM+1 -> ... -> valueN -> NULL (If the list has an odd number of nodes, the first half should have one more node than the second half.)
If the list is empty (N = 0), print:
List is empty
List is empty
List is empty

Constraints:
0 ≤ N ≤ 10
4
4
 
Node values are integers in the range -10
5
5
  to 10
5
5
 
Sample Input 1:
4
1 2
3 4

Sample Output 1:
1 -> 2 -> 3 -> 4 -> NULL
1 -> 2 -> NULL
3 -> 4 -> NULL

Sample Input 2:
0

Sample Output 2:
List is empty
List is empty
List is empty

Note:There is a space after every number and symbol
======================
#include <iostream>
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
  node* temp=nullptr;
  node* head2=nullptr;
  public:
  node* ins(node *head,int data)
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
      return head;
    }
  void dis(node *head)
  {
    node *temp=head;
    while(temp!=nullptr)
    {
      cout<<temp->data<<" -> ";
      temp=temp->next;
    }
    cout<<"NULL";
  }
  node* mid(node *head)
  {
    if(head==nullptr)
    {
      cout<<"List is empty"<<endl;
      return nullptr;
    }
    node* slow=head;
    node* fast=head->next;
    while(fast!=nullptr && fast->next!=nullptr)
    {
      slow=slow->next;
      fast=fast->next->next;
    }
    node* y=slow->next;
    slow->next=nullptr;
    return y;
  }
};

int main()
{
  ll l;
  int n;
  cin>>n;
  node*head=nullptr;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    head=l.ins(head,x);
  }
  l.dis(head);
  node *head2=l.mid(head);
  cout<<endl;
  l.dis(head);
  cout<<endl;
  l.dis(head2);
}