/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
    if(NULL == head || NULL == head->next) return head;
    Node *p = head, *q = head->next;
    p->next = NULL;
    while(NULL != q){
        Node* t = q->next;
        p->prev = q;
        q->next = p;
        q->prev = NULL;
        p = q;
        q = t;
    }
    return p;
}