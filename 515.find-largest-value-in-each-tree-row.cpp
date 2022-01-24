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
    vector<int> largestValues(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        queue<TreeNode*> Q;
        Q.push(root);
        Q.push(NULL);
        vector<int> ans;
        int mx = INT_MIN;
        while(Q.size()){
            TreeNode* cur = Q.front();
            Q.pop();
            if(cur == NULL){
                ans.push_back(mx);
                if(Q.empty()) break;
                mx = INT_MIN;
                Q.push(NULL);
            }else{
                mx = max(mx,cur->val);
                if(cur->left != NULL)
                Q.push(cur->left);
                if(cur->right != NULL)
                Q.push(cur->right);
            }
            
        }
        return ans;
    }
};