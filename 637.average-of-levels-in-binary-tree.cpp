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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*> Q;
        Q.push(root);
        Q.push(NULL);
        vector<double> ans;
        double v = 0;int cnt = 0;
        while(!Q.empty()){
            TreeNode* tmp = Q.front();
            Q.pop();
            if(tmp == NULL){
            ans.push_back(1.0*v/cnt);
            if(Q.empty()) break;
            cnt = 0;
            v = 0;
            Q.push(NULL);
            }
            else
            {
            cnt++;
            v += (tmp->val);
            if(tmp->left != NULL)
                Q.push(tmp->left);
            if(tmp->right != NULL)
                Q.push(tmp->right);
            }
            
        }
        return ans;
    }
};