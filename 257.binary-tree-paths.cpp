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
    void RR(TreeNode* node, vector<int> &path)
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
        RR(node->left, path);
        RR(node->right, path);

        // backtrack: remove the current node after the left, and right subtree are done
        path.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> path;
        vector<string> ans;
        RR(root,path);
        for(int i=0;i<paths.size();i++){
            // int p = pow(10,paths[i].size()-1);
            string str = "";
            for(int j=0;j<paths[i].size();j++){
                    str += (to_string(paths[i][j])+"->"); 
            }
            str.pop_back();str.pop_back();
            ans.push_back(str);
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }
};