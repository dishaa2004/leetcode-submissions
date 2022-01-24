class Solution {
public:
    bool ok(int i,int j,int r,int c){
        if(i==0 || j==0) return false;
        return true;
    }
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(),m=matrix[0].size();
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(ok(i,j,n,m)){
                    if(matrix[i][j] != matrix[i-1][j-1]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};