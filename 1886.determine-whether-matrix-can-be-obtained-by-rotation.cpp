class Solution {
public:
    void transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> p(matrix.size(),vector<int>(matrix[0].size()));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                p[i][j] = matrix[j][i];
            }
        }
        matrix = p;
    }
    void convert(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix[0].size();i++)
        reverse(matrix[i].begin(),matrix[i].end());
    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        convert(matrix);
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat == target){
            return 1;
        }
        int tot = 5;
        while(tot--){
            rotate(mat);
            if(mat == target) return 1;
        }
        return 0;
    }
};