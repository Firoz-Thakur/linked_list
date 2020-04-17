//reversal using iteration


SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
 
   SinglyLinkedListNode* cur=head;;
   SinglyLinkedListNode* fast=head->next;
   SinglyLinkedListNode* slow=NULL;
   while(fast!=NULL)
   {
      cur->next=slow;
      slow=cur;
      cur=fast;
      fast=fast->next;
   }
   cur->next=slow;
  return cur;
}


//reversal using recursion.
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {


 if(head->next==NULL)
  {
     return head;  
  }
 SinglyLinkedListNode* smalhead=reverse(head->next); 
 SinglyLinkedListNode* cur=head;
 cur->next->next=cur;
 cur->next=NULL;
 return smalhead;
}
