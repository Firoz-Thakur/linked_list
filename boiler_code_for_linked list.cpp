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


int main() {
	// your code goes here
	node* head=NULL;
	inserthead(head,7);
	inserthead(head,9);
	inserthead(head,19);
	inserthead(head,3);
	inserthead(head,2);
	inserthead(head,4);
	insesertmid(head,3,1000);
	print(head);
	return 0;
}
