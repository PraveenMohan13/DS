Checking the order
Max Score: 5 | Difficulty: easy
Problem:
Write a program on the below scenario
You have a sorted linked list. The linked list contains the ascending order data. But some of the data is repeated. Your task is to remove the duplicated data and print the original linked list.

Input Format:
The first line contains an integer N — the number of nodes in the linked list.
The second line contains N space-separated integers in ascending order (may include duplicates).

Output Format:
Print the linked list after removing duplicates.
Each unique element should be printed on a new line in ascending order.

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
 
The input linked list is already sorted in ascending order
Sample Input:
8
1 1 2 3 3 3 4 4

Sample Output:
1
2
3
4
=========================
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
    node *temp=head;
    while(temp!=nullptr)
    {
      cout<<temp->data<<endl;
      temp=temp->next;
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