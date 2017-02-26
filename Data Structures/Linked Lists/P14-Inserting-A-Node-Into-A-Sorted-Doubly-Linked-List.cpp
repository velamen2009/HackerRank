/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    if(NULL == head){
        head = new Node();
        head->data = data;
    }
    else{
        Node *p = head, *q = NULL;
        while(NULL != p && p->data < data){
            q = p;
            p = p->next;
        }
        Node *t = new Node();
        t->data = data;
        if(NULL == q){
            t->next = p;
            p->prev = t;
            head = t;
        }
        else if(NULL == p){
            q->next = t;
            t->prev = q;
        }
        else{
            q->next = t;
            t->prev = q;
            t->next = p;
            p->prev = t;
        }
    }
    return head;
}