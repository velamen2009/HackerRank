
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        return depth(root) - 1;
    }

    int depth(Node* root){
        if(NULL == root) return 0;
        return 1 + max(depth(root->left), depth(root->right));
    }