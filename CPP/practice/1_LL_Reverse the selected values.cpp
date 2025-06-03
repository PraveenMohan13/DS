Reverse the selected values.
Max Score: 5 | Difficulty: easy
Problem:
Write a Program on one linked list which contains N integers. From that linked list, 
you have to consider only even integer values. And after that, your task is to reverse the selected even integer values.

Input Format:
The first line contains an integer N — the number of elements in the linked list.
The second line contains N space-separated integers — the values to be inserted into the linked list.

Output Format:
First line: Print the complete linked list in the format:
value1 -> value2 -> ... -> valueN -> NULL
Second line: Print the even values in reverse order in the format:
evenValueK -> ... -> evenValue2 -> evenValue1 -> NULL
(If there are no even numbers, print NULL)

Constraints:
1 ≤ N ≤ 10
4
4
 
Each element is an integer in the range -10
5
5
  to 10
5
5
 
Sample Input:
7
1 2 3 4 5 6 7

Sample Output:
1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> NULL
6 -> 4 -> 2 -> NULL
========================================

#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

class node
{
  public:
  int data;
  node* next;
  node*pre;
  node(int d)
  {
    data=d;
    next=nullptr;
    pre=nullptr;
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
      nn->pre=t;
      t=t->next;;
    }
  }
  void dis()
  {
    node *temp=h;
    while(temp!=nullptr)
    {
      cout<<temp->data<<" -> ";
      temp=temp->next;
    }
    cout<<"NULL"<<endl;;
  }
  void predis()
  {
    node *temp=t;
    while(t!=nullptr)
    {
      if(t->data%2==0)
        cout<<t->data<<" -> ";
      t=t->pre;
    }
    cout<<"NULL";
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
  
  l.dis();
  l.predis();
}