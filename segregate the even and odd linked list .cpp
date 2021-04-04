https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1#

class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* odd=NULL;
        Node* even=NULL;
        Node* temp=head;
        Node* oldod=NULL;
        Node* oldev=NULL;
        while(temp!=NULL)
        { 
            int val=temp->data;
            if(val%2==0)
            {
                if(even==NULL){
                  even=temp;
                  head=even;
                  oldev=even;
                }
                else{
                  even->next=temp;
                  even=even->next;
                }
            }
            else
            {
                 if(odd==NULL)
                 {
                  odd=temp;
                  oldod=odd;
                 }
                else{
                  odd->next=temp;
                  odd=odd->next;
                }
            }
         temp=temp->next;    
        }
        
     if(odd == NULL || even == NULL){
        return head;
    }
        
        even->next=oldod;
        odd->next=NULL;
        return head;
    }
};
