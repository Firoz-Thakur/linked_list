//without changig the links.
https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

class Solution
{
    public:
    Node* segregate(Node *head) {
        
        // Add code here
        int cnt[3]={0};
        Node* temp=head;
        while(temp!=NULL)
        {
            cnt[temp->data]++;
            temp=temp->next;
        }
        Node* newhead=head;
        int i=0;
        while(newhead!=NULL)
        {
            if(cnt[i]==0)
            {
                i++;
            }
            else
            {
                  while(newhead!=NULL && cnt[i]!=0)
                  {
                      newhead->data=i;
                      newhead=newhead->next;
                      cnt[i]--;
                  }
            }
        }
        return head;
    }
};
