class Solution {
public:
    int dp[101][101];
    int dfs(int i, int j, vector<vector<int>> &mat){
        if(i == mat.size()){
            return 0;
        }
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int subans = 1e9;
        subans = min(subans,mat[i][j] + dfs(i+1,j,mat));
        if(j-1 >= 0)
        subans = min(subans,mat[i][j] + dfs(i+1,j-1,mat));
        if(j+1 < mat.size())
        subans = min(subans,mat[i][j] + dfs(i+1,j+1,mat));
        
        return dp[i][j] = subans;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        memset(dp,-1,sizeof(dp));
        int ans = 1e9;
        for(int i=0;i<matrix[0].size();i++){
            ans = min(ans,matrix[0][i] + dfs(1,i,matrix));
            if(i-1 >= 0)
            ans = min(ans,matrix[0][i] + dfs(1,i-1,matrix));
            if(i+1 < matrix.size())
            ans = min(ans,matrix[0][i] + dfs(1,i+1,matrix));
        }
        return ans;
    }
};