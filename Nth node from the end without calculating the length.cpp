Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

Example:
Input:
2
9 2
1 2 3 4 5 6 7 8 9
4 5
10 5 100 5
Output:
8
-1

int getNthFromLast(Node *head, int n)
{
       // Your code here
    Node* temp=head;
    for(int i=1;i<n;i++)
    {
        if(temp->next==NULL)
         return -1;
        temp=temp->next;
    }
  Node* slow=head;
   while(temp->next!=NULL)
   {
       temp=temp->next;
       slow=slow->next;
   }
   return slow->data;
}
