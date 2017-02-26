/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
void inorder(Node *root, vector<int>& vals){
    if(NULL == root) return;
    inorder(root->left, vals);
    vals.push_back(root->data);
    inorder(root->right, vals);
}

bool checkBST(Node* root) {
    if(NULL == root) return true;
    vector<int> vals;
    inorder(root, vals);
    for(int i = 0; i <vals.size() - 1; ++i){
        if(vals[i] >= vals[i + 1]){
            return false;
        }
    }
    return true;
}