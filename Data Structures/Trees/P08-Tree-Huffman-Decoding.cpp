/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/

void decode_huff(node * root,string s)
{
    node *p = root;
    for(int i = 0; i < s.size(); ++i){
        if(NULL == p->left && NULL == p->right){
            cout << p->data;
            p = root;
        }
        if('0' == s[i]){
            p = p->left;
        }
        else{
            p = p->right;
        }
    }
    cout << p->data;
}