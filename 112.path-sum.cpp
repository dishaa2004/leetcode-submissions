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
    bool isLeaf(TreeNode* node) {
        return (node->left == nullptr && node->right == nullptr);
    }
    vector<vector<int>> paths;
    void printRootToleafPaths(TreeNode* node, vector<int> &path)
    {
        // base case
        if (node == nullptr) {
            return;
        }

        path.push_back(node->val);

        if (isLeaf(node))
        {
            paths.push_back(path);
        }

        // recur for the left and right subtree
        printRootToleafPaths(node->left, path);
        printRootToleafPaths(node->right, path);

        // backtrack: remove the current node after the left, and right subtree are done
        path.pop_back();
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        ios_base::sync_with_stdio(false), cin.tie(nullptr);
        vector<int> path;
        printRootToleafPaths(root, path);
        for(int i=0;i<paths.size();i++){
            int sum = 0;
            for(int j=0;j<paths[i].size();j++){
                sum+=paths[i][j];
            }
            if(sum == targetSum)
                return 1;
        }
        
        return 0;
        
        
    }
};