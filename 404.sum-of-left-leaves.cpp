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
    
    void ok(TreeNode *r,bool f){
        if(!r) return;
        if(f && r->left == nullptr && r->right == nullptr) {
            cout << r->val << " ";
            ans += r->val;
        }
        ok(r->left,1);
        ok(r->right,0);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        ok(root,0);
        return ans;
    }
};