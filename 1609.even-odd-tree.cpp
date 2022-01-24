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
    bool isEvenOddTree(TreeNode* root) {
        // BFS
        
        if(root->left == NULL && root->right == NULL){
            int val = root->val;
            if(val&1) return 1;
            return 0;
        }
        
        if(!((root->val)&1)) return 0;
        
        queue<TreeNode*> Q;
        Q.push(root);
        Q.push(NULL);
        vector<vector<int>> all;
        vector<int> level;
        all.push_back({root->val});
        while(Q.size()){
            TreeNode* cur = Q.front(); Q.pop();
            
            if(cur == NULL){
                if(level.size())
                all.push_back(level);
                level.clear();
                if(Q.size() == 0) break;
                Q.push(NULL);
            }else{
                if(cur->left != NULL){
                    level.push_back(cur->left->val);
                    Q.push(cur->left);
                }
                
                if(cur->right != NULL){
                    level.push_back(cur->right->val);
                    Q.push(cur->right);
                }
            }
        }
        
        for(int i=0;i<all.size();i++){
            // Even i=0,2,4.. all odd integers strictly increasing
            if(i % 2 == 0){
                for(auto &k : all[i]){
                    if(k % 2 == 0) return 0;
                }

                for(int j=0;j<all[i].size()-1;j++){
                    if(all[i][j] >= all[i][j+1]) return 0;
                }
            }else{
                // Odd i=1,3,5.. all even integers strictly decreasing
                for(auto &k : all[i]){
                    if(k % 2 == 1) return 0;
                }

                for(int j=0;j<all[i].size()-1;j++){
                    if(all[i][j] <= all[i][j+1]) return 0;
                }
            }
        }
        
        
        return 1;
    }
};