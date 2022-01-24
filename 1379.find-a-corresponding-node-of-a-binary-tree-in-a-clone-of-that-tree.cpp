/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    TreeNode* dfs(TreeNode* cl, TreeNode* tar){
        if(cl == NULL){
            return cl;
        }
        if(cl->val == tar->val){
            ans = cl;
            return cl;
        }
        
        dfs(cl->left,tar);
        dfs(cl->right,tar);
        return cl;
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* p = dfs(cloned,target);
        return ans;
    }
};