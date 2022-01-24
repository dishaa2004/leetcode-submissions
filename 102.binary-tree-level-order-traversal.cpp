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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*> Q;
        Q.push(root);
        Q.push(NULL);
        vector<vector<int>> ans;
        vector<int> v;
        while(!Q.empty()){
            TreeNode* tmp = Q.front();
            Q.pop();
            if(tmp == NULL){
            ans.push_back(v);
            if(Q.empty()) break;
            
            v.clear();
            Q.push(NULL);
            }
            else
            {
            v.push_back(tmp->val);
            if(tmp->left != NULL)
                Q.push(tmp->left);
            if(tmp->right != NULL)
                Q.push(tmp->right);
            }
            
        }
        return ans;
    }
};