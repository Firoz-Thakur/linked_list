 no of intial nodes  1<=n<=100
 position x      0<=x<=100
0 is the first node of the linked list.
if x=1 means after 1 node you have to insert the node .

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int x) {
SinglyLinkedListNode* temp=head;
SinglyLinkedListNode* temp2=new SinglyLinkedListNode(data);

if(x==0){
  temp2->next=head;
  return temp;
}
if(x==1)
 {
     temp2->next=temp->next;
     temp->next=temp;
     return head;
 }
for(int i=1;i<x;i++)
{
    temp=temp->next;
}
temp2->next=temp->next;
temp->next=temp2;
return head;
}
