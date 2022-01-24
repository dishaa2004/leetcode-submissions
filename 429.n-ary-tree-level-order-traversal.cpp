/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
         if(root == NULL) return {};
        queue<Node*> Q;
        Q.push(root);
        Q.push(NULL);
        vector<vector<int>> ans;
        vector<int> v;
        while(!Q.empty()){
            Node* tmp = Q.front();
            Q.pop();
            if(tmp == NULL){
            ans.push_back(v);
            if(Q.empty()) break;
            
            v.clear();
            Q.push(NULL);
            }
            else
            {
            v.push_back(tmp->val);
            // if(tmp->left != NULL)
            //     Q.push(tmp->left);
            // if(tmp->right != NULL)
            //     Q.push(tmp->right);
                if(tmp){
                for(auto &k : tmp->children){
                    if(k)
                        Q.push(k);
                    }
                }
            }
        }
        // reverse(ans.begin(),ans.end());
        return ans;
    }
};