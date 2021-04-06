https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1#

class Solution
{
    public:
    //Function to reverse a linked list. 
  
  Node* head1;
  void reverse(Node* curr)
  {
      
      if(curr->next==NULL)
      {
          head1=curr;
          return; 
      }
      reverse(curr->next);
      Node* p=curr->next;
      p->next=curr;
      curr->next=NULL;
      
  }
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of ersed list
        reverse(head);
        return head1;
    }
};
  
