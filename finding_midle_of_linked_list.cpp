#include <iostream>
using namespace std;

node* findmiddle(node* head)
{
 node* slow =head;
 node* fast=head->next;
 while(fast!=NULL && fast->next!=NULL)
 {
 	slow=slow->next;
 	fast=fast->next->next;
 }
 return slow;
}
int main() {
	// your code goes here

  cout<<*findmiddle(head)<<endl;

	return 0;
}

intput :1 2 7 4 6 3
output : 7
input : 1 6 3 6 7 4 8
6
