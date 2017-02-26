#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, T, K;
    cin >> N;
    TreeNode *root = new TreeNode(1);
    vector<TreeNode*> row;
    row.push_back(root);
    int left, right;
    while(N){
        vector<TreeNode*> next;
        for(int i = 0; i < row.size(); ++i){
            cin >> left >> right;
            --N;
            if(-1 != left){
                TreeNode *l = new TreeNode(left);
                row[i]->left = l;
                next.push_back(l);
            }
            if(-1 != right){
                TreeNode *r = new TreeNode(right);
                row[i]->right = r;
                next.push_back(r);
            }
        }
        row = next;
    }
    cin >> T;
    for(int i = 0; i < T; ++i){
        cin >> K;
        int depth = 1;
        vector<TreeNode*> row;
        row.push_back(root);
        while(!row.empty()){
            vector<TreeNode*> next;
            if(0 == depth % K){
                for(int j = 0; j < row.size(); ++j){
                    TreeNode *t = row[j]->left;
                    row[j]->left = row[j]->right;
                    row[j]->right = t;
                }
            }
            for(int j = 0; j <row.size(); ++j){
                if(NULL != row[j]->left){
                    next.push_back(row[j]->left);
                }
                if(NULL != row[j]->right){
                    next.push_back(row[j]->right);
                }
            }
            ++depth;
            row = next;
        }
        //// Inorder Trans
        stack<TreeNode*> s;
        TreeNode *p = root;
        while(!s.empty() || NULL != p){
            if(NULL != p){
                s.push(p);
                p = p->left;
            }
            else{
                cout << s.top()->data << " ";
                p = s.top()->right;
                s.pop();
            }
        }
        cout << endl;
    }
    return 0;
}