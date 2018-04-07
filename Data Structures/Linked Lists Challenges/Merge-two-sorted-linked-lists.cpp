/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA == NULL) return headB;
    if(headB == NULL) return headA;
    if(headA == NULL && headB == NULL) return NULL;
    Node* R = new Node;
    if(headA->data<=headB->data){
        R->data = headA->data;
        R->next = MergeLists(headA->next,headB);
    } else{
        R->data = headB->data;
        R->next = MergeLists(headA,headB->next);
    }
    return R;
}


