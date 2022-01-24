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
    vector<int> v;
    void dfs(TreeNode* root){
        if(!root) return;
        
        
        v.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        dfs(root);
        sort(v.begin(),v.end());
        int ans = v[1] - v[0];
        for(int i=2;i<v.size();i++){
            ans = min(v[i]-v[i-1],ans);
        }
        return ans;
    }
};