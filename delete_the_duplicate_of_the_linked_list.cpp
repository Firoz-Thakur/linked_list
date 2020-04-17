

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {

SinglyLinkedListNode* temp=head;
SinglyLinkedListNode* p=head->next;
while(p!=NULL)
{
   if(temp->data==p->data)
   {
       p=p->next;
       temp->next=p;
   }    
   else
    {
        p=p->next;
        temp=temp->next;
    }
}
return head;
}
