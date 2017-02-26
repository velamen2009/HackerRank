/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    Node *p = headA, *q = headB;
    while(p != q){
        p = p->next;
        q = q->next;
        if(NULL == p){
            p = headB;
        }
        if(NULL == q){
            q = headA;
        }
    }
    return p->data;
}