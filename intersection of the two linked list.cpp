https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1#
Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* first=head1;
    Node* second=head2;
    Node* cor=NULL;
    Node* newcore;
    if(first==NULL || second==NULL)
     return NULL;
    
    
    while(first!=NULL and second!=NULL)
    {
       if(first->data==second->data)
       {
           Node* temp=new Node(first->data);
           if(cor==NULL)
           {
               cor=temp;
               newcore=cor;
           }
           else
           {
               cor->next=temp;
               cor=cor->next;
           }
           first=first->next;
           second=second->next;
       }
       else if((first->data)<(second->data))
       {
           first=first->next;
       }
       else
       {
          second=second->next;  
       }
    }
    return newcore;
    
}
