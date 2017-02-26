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
    Node* dummy = new Node();
    Node* p = dummy;
    while(NULL != headA && NULL != headB){
        if(headA->data <= headB->data){
            p->next = headA;
            headA = headA->next;
            p = p->next;
        }
        else{
            p->next = headB;
            headB = headB->next;
            p = p->next;
        }
    }
    if(NULL != headA){
        p->next = headA;
    }
    if(NULL != headB){
        p->next = headB;
    }
    return dummy->next;
}