int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node* first=head1;
    Node* second=head2;
    int l1=0;
    int l2=0;
    while(first!=NULL)
    {
        first=first->next;
        l1++;
    }
    while(second!=NULL)
    {
        second=second->next;
        l2++;
    }
   int d=l1-l2;
   if(l2>l1)
   {
      swap(head1,head2);
      d=l2-l1;
   }
    for(int i=0;i<d;i++)
    {
       head1=head1->next;   
    }
  
   while(head1!=NULL && head2!=NULL)
   {
       if(head1==head2)
        return head1->data;
       head1=head1->next;
       head2=head2->next;
   }
    return -1;
}
