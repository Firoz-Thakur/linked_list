DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

DoublyLinkedListNode* slow=NULL;
DoublyLinkedListNode* fast=head;
DoublyLinkedListNode* temp=new DoublyLinkedListNode(data);

 if(fast->data > temp->data)
    {
        temp->next=fast;
        fast->prev=temp;
        return temp;
    }
while(fast!=NULL)
{
   if(fast->data>temp->data)
   {
       temp->next=fast;
       fast->prev=temp;
       slow->next=temp;
       temp->prev=slow;
       return head;
   }
  slow=fast;
  fast=fast->next;
}
slow->next=temp;
temp->prev=slow; 
return head;
}
