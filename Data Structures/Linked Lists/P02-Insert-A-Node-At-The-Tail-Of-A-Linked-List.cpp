/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    if(NULL == head){
        head = new Node();
        head->data = data;
        return head;
    }
    Node* p = head;
    while(p->next){
        p = p->next;
    }
    Node* q = new Node();
    q->data = data;
    p->next = q;
    return head;
}