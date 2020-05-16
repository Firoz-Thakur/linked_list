void addNode(Node *head, int pos, int data)
{
   // Your code here
   
   
   Node* temp=head;
   Node* n=new Node(data);
  if(head=NULL)
  {
    head=n;
    return ;
  }
//  Node* temp;
  for(int i=1;i<=pos;i++)
   {
     //  temp2=temp;
       temp=temp->next;
   }
   if(temp->next==NULL)
   {
       temp->next=n;
       n->prev=temp;
   }
   else{
   n->next=temp->next;
   temp->next->prev=n;
   temp->next=n;
   n->prev=temp;
   }
  // return head;
 return;
}
