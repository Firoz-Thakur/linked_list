
Node* reverse(Node *head)
    {
        // code here
        // return head of reversed list
       Node* slow=NULL;
       Node* curr=head;
       Node* fast=head->next;
        while(fast!=NULL)
        {
            curr->next=slow;
            slow=curr;
            curr=fast;
            fast=fast->next;
        }
    curr->next=slow;    
     return curr;
    }
bool isPalindrome(Node *head)
{
    //Your code here
        Node* slow=head;
        Node*  fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        } 
        fast=head;
        slow=reverse(slow);
        while(slow!=NULL)
        {
            if(fast->data!=slow->data)
            {
                return false;
            }  
            slow=slow->next;
            fast=fast->next;
        } 
        return true;
}

