int getNode(SinglyLinkedListNode* head, int x) {

 SinglyLinkedListNode* temp=head;
 
 for(int i=0;i<x;i++)
 {
     temp=temp->next;
 }
 while(temp->next!=NULL)
 {
     head=head->next;
     temp=temp->next;
 }

 return head->data;
}
