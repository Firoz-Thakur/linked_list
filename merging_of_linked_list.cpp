#include <iostream>
using namespace std;


class node{
	
	public :
	int data;
	node* next;
	node(int d)
	{
		data=d;
		next=NULL;
	}
	
};

void inserthead(node* &head,int data)
{
	node* temp=new node(data);
	temp->next=head;
	head=temp;
}
void print(node* head)
{
	while(head!=NULL)
	 {
	 	cout<<head->data<<"-->";
	 	head=head->next;
	 }
}

void insesertmid(node* &head,int pos,int data)
{
	node* temp=new node(data);
	node* temp2=head;
	for(int i=0;i<pos;i++)
	{
		temp2=temp2->next;
	}
   
   temp->next=temp2->next;
   temp2->next=temp;
}
 int kth_node_from_last(node* head,int k)
 {
    node* fast=head;
    node* slow=head;
 	for(int i=1;i<k;i++)
 	  fast=fast->next;
 	while(fast->next!=NULL)
 	{
 		fast=fast->next;
 		slow=slow->next;
 	}
  return slow->data;
 }
 
node* merg(node* a,node* b)
{
	if(a==NULL)
	  return b;
	if(b==NULL)
	  return a;
	
 node* c;
 if(a->data<b->data)
 {
 	c=a;
 	c->next=merg(a->next,b);
 }
 else
  {
  	c=b;
  	c->next=merg(a,b->next);
  }
  return c;
}
int main() {
	// your code goes here
	node* head=NULL;
	inserthead(head,6);
	inserthead(head,3);
	inserthead(head,2);
	inserthead(head,1);
	node* head1=NULL;
	inserthead(head1,200);
	inserthead(head1,100);
//	insesertmid(head1,290,1000);
	print(head);
//	cout<<endl;
//	merge(head1,head2);
    int x=kth_node_from_last(head,2);	
	cout<<endl<<x<<endl;
	node* temp=merg(head,head1);
	print(temp);
	return 0;
}
