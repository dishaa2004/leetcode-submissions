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
    int findBottomLeftValue(TreeNode* root) {
        vector<int> level;
        queue<TreeNode*> Q;
        Q.push(root);
        // cout << "LEVEL 0 : " << root->val << "\n";
        vector<int> v;
        int lev = 0;
        while(Q.size()){
            // cout << "LEVEL " << lev++ << ": ";
            v.clear();
            int n = Q.size();
            for(int i=0;i<n;i++){
                TreeNode* cur = Q.front(); Q.pop();
                // cout << cur->val << " ";
                v.push_back(cur->val);
                if(cur->left) Q.push(cur->left);
                if(cur->right) Q.push(cur->right);
            }
            // cout << endl;
        }
        // if(v.size() == 0) return root->val;
        return v[0];
    }
};