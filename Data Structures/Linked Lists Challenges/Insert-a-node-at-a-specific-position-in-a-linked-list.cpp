/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{ 
  // Complete this method only
  // Do not write main function. 
    Node* toinsert = new Node;
    toinsert->data = data;
    if(position==0){
        toinsert->next = head;
        return toinsert;
    }
    else{
        int i=1;
        Node* tmp = head;
        while(tmp->next!=NULL && position != i){
            tmp = tmp->next;
            i++;
        }
        toinsert->next = tmp->next;
        tmp->next = toinsert;
        return head;
    }
}


