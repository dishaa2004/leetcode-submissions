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
    int max(TreeNode* node){
        while(node->right != NULL){
            node = node->right;
        }
        return node->val;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root == NULL){
            return NULL;
        }
        
        if(root->val < key){
            root->right = deleteNode(root->right,key);
        }else if(root->val > key){
            root->left = deleteNode(root->left,key);
        }else{
            // Important part
            
            if(root->left == NULL && root->right == NULL) // No child
            {
                return NULL; // Simply delete that node
            }else if(root->left == NULL){   // 1 child
                return root->right;
            }else if(root->right == NULL){  // 1 child
                return root->left;
            }else{
                //Another Important part   -    2 child
                // Approach : find root's left max and delete that node and remove max
                int lmax = max(root->left);
                root->val = lmax;
                root->left = deleteNode(root->left,lmax);
                
                return root;
            }
        }
        return root;
    }
};