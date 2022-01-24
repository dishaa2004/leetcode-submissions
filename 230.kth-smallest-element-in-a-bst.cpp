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
    int cnt = 0;
    int realk;
    int ans;
    void inorder(TreeNode* root)
    {
        
        if(!root){
            return;
        }
        
        inorder(root->left);
        cnt++;
        if(cnt == realk){
            ans = root->val;
        }
        inorder(root->right);

    }
    int kthSmallest(TreeNode* root, int k) {
        realk = k;
        inorder(root);
        return ans;
    }
};