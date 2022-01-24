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
    vector<string> v;
    void dfs(TreeNode* root, string cur){
        if(!root){
            return;
        }
        
        if(root->left == NULL && root->right == NULL){
            cur.push_back(root->val+'a');
            string temp = string(cur.rbegin(),cur.rend());
            v.push_back(temp);
            return;
        }
        
        cur.push_back(root->val + 'a');
        dfs(root->left,cur);
        dfs(root->right,cur);
    }
    
    string smallestFromLeaf(TreeNode* root) {
        string cur = "";
        dfs(root,cur);
        sort(v.begin(),v.end(),[](const auto &a, const auto &b){
            return a+b < b+a;
        });
        return v[0];
    }
};