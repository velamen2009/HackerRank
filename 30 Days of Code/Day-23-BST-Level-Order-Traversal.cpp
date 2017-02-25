	void levelOrder(Node * root){
      //Write your code here
        if(NULL == root) return;
  	    vector<Node*> level;
        level.push_back(root);
        while(!level.empty()){
            vector<Node*> next;
            for(int i = 0; i < level.size(); ++i){
                Node *cur = level[i];
                if(NULL != cur->left){
                    next.push_back(cur->left);
                }
                if(NULL != cur->right){
                    next.push_back(cur->right);
                }
                cout << cur->data << " ";
            }
            level = next;
        }
	}