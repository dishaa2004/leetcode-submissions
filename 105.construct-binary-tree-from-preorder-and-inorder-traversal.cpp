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
    TreeNode* build(vector<int> preorder,vector<int> inorder,int pre,int s,int e){
        
        if(s > e){
            return NULL;
        }
        int i = s;
        int curr = preorder[pre]; 
        TreeNode* curNode = new TreeNode(curr);
        
        if(s == e){
            return curNode;
        }
        
        while(preorder[pre] != inorder[i]){
            i++;
        }
        
        curNode->left = build(preorder,inorder,pre+1,s,i-1);
        curNode->right = build(preorder,inorder,pre+1+i-s,i+1,e);
        return curNode;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() == 0)
            return new TreeNode();
        if(preorder.size()==1)
            return new TreeNode(preorder[0]);
        
        return build(preorder,inorder,0,0,preorder.size()-1);
    }
};