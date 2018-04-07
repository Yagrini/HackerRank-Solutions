#include<vector>
/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(head==NULL) return;
    vector<int> vec;
    Node* tmp = head;
    while(tmp!=NULL){
        vec.push_back(tmp->data);
        tmp = tmp->next;
    }
    for(int i=vec.size()-1 ; i>=0 ;i--) cout << vec[i] << endl;
}


