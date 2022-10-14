class Solution {
    vector<TreeNode*> solve(int s , int e) {
        vector<TreeNode*> res ;
        if(s > e){
            res.push_back(NULL) ;
            return res ;
        }

        for(int i = s ; i <= e ; i++){
            vector<TreeNode*> left = solve(s , i-1) ;
            vector<TreeNode*> right = solve(i+1 , e) ;

            for(int j = 0 ; j < (int) left.size() ; j++){
                for(int k = 0 ; k < (int) right.size() ; k++){
                    TreeNode *root = new TreeNode(i) ;
                    root->left = left[j] ;
                    root->right = right[k] ;
                    res.push_back(root) ;
                }
            }
        }
        return res ;
    }

public:
    vector<TreeNode*> generateTrees(int n) {
        if(n == 0) return vector<TreeNode*>(0) ;

        return solve(1,n) ; 
    }
};
