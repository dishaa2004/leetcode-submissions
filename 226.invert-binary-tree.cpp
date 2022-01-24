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
    
    void helpmeswap(TreeNode* a){
        TreeNode* tmp = a->left;
        a->left = a->right;
        a->right = tmp;
    }
    
    TreeNode* invertTree(TreeNode* root) {
        //BFS iterative
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            TreeNode* cur = q.front();
            q.pop();
            if(cur == nullptr) continue;
            helpmeswap(cur);
            
            q.push(cur->left);
            q.push(cur->right);
            
        }
        return root;
    }
};