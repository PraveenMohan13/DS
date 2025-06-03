boolean findCycle(node *head) 
{
  node *slow=head;
  node *fast=head;
  while(fast!=nullptr && fast->next!=nullptr)
  {
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
      return true; //if it's a cycle definitely it will meet each other for this method.
  }
  return false;  // if any pointer is reached null def it's not making cycle
}