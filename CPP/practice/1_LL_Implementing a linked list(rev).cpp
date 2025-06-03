
Implementing a linked list
Max Score: 5 | Difficulty: easy
Problem:
Write a program on the below context
You and your friend started learning data structure and algorithm subjects. Your friend is facing a problem. He created a linked list; he wants to move the head node to the end node and wants to access the linked list from the updated head position. Help him to solve the problem. (Including Negative elements).

Input Format:
The first line contains an integer N — the number of nodes in the linked list.
The second line contains N space-separated integers — the elements of the linked list (can include negative numbers).

Output Format:
Print the elements of the linked list after moving the head node to the end.
Each element should be printed on a new line, starting from the new head.

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
6
10 25 15 40 35 50

Sample Output:
50
35
40
15
25
10
===============================

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
      t=nn;
    }
  }
  void dis()
  {
    node *temp=t;
    while(t!=nullptr)
    {
      cout<<t->data<<endl;
      t=t->pre;
    }
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
}