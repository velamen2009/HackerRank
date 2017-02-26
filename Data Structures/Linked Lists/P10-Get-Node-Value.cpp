/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node* p = head, *q = head;
    int k = -1;
    while(NULL != q->next){
        q = q->next;
        ++k;
        if(k >= positionFromTail){
            p = p->next;
        }
    }
    return p->data;
}