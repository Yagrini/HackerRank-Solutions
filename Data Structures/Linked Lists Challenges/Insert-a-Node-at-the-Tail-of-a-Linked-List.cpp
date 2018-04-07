/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
   Node* toinsert = new Node;
   toinsert->data = data;
   toinsert->next = NULL;
   if(head==NULL) return toinsert;
   else{
       Node* tmp = head;
       while(tmp->next!=NULL)tmp = tmp->next;
       tmp->next = toinsert;
       return head;
   }
}


