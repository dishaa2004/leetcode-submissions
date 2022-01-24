class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rc = r*c;
        int m = mat.size();
        int n = mat[0].size();
        int mn  = m*n;
        
        if(mn != rc) return mat;
        vector<vector<int>> res(r,vector<int> (c));
        for(int i = 0; i < mn; i++)
        {
            res[i/c][i%c] = mat[i/n][i%n];
        }
        return res;
    }
};