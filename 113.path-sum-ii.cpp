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
    vector<vector<int>> ans;
    void dfs(TreeNode* root, int targetSum,vector<int> cur)
    {
        if(!root){
            return;
        }
        
        if(root->left == nullptr && root->right == nullptr){
            cur.push_back(root->val);
            if(accumulate(cur.begin(),cur.end(),0) == targetSum){
                ans.push_back(cur);
            }
        }
        cur.push_back(root->val);
        dfs(root->left,targetSum,cur);
        dfs(root->right,targetSum,cur);
        
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        ans.clear();

        dfs(root,targetSum,{});
        
        return ans;
    }
};