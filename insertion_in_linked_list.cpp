//insertion in linked list


#include <iostream>
using namespace std;

class node
{
 public:

	int data;
	node *next;

  node (int d)
  {
  	data=d;
  	next=NULL;
  }
};


int len(node *head)
{
	int c=1;
	node *temp=head;
	while(temp!=NULL)
	{
		c++;
	}
  return c;
}
void insert_at_middle(node*&head,int data,int pos)
{
    	node *temp=head;
        node *newnode=new node(data);
    	for(int i=1;i<pos;i++)
    	{
    		temp=temp->next;
    	}
      newnode->next=temp->next;
      temp->next=newnode;
    return ;
}
 void insert_at_tail(node*&head,int data)
 {  
 	node *temp=head;
 	
 	node *newnode=new node(data);
 	if(temp==NULL)
 	 {
 	 	head=newnode;
 	 	return ;
 	 }
 	while(temp->next!=NULL)
 	{
 		temp=temp->next;
 	}
 	temp->next=newnode;
 	return ;
 }
  void insert_at_head(node*&head,int data)
  {
  	node *temp=new node(data);
  	temp->next=head;
  	head=temp;
  }
  void print(node *head)
  {
  	node *temp=head;
  	while(temp!=NULL)
  	{
  		cout<<temp->data<<"-->";
  		temp=temp->next;
  	}
  }
int main() {
	// your code goes here
   node *head=NULL;
   insert_at_head(head,5);
   insert_at_head(head,6);
   insert_at_head(head,7);
   insert_at_head(head,8);
   insert_at_tail(head,9);
   insert_at_middle(head,100,3);
   print(head);
	return 0;
}
