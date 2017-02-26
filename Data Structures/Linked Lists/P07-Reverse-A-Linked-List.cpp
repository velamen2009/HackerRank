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
    if(!head || !head->next) return head;
    Node* p = head, *q = head->next;
    p->next = NULL;
    while(q){
        if(!q->next){
            q->next = p;
            return q;
        }
        else{
            Node* tmp = q->next;
            q->next = p;
            p = q;
            q = tmp;
        }
    }
    return NULL;
}