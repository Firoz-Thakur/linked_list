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

node* midpoint(node* head)
{
	if(head==NULL || head->next==NULL)
	 return head;
	node* slow=head;
	node* fast=head->next;
	while(fast!=NULL && fast->next!=NULL)
	{
		fast=fast->next->next;;
		slow=slow->next;
	}
return slow;
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

node* mergesort(node* head)
{
	if(head==NULL && head->next==NULL)
	 return head;
	
	
	node* mid=midpoint(head);
	node* a=head;;
	node* b=mid->next;
	mid->next=NULL;
	
	a=mergesort(a);
	b=mergesort(b);
	node *c=merg(a,b);
	return c;
}

int main() {
	// your code goes here
	node* head1=NULL;
	inserthead(head1,24);
	inserthead(head1,105);
	inserthead(head1,24);
	inserthead(head1,399);
	inserthead(head1,1);
	inserthead(head1,8);
    cout<<"head1"<<endl;
    print(head1);
	cout<<endl;
	node* sorted=mergesort(head1);//	print(sorted);
	return 0;
}
