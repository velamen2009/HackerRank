/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
void inOrder(Node* root, vector<int>& arr){
    if(NULL == root) return;
    inOrder(root->left, arr);
    arr.push_back(root->data);
    inOrder(root->right, arr);
}

bool checkBST(Node* root) {
    vector<int> arr;
    inOrder(root, arr);
    for(int i = 1; i < arr.size(); ++i){
        if(arr[i] <= arr[i - 1]){
            return false;
        }
    }
    return true;
}