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
    int ans = INT_MIN;
    
    void dfs(TreeNode* root, int h)
    {
        if(!root){
            ans = max(ans,h);
            return;
        }
        
        dfs(root->left,1+h);
        dfs(root->right,1+h);
    }
    
    int maxDepth(TreeNode* root) {
        
        dfs(root,0);
        
        return ans == INT_MIN ? 0 : ans;
        
    }
};