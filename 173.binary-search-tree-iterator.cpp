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
class BSTIterator {
public:
    vector<int> v;
    void inorder(TreeNode* root)
    {
        
        if(!root){
            return;
        }
        v.push_back(root->val);
        inorder(root->left);
        inorder(root->right);

    }
    int idx = -1;
    BSTIterator(TreeNode* root) {
        v.clear();
        inorder(root);
        sort(v.begin(),v.end());
        idx = -1;
    }
    
    int next() {
        idx++;
        return v[idx];
    }
    
    bool hasNext() {
        cout << idx << endl;
        if(idx+1 < v.size()) return 1;
        return 0;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */