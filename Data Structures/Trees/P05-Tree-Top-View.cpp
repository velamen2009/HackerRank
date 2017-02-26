/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
#include <stack>
void top_view(node * root)
{
    if(NULL == root) return; 
    stack<node*> s;
    while(NULL != root){
        s.push(root);
        root = root->left;
    }
    node *p = NULL;
    while(!s.empty()){
        p = s.top();
        cout << p->data << " ";
        s.pop();
    }
    p = p->right;
    while(NULL != p){
        cout << p->data << " ";
        p = p->right;
    }
}