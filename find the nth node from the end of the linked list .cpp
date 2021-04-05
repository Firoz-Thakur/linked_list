https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1#

int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* fast=head;
       Node* slow=head;
       for(int i=0;i<n;i++)
       {
           if(fast==NULL)
            return -1;
           fast=fast->next;
           
       }
       
       while(fast!=NULL)
       {
           slow=slow->next;
           fast=fast->next;
       }
       return slow->data;
       
    
}
