Delete a Node
Max Score: 5 | Difficulty: easy
Problem:
Write a function that deletes a node from a singly linked list given only a pointer to that node (not the head of the list).

Input Format:
The first line contains an integer N — the number of elements in the linked list.
The second line contains N space-separated integers — the elements of the linked list.
The third line contains an integer node_value — the value of the node to be deleted.

Output Format:
Print the updated linked list in the format:
value1 -> value2 -> ... -> valueN -> NULL
(If the node is deleted successfully).
If the node to be deleted does not exist, print:
Cannot delete this node!

Constraints:
1 ≤ N ≤ 10
4
4
 
Node values are integers in the range -10^5 to 10^5
The node_value to delete is guaranteed to be present in the linked list (except for edge cases like last node deletion).
Sample Input 1:
5
1 2 3 4 5
3

Sample Input 2:
4
5 10 15 20
20

Sample Output 1:
1 -> 2 -> 3 -> 4 -> 5 -> NULL
1 -> 2 -> 4 -> 5 -> NULL

Sample Output 2:
5 -> 10 -> 15 -> 20 -> NULL
Cannot delete this node!
205 -> 10 -> 15 -> 20 -> NULL

Note:There is a space after every number and symbol
=========================
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
  void rem(int data)
    {
      if(head->data==data)
      {
        head=head->next;
        return;
      }
        node *p=head;
        temp=head->next;
        while(temp!=nullptr)
        {
            if(temp->data==data)
            {
              p->next=temp->next;
              temp->next=nullptr;
              temp=p->next;
              return;
            }
            else
            {
              temp=temp->next;
              p=p->next;
            }
        }
        cout<<"Cannot delete this node!";
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
  int x;
  cin>>x;
  l.dis();
  l.rem(x);
  l.dis();
}