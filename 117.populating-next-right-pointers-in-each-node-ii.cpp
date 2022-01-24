/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL){
            return NULL;
        }
        queue<Node*> Q;
        Q.push(root);
        Q.push(NULL);
        vector<vector<Node*>> mat;
        mat.push_back({root});
        vector<Node*> v; v.clear();
        while(Q.size()){
            Node* cur = Q.front(); Q.pop();
            if(cur == NULL){
                mat.push_back(v);
                v.clear();
                // Q.push(NULL);
                if(Q.empty()) break;
                Q.push(NULL);
            }else{
                if(cur->left != NULL){
                    Q.push(cur->left);
                    v.push_back(cur->left);
                }
                if(cur->right != NULL){
                    Q.push(cur->right);
                    v.push_back(cur->right);
                }
            }
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                cout << mat[i][j]->val << ":";
                if(j == mat[i].size()-1){
                    mat[i][j]->next = NULL;
                }else{
                    mat[i][j]->next = mat[i][j+1];
                }
            }
            cout << endl;
        }
        return root;
    }
};