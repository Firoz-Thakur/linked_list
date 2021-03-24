https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1#
lass Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        if(head->next==NULL)
         return head;
        
        Node* temp=compute(head->next);
        
        if(temp->data > head->data)
          return temp;
        else
        head->next=temp;
        return head;
        
    }
    
};
