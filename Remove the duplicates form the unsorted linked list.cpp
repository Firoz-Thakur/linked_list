Node * removeDuplicates( Node *head) 
{
 // your code goes here
  map<int,bool> mp;
  Node* temp1=NULL;
  Node* temp=head;
  while(temp!=NULL)
  {
      if(mp.count(temp->data))
      {
          temp1->next=temp->next;
          temp=temp->next;
      }
     else
     {   
         mp[temp->data]=true;
         temp1=temp;
         temp=temp->next;
     }
     
      
  }
 return head;
 }
