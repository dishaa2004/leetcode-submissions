class Solution {
public:
    int dp[201][201];
    int r,c;
    int dfs(int i, int j,vector<vector<int>> &grid){
        if(i == r){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int subans = 1e9;
        
        for(int col=0;col<c;col++){
            if(j != col){
                subans = min(subans,grid[i][col] + dfs(i+1,col,grid));
            }
        }
        return dp[i][j] = subans;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        r = grid.size();
        c = grid[0].size();
        memset(dp,-1,sizeof(dp));
        
        
        int ans = 1e9;
        for(int i=0;i<c;i++){
            int cur = grid[0][i] + dfs(1,i,grid);
            ans = min(ans,cur);
        }
        return ans;
    }
};