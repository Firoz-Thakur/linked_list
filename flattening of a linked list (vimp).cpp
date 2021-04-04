   
Node* merg(Node* a, Node* b)
{
    if(a==NULL)
      return b;
    if(b==NULL)
     return a;
     
    Node* c; 
    
    if(a->data<b->data)
    {
        c=a;
        c->bottom=merg(a->bottom,b);
    }
    else
    {
        c=b;
        c->bottom=merg(a,b->bottom);
    }
     return c;
}

Node *flatten(Node *root)
{
   // Your code here
   
   if(root==NULL || root->next==NULL)
    return root;
    
    root->next = flatten(root->next);
    
    root=merg(root,root->next);
    
    return root;
}
