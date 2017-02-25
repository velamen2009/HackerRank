      Node* insert(Node *head,int data)
      {
          //Complete this method
          if(NULL == head){
              head = new Node(data);
          }
          else{
              Node *p = head;
              while(NULL != p->next){
                  p = p->next;
              }
              p->next = new Node(data);
          }
          return head;
      }