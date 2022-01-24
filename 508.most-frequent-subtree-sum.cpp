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
    map<int,int> mp;
    int dfs(TreeNode* root){
        if(!root){
            return 0;
        }
        int l = dfs(root->left);
        int r = dfs(root->right);
        mp[root->val + l + r]++;
        return root->val + l + r;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        int i = dfs(root);
        vector<int> ans;
        int mx = 0;
        for(auto &k : mp){
            mx = max(mx,k.second);
        }
        for(auto &k : mp){
            if(k.second == mx)
                ans.push_back(k.first);
        }
        return ans;
    }
};