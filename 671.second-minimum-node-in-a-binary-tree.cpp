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
    set<int> v;
    void dfs(TreeNode* root){
        if(!root) return;
        
        
        v.insert(root->val);
        dfs(root->left);
        dfs(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        dfs(root);
        if(v.size() == 1){
            return -1;
        }
        auto it = v.begin();
        ++it;
        return *it;
    }
};