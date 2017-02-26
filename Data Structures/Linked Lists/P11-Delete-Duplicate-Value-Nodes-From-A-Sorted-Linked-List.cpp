/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(NULL == head || NULL == head->next) return head;
    Node *p = head, *q = head->next;
    while(NULL != q){
        if(p->data == q->data){
            q = q->next;
            p->next = q;
        }
        else{
            p = q;
            q = q->next;
        }
    }
    return head;
}