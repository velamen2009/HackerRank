		int getHeight(Node* root){
          //Write your code here
            if(NULL == root) return 0;
            return (getHeightNext(root->left) > getHeightNext(root->right) ? getHeightNext(root->left) : getHeightNext(root->right));
        }
        
        int getHeightNext(Node* root){
          //Write your code here
            if(NULL == root) return 0;
            return 1 + (getHeightNext(root->left) > getHeightNext(root->right) ? getHeightNext(root->left) : getHeightNext(root->right));
        }
