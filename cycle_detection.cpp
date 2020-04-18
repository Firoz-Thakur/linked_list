bool has_cycle(SinglyLinkedListNode* head) {

SinglyLinkedListNode* slow= head;
SinglyLinkedListNode* fast=head->next;

while(fast!=NULL && fast->next!=NULL)
{
   if(slow==fast)
    return true;
slow=slow->next;
fast=fast->next->next;
}
return false;
}
