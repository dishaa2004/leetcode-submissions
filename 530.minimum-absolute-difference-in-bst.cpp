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
    priority_queue<int> pq;
    void inorder(TreeNode *root){
        if(root == NULL)
            return;
        
        pq.push(root->val);
        
        inorder(root->left);
        inorder(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        vector<int> v;
        int ans = INT_MAX;
        while(pq.size() > 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            // cout<<a<<" "<<b<<endl;
            ans = min(ans,a-b);
        }
        return ans;
    }
};