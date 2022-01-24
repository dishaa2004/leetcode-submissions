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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> BFS; 
        if(!root){
            return BFS;
        }
        queue<TreeNode*> Q;
        Q.push(root);
        Q.push(NULL);
        vector<int> level;
        BFS.push_back({root->val});
        while(Q.size()){
            TreeNode* cur = Q.front(); Q.pop();
            if(cur == NULL){
                if(level.size())
                BFS.push_back(level);
                level.clear();
                if(Q.size()){
                    Q.push(NULL);
                }else{
                    break;
                }
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
        
        for(int i=0;i<BFS.size();i++){
            if(i&1) reverse(BFS[i].begin(),BFS[i].end());
        }
        
        return BFS;
    }
};