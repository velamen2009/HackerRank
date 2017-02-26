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
    Node *q = new Node();
    q->data = data;
    if(0 == position){
        q->next = head;
        return q;
    }
    Node *p = head;
    while(position > 1){
        p = p->next;
        --position;
    }
    Node *next = p->next;
    p->next = q;
    q->next = next;
    return head;
}