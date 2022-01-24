class Solution {
public:
    //
    //  1 3 5 2 1 Max 
    // 1 3 1 1 1 Min 
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        int x=0;
        for(int i=0;i<m;i++){
            x+=grid[0][i];
            dp[0][i] = x;
        }
        x=0;
        for(int j=0;j<n;j++){
            x+=grid[j][0];
            dp[j][0] = x;
        }
        
            
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                dp[i][j] = grid[i][j] + min(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        
        return dp[n-1][m-1];
        
    }
};