/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA==NULL && headB==NULL) return 1;
    Node* tmp = headA;
    Node* ptmp = headB;
    while(tmp!=NULL && ptmp!=NULL){
        if(tmp->data != ptmp->data) return 0;
        tmp = tmp->next;
        ptmp = ptmp->next;
    }
    if(tmp==NULL && ptmp!=NULL) return 0;
    if(ptmp==NULL && tmp!=NULL) return 0;
    return 1;
}


