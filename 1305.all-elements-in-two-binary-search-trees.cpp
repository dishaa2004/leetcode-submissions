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
    vector<int> v;
    void In(TreeNode* node)
    {
        if (node == NULL)
            return;
        In(node->left);
        v.push_back(node->val);
        In(node->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
        In(root1);
        In(root2);
        sort(v.begin(),v.end());
        return v;
    }
};