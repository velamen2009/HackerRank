
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
#include <vector>
void LevelOrder(node * root)
{
    if(NULL == root) return;  
    vector<node*> vec;
    vec.push_back(root);
    while(!vec.empty()){
        vector<node*> next;
        for(int i = 0; i < vec.size(); ++i){
            cout << vec[i]->data << " ";
            if(NULL != vec[i]->left){
                next.push_back(vec[i]->left);
            }
            if(NULL != vec[i]->right){
                next.push_back(vec[i]->right);
            }
        }
        vec = next;
    }
}