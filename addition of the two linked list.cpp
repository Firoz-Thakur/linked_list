https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1#



class Solution
{
    public:
   // Function to add two numbers represented by linked list.
    
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
       struct Node* slow=NULL;
       struct Node* curr=head;
        struct Node* fast=head->next;
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
    
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
       struct  Node* head1=reverseList(first);
       struct Node* head2=reverseList(second);
        struct Node* head3;
        
        int sum;
        int c=0;
        Node* last=NULL;
        while(head1 || head2 )
        {
            int a = head1 ? head1->data:0;
            int b=head2 ? head2->data:0;
            sum=a+b+c;
            c=sum/10;
            sum=sum%10;
            
          struct  Node* temp=new Node(sum);
            if(last==NULL)
            {
                head3=temp;
                last=temp;
            }
            else
            {
                temp->next=last; // add to the front, so that i not neee to reverse the linked list again
                last=temp;
            }
          if(head1)
           head1=head1->next;
          if(head2)
           head2=head2->next;
        }
        
        if(c!=0)
        {
           struct Node* temp2=new Node(c);
            temp2->next=last;
            last=temp2;
        }
        
        return last;
        
    }
};
