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
    if(0 == position){ return head->next; }
    Node* p = head;
    while(position > 1){
        p = p->next;
        --position;
    }
    if(NULL == p->next->next){
        p->next = NULL;
    }
    else{
        p->next = p->next->next;
    }
    return head;
}