Middle Element
Max Score: 5 | Difficulty: easy
Problem:
Write a program that finds the middle element of a singly linked list. If the list has an even number of elements, return the second middle element.

Input Format:
The first line contains an integer N — the number of nodes in the linked list.
The next N lines each contain one integer — the values of the linked list nodes in order.

Output Format:
If the linked list is empty (N = 0), print:
The linked list is empty.
Otherwise, print the middle element of the linked list.
If there are two middle elements (i.e., N is even), print the second middle element.

Constraints:
0 ≤ N ≤ 10
4
4
 
Each element is an integer in the range -10
5
5
  to 10
5
5
 
Sample Input 1:
5
1
2
3
4
5

Sample Output 1:
3

Sample Input 2:
0

Sample Output 2:
The linked list is empty.
==========================
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
  void dis()
  {
    node *temp=head;
    while(temp!=nullptr)
    {
      cout<<temp->data<<endl;
      temp=temp->next;
    }
  }
  void mid()
  {
    if(head==nullptr)
    {
      cout<<"The linked list is empty.";
      return;
    }
    node* slow=head;
    node* fast=head;
    while(fast!=nullptr && fast->next!=nullptr)
    {
      slow=slow->next;
      fast=fast->next->next;
    }
    cout<<slow->data;;
  }
};

int main()
{
  ll l;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    l.ins(x);
  }
  
  l.mid();
}