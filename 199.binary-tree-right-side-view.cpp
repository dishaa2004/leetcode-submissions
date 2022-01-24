/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root){
            return {};
        }
        queue<TreeNode*> Q;
        Q.push(root);
        Q.push(NULL);
        vector<int> level;
        vector<vector<int>> BFS;
        BFS.push_back({root->val});
        while(Q.size()){
            TreeNode* cur = Q.front(); Q.pop();
            if(cur == NULL){
                if(level.size());
                BFS.push_back(level);
                level.clear();
                if(Q.empty()) break;
                else Q.push(NULL);
            }else{
                
                if(cur->left){
                    level.push_back(cur->left->val);
                    Q.push(cur->left);
                }
                
                if(cur->right){
                    level.push_back(cur->right->val);
                    Q.push(cur->right);
                }
                
            }
        }
        vector<int> rightview;
        
        for(auto &k : BFS){
            if(k.size()){
                rightview.push_back(k.back());
            }
            
        }
        
        return rightview;
    }
};