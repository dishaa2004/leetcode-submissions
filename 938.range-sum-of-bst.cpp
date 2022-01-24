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
    int sum = 0;
    void RSum(TreeNode* root, int l, int h){
        if(root == NULL){
            return;
        }
        if(l < root->val && h < root->val){
            RSum(root->left,l,h);
        }else if(l > root->val && h > root->val){
            RSum(root->right,l,h);
        }else{
            RSum(root->left,l,h);
            
            sum += root->val;
            
            RSum(root->right,l,h);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        RSum(root,low,high);
        return sum;
    }
};