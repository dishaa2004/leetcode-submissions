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
    TreeNode* help(vector<int> &v,int s,int e){
        if(s>=e) return NULL;
        int mid = s + (e-s)/2;
        
        return new TreeNode(v[mid],help(v,s,mid),help(v,mid+1,e));
        
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return help(nums,0,nums.size());
    }
};