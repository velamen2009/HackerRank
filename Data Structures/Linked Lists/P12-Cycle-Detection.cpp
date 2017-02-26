/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if(NULL == head || NULL == head->next){
        return false;
    }
    Node *p = head, *q = head->next;
    while(NULL != q){
        if(p == q){
            return true;
        }
        if(NULL == q->next){
            return false;
        }
        p = p->next;
        q = q->next->next;
    }
    return false;
}