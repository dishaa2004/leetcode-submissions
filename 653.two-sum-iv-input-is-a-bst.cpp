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
    vector<int> arr;
    void dfs(TreeNode* r){
        if(!r){
            return;
        }
        arr.push_back(r->val);
        dfs(r->left);
        dfs(r->right);
    }
    bool findTarget(TreeNode* root, int k) {
        dfs(root);    
        // if()
        unordered_map<int,int> mp;
        
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(i!=j && arr[i]+arr[j] == k){
                    return 1;
                }
            }
        }
        return 0;
    }
};