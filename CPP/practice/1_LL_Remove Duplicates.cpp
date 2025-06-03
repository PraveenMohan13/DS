Remove Duplicates
Max Score: 5 | Difficulty: easy
Problem:
Write a program to implement a function that removes duplicate elements from a sorted linked list, ensuring that only unique elements remain.

Input Format:
The first line contains an integer N — the number of elements in the linked list.
The second line contains N space-separated integers — the elements of the sorted linked list.

Output Format:
Print the linked list after removing duplicates in the format:
value1 -> value2 -> ... -> valueN -> NULL
There should be a space after every number and symbol (->).

Constraints:
1 ≤ N ≤ 10
4
4
 
Node values are integers in the range -10
5
5
  to 10
5
5
 
The linked list is sorted in non-decreasing order.
Sample Input:
5
1 2 3 4 5

Sample Output:
1 -> 2 -> 3 -> 4 -> 5 -> NULL
1 -> 2 -> 3 -> 4 -> 5 -> NULL

Note:There is a space after every number and symbol
================================
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
      cout<<temp->data<<" -> ";
      temp=temp->next;
    }
    cout<<"NULL"<<endl;
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
  l.rem();
  l.dis();
}