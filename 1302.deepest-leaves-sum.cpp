
class Solution {
public:
    int mD(TreeNode* node)
    {
        if (node == nullptr)
            return 0;    

        return 1 + max(mD(node->left),mD(node->right));    
    }
    
    int helper(TreeNode* node, int dep)
    {
        if (node == nullptr)
            return 0;    
 
        if (dep == 1)
            return node->val;
 
        // recursive call to left and right nodes
        return helper(node->left, dep - 1) + helper(node->right, dep - 1);
    }
    int deepestLeavesSum(TreeNode* root) {
        int maxDepth = mD(root);
        int sum = helper(root,maxDepth);
        return sum;
    }
};