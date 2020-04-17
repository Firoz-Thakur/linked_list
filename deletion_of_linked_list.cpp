SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
SinglyLinkedListNode* temp;
SinglyLinkedListNode* p;
int i=1;
if(position==0)
 {
temp=head;
head=head->next;
temp->next=NULL;
return head;
 }
 else{
 temp=head;
 while(i<position)
 {
 temp=temp->next;
  i++;}
  p=temp->next;
  temp->next=p->next;
  p->next=NULL;
  return head;
 }
}

