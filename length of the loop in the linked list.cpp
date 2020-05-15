 Node* slow=head;
   Node* fast=head->next;
   int flag=0;
   while( fast!=NULL && fast->next!=NULL )
   {
       if(fast==slow){
           flag=1;
           break;
       }
       else
       {
           fast=fast->next->next;
           slow=slow->next;
       }
   }
  //Node* temp=slow;     
  slow=slow->next;
  int c=1;
  if(flag==0)
   return 0;
   while(slow!=fast)
    {
      slow=slow->next;
       c++;
     }
     
    return c; 
}
