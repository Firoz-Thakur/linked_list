
https://practice.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1#
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    // if(head==NULL)
    //  {
    //      *head1_ref=NULL;
    //      *head2_ref=NULL;
    //      return ;
    //  }
    
    // if(head->next==NULL)
    // {
    //   *head1_ref=head;
    //   *head2_ref=NULL;
    //   return ;
    // }
    //without above these two condition it is working fine ,, but make sure u also check above condition as well
    
    
    Node* slow=head;
    Node* fast=head->next;
    Node* temp=NULL;
    while(fast!=head && fast->next!=head)
    {
        slow=slow->next;
        temp=fast->next;
        fast=fast->next->next;
    }
    
    if(fast==head)
    {
        fast=temp;
       // printf("e");
    }
    
    fast->next=slow->next;
    *head2_ref=slow->next;
    slow->next=head;
    *head1_ref=head;
    
}
