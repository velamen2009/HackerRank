/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include <stack>
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(!head) return;
    stack<int> s;
    while(head){
        s.push(head->data);
        head = head->next;
    }
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}