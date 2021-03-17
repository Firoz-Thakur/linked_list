https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1


class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* prev=NULL;
        node* fast=head->next;
        node* cur=head;
        int i=1;
        while(fast!=NULL && i<k)
        {
            cur->next=prev;
            prev=cur;
            cur=fast;
            fast=fast->next;
            i++;
        }
        cur->next=prev;
        
        if(fast!=NULL)
        {
            head->next=reverse(fast,k);
        }
        
    return cur;
    }
};
