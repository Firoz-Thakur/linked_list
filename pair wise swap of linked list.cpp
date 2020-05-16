Given a linked list of N positive integers. You need to swap elements pairwise. Your task is to complete the function pairwise_swap().

Example:
Input:
2
7
1 2 3 4 5 6 7
6
1 2 3 4 5 6
Output:
2 1 4 3 6 5 7
2 1 4 3 6 5

Explanation:
Testcase 1: The linked list after swapping becomes: 1 2 3 4 5 6 7 -> 2 1 4 3 6 5 7.

struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
       swap(fast->data,slow->data);
       slow=slow->next->next;
       fast=fast->next->next;
    }
    if(fast==NULL)
    return head;
    else
        swap(slow->data,fast->data);
    
    return head;
}
using only one pointer :


struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node* slow=head;
    
    while(slow!=NULL && slow->next!=NULL)
    {
        swap(slow->data,slow->next->data);
        slow=slow->next->next;
    }
    
    return head;
}
