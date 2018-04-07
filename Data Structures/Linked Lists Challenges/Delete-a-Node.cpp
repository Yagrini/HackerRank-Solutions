/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if(position==0) return head->next;
    int i=1;
    Node* tmp = head;
    while(i!=position){
        tmp=tmp->next;
        i++;
    }
    tmp->next = (tmp->next)->next;
    return head;
}


