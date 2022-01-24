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
    int ans = 0;
    void dfs(TreeNode* cur){
        if(!cur) return;
        
        if(cur->val % 2 == 0){
            if(cur->left != NULL){
                if(cur->left->left != NULL){
                    ans += (cur->left->left->val);
                }
                if(cur->left->right != NULL){
                    ans += (cur->left->right->val);
                }
            }
            
            if(cur->right != NULL){
                if(cur->right->left != NULL){
                    ans += (cur->right->left->val);
                }
                if(cur->right->right != NULL){
                    ans += (cur->right->right->val);
                }
            }
        }
        
        dfs(cur->left);
        dfs(cur->right);
        return;
        
    }
    int sumEvenGrandparent(TreeNode* root) {
        dfs(root);
        return ans;
    }
};