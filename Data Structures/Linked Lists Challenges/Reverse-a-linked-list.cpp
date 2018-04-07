/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
   if(head==NULL || head->next==NULL) return head;
   else{
        Node* tmp = Reverse(head->next);
        (head->next)->next = head; 
        head->next = NULL;  
        return tmp; 
    }
   
}


