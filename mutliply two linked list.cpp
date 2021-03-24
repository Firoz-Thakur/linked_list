https://practice.geeksforgeeks.org/problems/multiply-two-linked-lists/1

long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long int N=1000000007;
  long long int num1=0;
  long long int num2=0;
  while(l1 || l2)
  {
      if(l1)
      {
          num1=(num1*10)+l1->data;
          l1=l1->next;
      }
       if(l2)
      {
          num1=(num1*10)+l2->data;
          l2=l2->next;
      }
      
  }
  return num1*num2;
 
}
